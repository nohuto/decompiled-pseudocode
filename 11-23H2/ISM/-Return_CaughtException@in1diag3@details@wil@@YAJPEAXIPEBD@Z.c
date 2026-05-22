/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DAE74
 * Callers:
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$12 @ 0x18006EF8A (_SpatialRimDeviceCollection--Initialize_--_1_--catch$12.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$12 @ 0x1800DA007 (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$12.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$14 @ 0x1800DA34C (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$14.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$0 @ 0x1800EBAB7 (_LampArrayDevice--Initialize_--_1_--catch$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$54 @ 0x1800EC66B (_LampArrayDevice--ProcessLampState_--_1_--catch$54.c)
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$51 @ 0x1800F0E42 (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$51.c)
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$29 @ 0x1800F5D4E (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$29.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x180100A81 (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$26 @ 0x180114F6E (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$26.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x18011721C (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$35 @ 0x1801173FE (_RotationWatcher--RotationWnfCallback_--_1_--catch$35.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D5F18 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
