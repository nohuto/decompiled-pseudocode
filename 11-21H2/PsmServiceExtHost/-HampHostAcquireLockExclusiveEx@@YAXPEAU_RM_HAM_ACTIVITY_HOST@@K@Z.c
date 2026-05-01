/*
 * XREFs of ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C
 * Callers:
 *     ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180002B50 (-HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_I.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800076D0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000792C (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000D214 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAD4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013A00 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800294D4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002DFA8 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x180032718 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800399C0 (-HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18003ABA0 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800436FC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043C64 (-HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180044524 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18004510C (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x1800515F2 (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180051B14 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180071BAC (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180074D10 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 *     ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x1800766A4 (-HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKE.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180077760 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x180077FC8 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180078078 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 *     ?HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180078B84 (-HampPkgNotifyDebugModeChanged@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800794DC (-HampHostAcquireTwoLocksExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079814 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800798AC (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180079D88 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079E58 (-HampHostDebugWaitForSuspendComplete@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180079EF0 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A020 (-HampHostDesktopWindowMessageWorkerArm@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A0C0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A184 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A220 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostQuiesceTimerCallback@@YAXPEAX0@Z @ 0x18007A5A0 (-HampHostQuiesceTimerCallback@@YAXPEAX0@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007A878 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007A998 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007ABA4 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z @ 0x18007B184 (-HampAppRequestLicensingActivityStops@@YAXPEAU_HAM_APPLICATION@@J@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007EC30 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007F500 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z @ 0x180082110 (-RequestStop@HAM_ACTIVITY_RM_CONTEXT@@QEAAX_K@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180087598 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180091FAC (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostAcquireLockExclusiveEx(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rbx

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (((-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFFEuLL) - 2) & *(_QWORD *)TlsGetValue(v2)) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
}
