/*
 * XREFs of ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800C2A54
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800C15D0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18007F788 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInputControllerCollection_Released_(RawInputProvidersTracing *this)
{
  __int64 v1; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  v1 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)this,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u && (*(_BYTE *)(v1 + 16) & 2) != 0 && (*(_QWORD *)(v1 + 24) & 2LL) == *(_QWORD *)(v1 + 24) )
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18020243A, 0LL, 0LL, 2u, &v2);
}
