/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E2C
 * Callers:
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$4 @ 0x180055A48 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$4.c)
 *     _GameInputProcessor::OnDeviceAttach_::_1_::catch$4 @ 0x1800584F7 (_GameInputProcessor--OnDeviceAttach_--_1_--catch$4.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$3 @ 0x180058628 (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$3.c)
 *     _SystemCursorController2::AttachApplication2_::_1_::catch$14 @ 0x1800E87C7 (_SystemCursorController2--AttachApplication2_--_1_--catch$14.c)
 *     _SystemCursorController2::CreateCursorForDevice_::_1_::catch$1 @ 0x1800E89E3 (_SystemCursorController2--CreateCursorForDevice_--_1_--catch$1.c)
 *     _SystemCursorController2::CreateCursorShape_::_1_::catch$4 @ 0x1800E8E18 (_SystemCursorController2--CreateCursorShape_--_1_--catch$4.c)
 *     _SystemCursorController2::DestroyCursorShape_::_1_::catch$7 @ 0x1800E9291 (_SystemCursorController2--DestroyCursorShape_--_1_--catch$7.c)
 *     _SystemCursorController2::EnsureServiceAndRegisterClient_::_1_::catch$16 @ 0x1800E95D8 (_SystemCursorController2--EnsureServiceAndRegisterClient_--_1_--catch$16.c)
 *     _SystemCursorController2::OnStubDisconnected_::_1_::catch$2 @ 0x1800E9A49 (_SystemCursorController2--OnStubDisconnected_--_1_--catch$2.c)
 *     _SystemCursorController2::SetCursorShellMagnification_::_1_::catch$1 @ 0x1800E9F34 (_SystemCursorController2--SetCursorShellMagnification_--_1_--catch$1.c)
 *     _SystemCursorController2::SetCursorShellVisibility_::_1_::catch$1 @ 0x1800EA172 (_SystemCursorController2--SetCursorShellVisibility_--_1_--catch$1.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x1800FAA9C (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _PenDeviceManager::AttachRIMDevice_::_1_::catch$9 @ 0x1801863CC (_PenDeviceManager--AttachRIMDevice_--_1_--catch$9.c)
 *     _PenInterface::Initialize_::_1_::catch$1 @ 0x180188D6D (_PenInterface--Initialize_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E4B28 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
