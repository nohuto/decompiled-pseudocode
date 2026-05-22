/*
 * XREFs of ??_GBamoVirtualTouchpadControllerProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801298A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004662C (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoVirtualTouchpadControllerProxyImpl *__fastcall BamoImpl::BamoVirtualTouchpadControllerProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoVirtualTouchpadControllerProxyImpl *this,
        char a2)
{
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
