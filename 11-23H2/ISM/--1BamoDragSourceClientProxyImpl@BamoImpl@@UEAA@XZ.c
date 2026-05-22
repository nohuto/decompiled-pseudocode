/*
 * XREFs of ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012177C
 * Callers:
 *     ??_EBamoDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180121BF0 (--_EBamoDragSourceClientProxy@@MEAAPEAXI@Z.c)
 *     ??_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180121C40 (--_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180054B38 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        void *a2)
{
  wil::details *v3; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, a2);
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>((__int64 *)this + 2);
}
