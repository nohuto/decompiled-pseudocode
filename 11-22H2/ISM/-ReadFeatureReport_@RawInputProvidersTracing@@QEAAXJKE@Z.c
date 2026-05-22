/*
 * XREFs of ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800F4B4C
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x1800F4AB0 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800E3884 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::ReadFeatureReport_(RawInputProvidersTracing *this, int a2, int a3, char a4)
{
  __int64 v7; // rcx
  char v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  int v10; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-9h] BYREF
  int *v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+70h] [rbp+1Fh]
  int *v14; // [rsp+78h] [rbp+27h]
  __int64 v15; // [rsp+80h] [rbp+2Fh]
  char *v16; // [rsp+88h] [rbp+37h]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  v7 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)this,
         (void (__cdecl *)())_lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v15 = 4LL;
    v16 = &v8;
    v13 = 4LL;
    v14 = &v9;
    v8 = a4;
    v12 = &v10;
    v9 = a3;
    v10 = a2;
    v17 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_180232E0E, 0LL, 0LL, 5u, &v11);
  }
}
