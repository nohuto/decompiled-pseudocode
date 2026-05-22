/*
 * XREFs of ??1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F808
 * Callers:
 *     ??_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z @ 0x18012FE30 (--_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z.c)
 *     ??_EBamoInputSystemInternalProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012FE80 (--_EBamoInputSystemInternalProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoInputSystemInternalProxyImpl::~BamoInputSystemInternalProxyImpl(
        BamoImpl::BamoInputSystemInternalProxyImpl *this)
{
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
