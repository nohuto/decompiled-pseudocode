/*
 * XREFs of GetEndpointFormFactor @ 0x180053AF4
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800535CC (-OnPropertyChange@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     IsInternalFormFactorOf @ 0x18014EC10 (IsInternalFormFactorOf.c)
 * Callees:
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x180053EF8 (--$GetAsUInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagproper.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetEndpointFormFactor(__int64 a1)
{
  int As; // eax
  unsigned int v3; // edi
  PROPERTYKEY v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 10;
  v7 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = PKEY_AudioEndpoint_FormFactor;
  As = CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(&v7, &v5, &v6);
  v3 = v6;
  if ( As == -2147023728 )
    v3 = 10;
  v6 = v3;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v3;
}
