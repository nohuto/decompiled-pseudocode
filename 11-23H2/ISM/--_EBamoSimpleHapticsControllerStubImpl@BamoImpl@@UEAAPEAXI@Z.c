/*
 * XREFs of ??_EBamoSimpleHapticsControllerStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180062AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014870 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoSimpleHapticsControllerStubImpl *__fastcall BamoImpl::BamoSimpleHapticsControllerStubImpl::`vector deleting destructor'(
        BamoImpl::BamoSimpleHapticsControllerStubImpl *this,
        char a2)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
