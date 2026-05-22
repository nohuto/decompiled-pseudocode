/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E9DD4
 * Callers:
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$29 @ 0x1800668F2 (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$29.c)
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$12 @ 0x18008279F (_SpatialRimDeviceCollection--Initialize_--_1_--catch$12.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$12 @ 0x1800E8F67 (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$12.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$14 @ 0x1800E92AC (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$14.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$0 @ 0x1800FAA57 (_LampArrayDevice--Initialize_--_1_--catch$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$65 @ 0x1800FB750 (_LampArrayDevice--ProcessLampState_--_1_--catch$65.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$51 @ 0x180100072 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$51.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x18010F5A1 (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$26 @ 0x180122FDE (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$26.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x18012528C (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$35 @ 0x18012546E (_RotationWatcher--RotationWnfCallback_--_1_--catch$35.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800E4D44 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
