/*
 * XREFs of ??1CanPinToTaskbar@TaskbarPinningTelemetry@@QEAA@XZ @ 0x18069E9F8
 * Callers:
 *     ?CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z @ 0x18069F978 (-CanPinToTaskbar@TaskbarPinHelper@@YAJPEAUIShellItem@@PEA_N@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801B9424 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

void __fastcall TaskbarPinningTelemetry::CanPinToTaskbar::~CanPinToTaskbar(
        TaskbarPinningTelemetry::CanPinToTaskbar *this)
{
  *(_QWORD *)this = &TaskbarPinningTelemetry::CanPinToTaskbar::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
