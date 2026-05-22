/*
 * XREFs of ?SpatialInteractionDLL_Loaded_@RawInputProvidersTracing@@QEAAXXZ @ 0x1800EAA04
 * Callers:
 *     ?EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ @ 0x1800E793C (-EnsureSpatialInteractionInitialized@SpatialRimDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800E3884 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInteractionDLL_Loaded_(RawInputProvidersTracing *this)
{
  __int64 v1; // rcx
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v1 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u
    && (*(_QWORD *)(v1 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v1 + 24) & 0x400000000000LL) == *(_QWORD *)(v1 + 24) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 0x1000000LL;
    v5 = 8;
    tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_180232697, 0LL, 0LL, 3u, &v3);
  }
}
