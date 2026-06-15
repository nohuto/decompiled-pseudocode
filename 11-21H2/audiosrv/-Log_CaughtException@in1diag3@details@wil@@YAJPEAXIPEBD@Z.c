/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D9180
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$35 @ 0x18006D010 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$35.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$29 @ 0x18006E1E0 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$29.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$128 @ 0x18006E590 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$128.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$129 @ 0x18006E5D0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$129.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$15 @ 0x18006E6C0 (_CPlaybackNotifier--AcquireReference_--_1_--catch$15.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$22 @ 0x18006E740 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$22.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$32 @ 0x180071C20 (_CAudioResourceManager--DestroyStream_--_1_--catch$32.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$14 @ 0x1800F9BF9 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$14.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$21 @ 0x1800F9E9D (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$21.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$15 @ 0x18010445F (_CCaptureNotifier--AcquireReference_--_1_--catch$15.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::catch$8 @ 0x180104713 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--catch$8.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$0 @ 0x1801048F3 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D4F9C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3, (__int64)a4, v5, retaddr);
}
