/*
 * XREFs of ??_GBamoMPCManagerProxy@@MEAAPEAXI@Z @ 0x180158EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004662C (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180087394 (--1-$com_ptr_t@VBamoManualDragAreaClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

BamoMPCManagerProxy *__fastcall BamoMPCManagerProxy::`scalar deleting destructor'(BamoMPCManagerProxy *this, char a2)
{
  wil::com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoManualDragAreaClientProxy,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
