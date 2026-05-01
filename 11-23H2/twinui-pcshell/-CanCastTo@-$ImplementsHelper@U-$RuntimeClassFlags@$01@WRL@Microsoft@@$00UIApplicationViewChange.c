/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CD9E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C9E80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800C9E80.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler,IShellPositionerPresentationRequestedHandler>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _DWORD *v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // r11

  if ( *a2 == 1920966295
    && a2[1] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    && a2[2] == *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    && a2[3] == *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_86fb57a6_3c81_4f40_a971_6280be4e526e);
    v8 = 0;
    if ( IsEqualGUID
      || (v7 += 8LL, *v5 == 293205082)
      && v5[1] == *(_DWORD *)&GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1.Data2
      && v5[2] == *(_DWORD *)GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1.Data4
      && v5[3] == *(_DWORD *)&GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1.Data4[4]
      || InlineIsEqualGUID(v4, &GUID_d452bf19_b505_4b1c_8182_1cc821a13092) )
    {
      *v6 = v7;
    }
    else if ( InlineIsEqualGUID(v9, &GUID_01719fd4_ce6f_429b_9554_1c3b9d375792) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
