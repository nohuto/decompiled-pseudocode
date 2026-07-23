/*
 * XREFs of MiTradeBootImagePage @ 0x140B4A55C
 * Callers:
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     MiCopyPfnEntryEx @ 0x140219D80 (MiCopyPfnEntryEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14027F450 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCount @ 0x140280690 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x140283CF0 (MiCopyPage.c)
 *     MiWriteValidPteNewPage @ 0x1402EB04C (MiWriteValidPteNewPage.c)
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     MiClearPfnImageVerified @ 0x140335218 (MiClearPfnImageVerified.c)
 *     MiLockNestedPageAtDpcInline @ 0x140348380 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPrivilegedPage @ 0x14056ECC8 (KeCopyPrivilegedPage.c)
 */

void __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  __int64 *v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[24]; // [rsp+60h] [rbp-A0h] BYREF

  v17 = (__int64 *)a1;
  memset(v19, 0, 0xB8uLL);
  v19[3] = 0LL;
  LODWORD(v19[1]) = 20;
  v15 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v15;
  v16 = (__int64)(a1 << 25) >> 16;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v15) >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x220000000000LL);
  MiCopyPfnEntryEx(48 * a2 - 0x220000000000LL, (__int128 *)v6);
  v8 = ((unsigned int)MiFlags >> 14) & 1;
  if ( !v8 || ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
  {
    MiCopyPage(a2, v5, 2 * v8 + 4);
  }
  else
  {
    v18 = (unsigned __int64)v16;
    KeCopyPrivilegedPage(a2, &v18, v5, &v18, 0LL, 1);
  }
  v15 = v4 ^ (v4 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL;
  MiWriteValidPteNewPage(v17, v15, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v9 = v16;
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v19, v9, 1LL, 0);
  MiFlushTbList((int *)v19);
  if ( (MiFlags & 0x4000) == 0 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
    MiClearPfnImageVerified(48 * v5 - 0x220000000000LL, 12);
  *(_BYTE *)(v6 + 35) &= ~8u;
  MiDecrementShareCount(48 * v5 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
}
