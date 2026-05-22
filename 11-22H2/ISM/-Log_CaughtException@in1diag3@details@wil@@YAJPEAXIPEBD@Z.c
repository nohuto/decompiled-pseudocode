/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18010C74C
 * Callers:
 *     _SystemCursorController2::OnStubDisconnected_::_1_::catch$2 @ 0x18007FD40 (_SystemCursorController2--OnStubDisconnected_--_1_--catch$2.c)
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$4 @ 0x180083035 (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$4.c)
 *     _GameInputProcessor::OnDeviceAttach_::_1_::catch$5 @ 0x180083420 (_GameInputProcessor--OnDeviceAttach_--_1_--catch$5.c)
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$3 @ 0x1800834CF (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$3.c)
 *     _SystemCursorController2::AttachApplication2_::_1_::catch$14 @ 0x180110027 (_SystemCursorController2--AttachApplication2_--_1_--catch$14.c)
 *     _SystemCursorController2::CreateCursorForDevice_::_1_::catch$1 @ 0x180110263 (_SystemCursorController2--CreateCursorForDevice_--_1_--catch$1.c)
 *     _SystemCursorController2::CreateCursorShape_::_1_::catch$4 @ 0x1801106B8 (_SystemCursorController2--CreateCursorShape_--_1_--catch$4.c)
 *     _SystemCursorController2::DestroyCursorShape_::_1_::catch$7 @ 0x180110B51 (_SystemCursorController2--DestroyCursorShape_--_1_--catch$7.c)
 *     _SystemCursorController2::EnsureServiceAndRegisterClient_::_1_::catch$16 @ 0x180110ED6 (_SystemCursorController2--EnsureServiceAndRegisterClient_--_1_--catch$16.c)
 *     _SystemCursorController2::SetCursorShellMagnification_::_1_::catch$1 @ 0x1801116D4 (_SystemCursorController2--SetCursorShellMagnification_--_1_--catch$1.c)
 *     _SystemCursorController2::SetCursorShellVisibility_::_1_::catch$1 @ 0x180111922 (_SystemCursorController2--SetCursorShellVisibility_--_1_--catch$1.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x180124AEC (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _PenDeviceManager::AttachRIMDevice_::_1_::catch$9 @ 0x1801B2CC8 (_PenDeviceManager--AttachRIMDevice_--_1_--catch$9.c)
 *     _PenInterface::Initialize_::_1_::catch$1 @ 0x1801B4E97 (_PenInterface--Initialize_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x18010C3E8 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
