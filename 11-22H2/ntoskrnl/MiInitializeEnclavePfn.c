/*
 * XREFs of MiInitializeEnclavePfn @ 0x140648174
 * Callers:
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140A3D7F8 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285680 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiInitializeEnclavePfn(__int64 a1, __int64 a2, char a3)
{
  _KPROCESS *Process; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  char v8; // al
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // dl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 48 * a1 - 0x220000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6);
  v8 = *(_BYTE *)(v6 + 34) & 0xF8 | 6;
  *(_QWORD *)v6 ^= (*(_QWORD *)v6 ^ ((unsigned __int64)Process >> 3)) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(v6 + 34) = v8;
  v9 = *(_QWORD *)(v6 + 24) & 0xC000000000000001uLL;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 24) = v9 | 1;
  *(_BYTE *)(v6 + 34) |= 0x10u;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)(v6 + 16) = MiSwizzleInvalidPte(32LL * (a3 & 0x1F));
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & v10) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (v10 + (unsigned __int8)v7));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
}
