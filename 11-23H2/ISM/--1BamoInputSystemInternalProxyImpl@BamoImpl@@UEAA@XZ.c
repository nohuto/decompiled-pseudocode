/*
 * XREFs of ??1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ @ 0x180121818
 * Callers:
 *     ??_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z @ 0x180121E40 (--_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoInputSystemInternalProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180121E90 (--_EBamoInputSystemInternalProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoInputSystemInternalProxyImpl::~BamoInputSystemInternalProxyImpl(
        BamoImpl::BamoInputSystemInternalProxyImpl *this)
{
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
