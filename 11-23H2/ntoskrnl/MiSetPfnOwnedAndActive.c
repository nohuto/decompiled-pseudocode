/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1402E2FCC
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x1402E2C20 (MiAssignNonPagedPoolPte.c)
 *     MiFindContiguousPagesEx @ 0x1403BB1F8 (MiFindContiguousPagesEx.c)
 *     MiFindLargeNodePage @ 0x14061DBB8 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x140A2E7EC (MiRemoveMdlPages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v9 = MiLockPageInline(a1);
  v10 = *(unsigned __int8 *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  v11 = v9;
  if ( v10 >> 6 != a4 )
  {
    MiChangePageAttribute(a1, a4, 1LL);
    LOBYTE(v10) = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  result = a5;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v10 & 0xF8 | 6;
  if ( (a2 & 3) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    result = 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v11 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  return result;
}
