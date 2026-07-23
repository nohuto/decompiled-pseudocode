/*
 * XREFs of KiParkCurrentProcessor @ 0x14057E38C
 * Callers:
 *     KiSearchForNewThread @ 0x140240420 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x14057DD5C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030889C (KiTransitionSchedulingGroupGeneration.c)
 *     KiIsPrcbThread @ 0x140324F90 (KiIsPrcbThread.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14057DEAC (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiFlushReadyLists @ 0x14057E2A4 (KiFlushReadyLists.c)
 *     KiAdjustRescheduleContextForParking @ 0x14058052C (KiAdjustRescheduleContextForParking.c)
 */

char __fastcall KiParkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  char v15; // r11
  char v17[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[3]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v21[336]; // [rsp+50h] [rbp-B0h] BYREF

  v17[0] = 0;
  v18 = 0LL;
  memset(v21, 0, sizeof(v21));
  v8 = *(_QWORD *)(a1 + 200);
  _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v8);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 1, v17);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 112));
  v10 = *(_BYTE *)(a1 + 35) | 8;
  *(_BYTE *)(a1 + 35) = v10;
  if ( (v10 & 1) == 0 )
  {
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(_QWORD *)a2 );
    }
    *(_QWORD *)(a2 + 8) ^= v8;
    _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 8);
  KiUpdateThreadPriority(a1, v9, *(_QWORD *)(a1 + 24), 63, v11 == *(_QWORD *)(a1 + 24));
  if ( KiGroupSchedulingEnabled )
    KiTransitionSchedulingGroupGeneration(a1, v12, MEMORY[0xFFFFF78000000320], 1);
  KiFlushReadyLists(a1 + 32576, (unsigned int *)(a1 + 32472), (__int64)&v18, *(_QWORD *)(a1 + 34888));
  *(_DWORD *)(a1 + 33140) = 0;
  *(_QWORD *)(a1 + 33144) = 0LL;
  if ( v17[0] )
  {
    v13 = *(_QWORD *)(a1 + 34888);
    v20[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    {
      do
        KeYieldProcessorEx(v20);
      while ( *(_QWORD *)v13 );
    }
    KiFlushReadyLists(v13 + 16, (unsigned int *)(v13 + 8), (__int64)&v18, v13);
    *(_DWORD *)(v13 + 672) = 0;
    *(_QWORD *)(v13 + 680) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  }
  if ( !a4 && (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 && !KiIsPrcbThread(*(_QWORD *)(a1 + 8)) )
    _interlockedbittestandset((volatile signed __int32 *)(v14 + 120), 0xCu);
  KiStartRescheduleContext((__int64)v21, a3, 0LL);
  KiAdjustRescheduleContextForParking(v21, a1);
  KiSearchForNewThreadsForRescheduleContext(v21, (__int64)&v18);
  KiCommitRescheduleContext(v21, a1, 1, &v18);
  _InterlockedDecrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v15 )
  {
    KiCompleteRescheduleContext(v21, a1);
    KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  }
  return KiProcessDeferredReadyList(a1, &v18, 2u);
}
