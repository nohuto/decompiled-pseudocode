/*
 * XREFs of ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F79C
 * Callers:
 *     ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x18012FC70 (--_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012FCC0 (--_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
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
