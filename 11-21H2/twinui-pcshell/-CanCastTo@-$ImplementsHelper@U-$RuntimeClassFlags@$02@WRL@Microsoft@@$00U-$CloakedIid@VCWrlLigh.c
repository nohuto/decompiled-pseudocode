/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007E820
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007EA10 (-QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18061A718 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U-$Implem_ea_18061A718.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v4; // edx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // r10
  _QWORD *v9; // r11
  __int64 v10; // r10
  _QWORD *v11; // r11

  v4 = *a2;
  if ( v4 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  else
  {
    if ( v4 == 24
      && a2[1] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = a1 + 40;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 == -2147467262 )
    {
      if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_601d51e3_801e_49c9_bbfa_fe29a662aead) )
      {
        *v9 = v8;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11) )
      {
        *v11 = v10 + 8;
      }
      else
      {
        return (unsigned int)-2147467262;
      }
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
}
