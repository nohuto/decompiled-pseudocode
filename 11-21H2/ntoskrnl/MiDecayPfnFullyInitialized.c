/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x1402302B0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiDeleteVaTail @ 0x14032F0E0 (MiDeleteVaTail.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1403277D0 (MiAcquirePageListLock.c)
 *     MiReleasePageListLock @ 0x140338D00 (MiReleasePageListLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(PSLIST_ENTRY ListEntry)
{
  int v2; // edi
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 Next; // rax
  PSLIST_ENTRY result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  int v13[4]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[112]; // [rsp+30h] [rbp-A8h] BYREF

  memset(v14, 0, 0x68uLL);
  v2 = 0;
  v3 = *(_QWORD *)(qword_140C51F48 + 8 * ((*((_QWORD *)&ListEntry[2].Next + 1) >> 43) & 0x3FFLL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v13[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&ListEntry[1].Next + 2, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(v13);
    while ( *((__int64 *)&ListEntry[1].Next + 1) < 0 );
  }
  if ( (BYTE3(ListEntry[2].Next) & 8) != 0 )
  {
    MiAcquirePageListLock(v3 + 3320, ListEntry, 1LL, v14, v13[0]);
    Next = (unsigned __int64)ListEntry[1].Next;
    if ( qword_140C50780 && (Next & 0x10) == 0 )
      Next &= ~qword_140C50780;
    if ( ((Next >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)&ListEntry[0x22000000000LL] >> 4) )
    {
      MiUnlinkPageFromListEx((ULONG_PTR)ListEntry);
      v2 = 1;
    }
    BYTE3(ListEntry[2].Next) &= ~8u;
    MiReleasePageListLock(v3 + 3320, v14);
  }
  else
  {
    v2 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)&ListEntry[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = (PSLIST_ENTRY)CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    return RtlpInterlockedPushEntrySList(&stru_140C52CF0, ListEntry);
  return result;
}
