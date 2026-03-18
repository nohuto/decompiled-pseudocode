/*
 * XREFs of KeFlushSingleCurrentTb @ 0x1403AD304
 * Callers:
 *     MiDbgReleaseAddress @ 0x1403AD0A8 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403AD16C (MiDbgWriteCheck.c)
 *     MiStackTheftIsr @ 0x140590E20 (MiStackTheftIsr.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405A4C68 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1405A4FB8 (MiDbgUnTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x1405A6AE4 (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140A51570 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x1402F3A88 (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x14039DB1C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056F6CC (KiPrepareFlushCurrentAffinity.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

char __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // r14
  char v9; // di
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  _KPROCESS *Process; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h]
  _BYTE v28[272]; // [rsp+78h] [rbp-90h] BYREF

  v25 = 0LL;
  memset(v28, 0, 0x108uLL);
  LOBYTE(v23) = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  v8 = IsSecureProcessFlush;
  v9 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( !IsSecureProcessFlush && !v9
    || (KiPrepareFlushParameters(a2, (unsigned __int64 *)&v25, (char *)&v23),
        KiPrepareFlushCurrentAffinity(v28),
        LOBYTE(v12) = v23,
        LOBYTE(v13) = v8,
        v26 = a1 & 0xFFFFFFFFFFFFF000uLL,
        LOBYTE(_RAX) = HvlFlushRangeListTb(v25, (__int64)v28, v12, v13, v9, 1, (__int64)&v26),
        !(_BYTE)_RAX) )
  {
    LODWORD(_RAX) = 1 << a2;
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( KiFlushPcid )
      {
        _RAX = KeGetCurrentThread();
        Process = _RAX->ApcState.Process;
        if ( !Process->AddressPolicy )
        {
          if ( (KiFlushPcid & 2) != 0 )
          {
            *(_QWORD *)&v27 = 1LL;
            *((_QWORD *)&v27 + 1) = a1;
            LODWORD(_RAX) = 0;
            __asm { invpcid eax, [rsp+1B0h+var_158+8] }
          }
          else
          {
            LOBYTE(_RAX) = KiSetUserTbFlushPending(Process, v5, v6, v7);
          }
        }
      }
    }
    __invlpg((void *)a1);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( VmTbFlushEnabled )
  {
    v24 = v11;
    LOBYTE(_RAX) = VmFlushTb(1LL, &v24, a2);
  }
  if ( ExTbFlushActive )
  {
    v24 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    ExFlushTb(1LL, &v24, a2);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    LOBYTE(_RAX) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return (char)_RAX;
}
