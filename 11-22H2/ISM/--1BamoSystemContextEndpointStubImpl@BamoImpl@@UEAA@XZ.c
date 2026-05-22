/*
 * XREFs of ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800B0AEC
 * Callers:
 *     ??_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z @ 0x1800B0C80 (--_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z.c)
 *     ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B0CD0 (--_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl(
        BamoImpl::BamoSystemContextEndpointStubImpl *this)
{
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
}
