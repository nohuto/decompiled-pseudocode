/*
 * XREFs of ??_EBamoPenDeviceManagerStub@@MEAAPEAXI@Z @ 0x180014830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014870 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

BamoPenDeviceManagerStub *__fastcall BamoPenDeviceManagerStub::`vector deleting destructor'(
        BamoPenDeviceManagerStub *this,
        char a2)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((char *)this + 48);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
