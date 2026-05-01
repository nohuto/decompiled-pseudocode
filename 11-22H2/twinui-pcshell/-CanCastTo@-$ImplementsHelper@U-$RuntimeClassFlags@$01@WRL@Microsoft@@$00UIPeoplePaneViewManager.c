/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804B2CBC
 * Callers:
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801955FC (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v8; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    v8 = v5 + 8;
    if ( *v4 == -783571975
      && v4[1] == *(_DWORD *)&GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data2
      && v4[2] == *(_DWORD *)GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data4
      && v4[3] == *(_DWORD *)&GUID_d14ba3f9_b24e_442f_967f_32f973d9e870.Data4[4]
      || (v8 += 8LL, *v4 == 1920966295)
      && v4[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
      && v4[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
      && v4[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4]
      || (v8 += 8LL, *v4 == -2030348378)
      && v4[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
      && v4[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
      && v4[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4] )
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
