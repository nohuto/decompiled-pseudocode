/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIAppTransitionManager@@UIAppTransitionTargetManagerSink@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180597668
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801142A4 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAppTransitionManager,IAppTransitionTargetManagerSink,IApplicationViewChangeListener>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v8; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    v8 = v5 + 8;
    if ( *v4 == 1626835649
      && v4[1] == *(_DWORD *)&GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data2
      && v4[2] == *(_DWORD *)GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data4
      && v4[3] == *(_DWORD *)&GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343.Data4[4]
      || (v8 += 8LL, *v4 == 1920966295)
      && v4[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && v4[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && v4[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
    {
      *v3 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
