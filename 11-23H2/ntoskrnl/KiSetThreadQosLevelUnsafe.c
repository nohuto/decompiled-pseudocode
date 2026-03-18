/*
 * XREFs of KiSetThreadQosLevelUnsafe @ 0x140462658
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2D0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 *     KeApplyWobBamQos @ 0x140259D70 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B18A0 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2790 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB250 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BDE58 (KiInitializeForegroundBoostThread.c)
 *     KiUpdateThreadPriority @ 0x140307B90 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E2D8 (KiUpdateVPBackingThreadPriority.c)
 *     KiApplyForegroundBoostThread @ 0x1403504D8 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x1403570B0 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x140359D7C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140461648 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x140461C9C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x1404627C0 (KzHeteroRefreshWorkloadProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E69C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetThreadQosLevelUnsafe(__int64 a1, int a2)
{
  __int64 result; // rax
  signed __int32 v3; // ett

  do
  {
    v3 = *(_DWORD *)(a1 + 512);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 512), a2 | v3 & 0xFFFFFF00, v3);
  }
  while ( v3 != (_DWORD)result );
  return result;
}
