/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C1EB4
 * Callers:
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$16 @ 0x180055452 (_SpatialRimDeviceCollection--Initialize_--_1_--catch$16.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$12 @ 0x1800C1047 (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$12.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$14 @ 0x1800C138C (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$14.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$2 @ 0x1800D20B8 (_LampArrayDevice--Initialize_--_1_--catch$2.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$53 @ 0x1800D2C19 (_LampArrayDevice--ProcessLampState_--_1_--catch$53.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$47 @ 0x1800D73F8 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$47.c)
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$24 @ 0x1800DC17E (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$24.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x1800E7C21 (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$22 @ 0x1800F9020 (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$22.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x1800FB210 (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$31 @ 0x1800FB3F2 (_RotationWatcher--RotationWnfCallback_--_1_--catch$31.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800BCFF8 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
