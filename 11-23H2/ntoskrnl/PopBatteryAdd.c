/*
 * XREFs of PopBatteryAdd @ 0x140994F80
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1408240F8 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140995B14 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryAdd(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140C3CEB0 == 1 )
  {
    PopAcquirePolicyLock(v2);
    if ( byte_140C3DA3E != 1 )
    {
      byte_140C3DA3E = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v4, v3, v5);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  byte_140C3CEB8 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((__int64 *)&PopCB);
}
