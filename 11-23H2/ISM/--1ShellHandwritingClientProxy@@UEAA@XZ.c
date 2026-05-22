/*
 * XREFs of ??1ShellHandwritingClientProxy@@UEAA@XZ @ 0x1800622A4
 * Callers:
 *     ??_GShellHandwritingClientProxy@@UEAAPEAXI@Z @ 0x1800622D0 (--_GShellHandwritingClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800623A4 (-InternalRelease@-$ComPtr@VShellHandwritingHostServer@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall ShellHandwritingClientProxy::~ShellHandwritingClientProxy(ShellHandwritingClientProxy *this)
{
  Microsoft::WRL::ComPtr<ShellHandwritingHostServer>::InternalRelease((char *)this + 48);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
