/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DBAC8
 * Callers:
 *     _EffectPack::CanProcessingModeBeParameterized_::_1_::catch$48 @ 0x180078BCF (_EffectPack--CanProcessingModeBeParameterized_--_1_--catch$48.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::catch$18 @ 0x180079192 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--catch$18.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::catch$20 @ 0x180079532 (_CAudioResourceManager--DestroyStream_--_1_--catch$20.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::catch$23 @ 0x18007A134 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--catch$23.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$2 @ 0x18007BA36 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--catch$2.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$95 @ 0x18007BB40 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$95.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::catch$96 @ 0x18007BB7D (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--catch$96.c)
 *     _CPlaybackNotifier::AcquireReference_::_1_::catch$15 @ 0x18007BC0B (_CPlaybackNotifier--AcquireReference_--_1_--catch$15.c)
 *     _CAudioStream::UpdatePMPEffectToggle_::_1_::catch$32 @ 0x1800EE529 (_CAudioStream--UpdatePMPEffectToggle_--_1_--catch$32.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::catch$14 @ 0x1801091D3 (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--catch$14.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::catch$0 @ 0x180109282 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--catch$0.c)
 *     _CCaptureNotifier::AcquireReference_::_1_::catch$16 @ 0x18011A3AF (_CCaptureNotifier--AcquireReference_--_1_--catch$16.c)
 *     _CPowerReferenceManager::EnsureCamMicUsageInitialized_::_1_::catch$8 @ 0x18011A5D4 (_CPowerReferenceManager--EnsureCamMicUsageInitialized_--_1_--catch$8.c)
 *     _CCaptureNotifier::UpdateAudioCaptureStatus_::_1_::catch$0 @ 0x18011A7B3 (_CCaptureNotifier--UpdateAudioCaptureStatus_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D7A1C (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
