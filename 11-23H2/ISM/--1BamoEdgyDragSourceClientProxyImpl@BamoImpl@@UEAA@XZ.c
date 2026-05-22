/*
 * XREFs of ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801217AC
 * Callers:
 *     ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180121C80 (--_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180121CD0 (--_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180054ABC (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, a2);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)this + 7);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
