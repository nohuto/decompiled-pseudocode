/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UICoreWindowFactory@Core@UI@Windows@@U?$CloakedIid@VCWrlLightweightHandlerServer@@@23@U?$CloakedIid@UIConfigureWindowFactory@@@23@U?$CloakedIid@UICoreWindowFactoryPriv@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800CD804
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CDAC0 (-QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180798F5C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindow.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::UI::Core::ICoreWindowFactory,Microsoft::WRL::CloakedIid<CWrlLightweightHandlerServer>,Microsoft::WRL::CloakedIid<IConfigureWindowFactory>,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  BOOL IsEqualGUID; // eax
  _DWORD *v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // r11
  unsigned int v7; // r8d
  _DWORD *v8; // rcx
  _QWORD *v9; // r10
  __int64 v10; // r11
  int v11; // eax
  _DWORD *v12; // rcx
  _QWORD *v13; // r10
  __int64 v14; // r11

  if ( *a2 != -852941984
    || a2[1] != *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data2
    || a2[2] != *(_DWORD *)GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4
    || a2[3] != *(_DWORD *)&GUID_cd292360_2763_4085_8a9f_74b224a29175.Data4[4] )
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_00000003_0000_0000_c000_000000000046);
    v7 = 0;
    if ( IsEqualGUID )
      goto LABEL_11;
    if ( InlineIsEqualGUID(v4, &GUID_00000018_0000_0000_c000_000000000046) )
    {
      *v9 = v10 + 40;
      v11 = v7;
    }
    else
    {
      v11 = -2147467262;
    }
    if ( v11 >= 0 )
      return v7;
    if ( InlineIsEqualGUID(v8, &GUID_601d51e3_801e_49c9_bbfa_fe29a662aead) )
    {
LABEL_11:
      *v5 = v6;
    }
    else if ( InlineIsEqualGUID(v12, &GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11) )
    {
      *v13 = v14 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
  *a3 = a1;
  return 0LL;
}
