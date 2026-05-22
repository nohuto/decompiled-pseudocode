/*
 * XREFs of ??1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F7D8
 * Callers:
 *     ??_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z @ 0x18012FDA0 (--_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012FDF0 (--_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800558A8 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::~BamoInputSpacePayloadProxyImpl(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, a2);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
