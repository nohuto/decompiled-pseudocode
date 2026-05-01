/*
 * XREFs of ??1CopyToViewValueSetBase@@QEAA@XZ @ 0x1804E70DC
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804E7310 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCopyToViewValueSetBase@@UIOleWindow@.c)
 *     ??_GDelayedTileActivationCallSite@@UEAAPEAXI@Z @ 0x1804E73A0 (--_GDelayedTileActivationCallSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800FA2EC (--1-$com_ptr_t@UIAgileReference@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CopyToViewValueSetBase::~CopyToViewValueSetBase(CopyToViewValueSetBase *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<IAgileReference,wil::err_returncode_policy>::~com_ptr_t<IAgileReference,wil::err_returncode_policy>((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
}
