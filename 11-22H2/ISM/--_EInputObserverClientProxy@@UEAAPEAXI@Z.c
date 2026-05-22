/*
 * XREFs of ??_EInputObserverClientProxy@@UEAAPEAXI@Z @ 0x180155710
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015450 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A998C (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

InputObserverClientProxy *__fastcall InputObserverClientProxy::`vector deleting destructor'(
        InputObserverClientProxy *this,
        char a2)
{
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 6);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
