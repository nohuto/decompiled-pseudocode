/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800848E8
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIShellPositionerManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIShellPositionerActivationHandler@@UIShellPositionerFrameworkViewTypeChangedHandler@@UIShellPositionerPresentationRequestedHandler@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800852B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800852B0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener,ITabletModeChangeListener,IShellPositionerActivationHandler,IShellPositionerFrameworkViewTypeChangedHandler,IShellPositionerPresentationRequestedHandler>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  BOOL IsEqualGUID; // eax
  _DWORD *v5; // rcx
  _QWORD *v6; // r10
  __int64 v7; // r11
  unsigned int v8; // r8d
  _QWORD *v9; // r10
  __int64 v10; // r11

  if ( *a2 != 1920966295
    || a2[1] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data2
    || a2[2] != *(_DWORD *)GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4
    || a2[3] != *(_DWORD *)&GUID_727f9e97_76ee_497b_a942_b6371328485c.Data4[4] )
  {
    v3 = a1 + 8;
    if ( *a2 == -2030348378
      && a2[1] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data2
      && a2[2] == *(_DWORD *)GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4
      && a2[3] == *(_DWORD *)&GUID_86fb57a6_3c81_4f40_a971_6280be4e526e.Data4[4] )
    {
      *a3 = v3;
    }
    else
    {
      if ( *a2 != -6926506
        || a2[1] != *(_DWORD *)&GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data2
        || a2[2] != *(_DWORD *)GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data4
        || a2[3] != *(_DWORD *)&GUID_ff964f56_8baf_4947_9c46_f227ec68ff34.Data4[4] )
      {
        IsEqualGUID = InlineIsEqualGUID(a2, &GUID_d452bf19_b505_4b1c_8182_1cc821a13092);
        v8 = 0;
        if ( IsEqualGUID )
        {
          *v6 = v7;
        }
        else if ( InlineIsEqualGUID(v5, &GUID_01719fd4_ce6f_429b_9554_1c3b9d375792) )
        {
          *v9 = v10 + 8;
        }
        else
        {
          return (unsigned int)-2147467262;
        }
        return v8;
      }
      *a3 = v3 + 8;
    }
    return 0;
  }
  *a3 = a1;
  return 0LL;
}
