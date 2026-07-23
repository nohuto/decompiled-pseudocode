/*
 * XREFs of KiSetThreadQosLevelUnsafe @ 0x140462A58
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KeApplyWobBamQos @ 0x14025A000 (KeApplyWobBamQos.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiComputeEffectivePriority @ 0x1402B2A20 (KiComputeEffectivePriority.c)
 *     KiRemoveBoostThread @ 0x1402BB4E0 (KiRemoveBoostThread.c)
 *     KiInitializeForegroundBoostThread @ 0x1402BE0E8 (KiInitializeForegroundBoostThread.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034E478 (KiUpdateVPBackingThreadPriority.c)
 *     KiApplyForegroundBoostThread @ 0x140350678 (KiApplyForegroundBoostThread.c)
 *     KeSetProcessPpmPolicy @ 0x140357250 (KeSetProcessPpmPolicy.c)
 *     KeSetThreadPpmPolicy @ 0x140359F1C (KeSetThreadPpmPolicy.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140461A48 (KiConvertDynamicHeteroPolicy.c)
 *     KiHeteroComputeThreadWorkloadProperties @ 0x14046209C (KiHeteroComputeThreadWorkloadProperties.c)
 *     KzHeteroRefreshWorkloadProperties @ 0x140462BC0 (KzHeteroRefreshWorkloadProperties.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056EBDC (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
