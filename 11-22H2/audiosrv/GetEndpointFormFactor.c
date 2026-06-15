/*
 * XREFs of GetEndpointFormFactor @ 0x18001FF00
 * Callers:
 *     SearchForHeadphones @ 0x18001FC40 (SearchForHeadphones.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18003685C (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     IsInternalFormFactorOf @ 0x180155FC0 (IsInternalFormFactorOf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetEndpointFormFactor(__int64 a1)
{
  HRESULT v2; // esi
  ULONG v3; // ebx
  PROPERTYKEY v5; // [rsp+20h] [rbp-40h] BYREF
  PROPVARIANT propvarIn[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG pulRet; // [rsp+80h] [rbp+20h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h]

  v8 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  pulRet = 0;
  LOWORD(propvarIn[0]) = 0;
  v5 = PKEY_AudioEndpoint_FormFactor;
  v2 = (*(__int64 (__fastcall **)(__int64, PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(a1, &v5, propvarIn);
  if ( v2 >= 0 )
  {
    if ( LOWORD(propvarIn[0]) )
      v2 = PropVariantToUInt32(propvarIn, &pulRet);
    else
      v2 = -2147023728;
  }
  PropVariantClear(propvarIn);
  v3 = pulRet;
  if ( v2 == -2147023728 )
    v3 = 10;
  pulRet = v3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v3;
}
