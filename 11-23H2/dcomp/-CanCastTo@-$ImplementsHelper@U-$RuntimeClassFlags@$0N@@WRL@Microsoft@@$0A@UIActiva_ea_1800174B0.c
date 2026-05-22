/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800174B0
 * Callers:
 *     ??$CreateActivationFactory@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180016EF0 (--$CreateActivationFactory@VCompositionCapabilitiesFactory@Composition@UI@Windows@@@Details@WRL@.c)
 *     ?QueryInterface@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E560 (-QueryInterface@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102640 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implem_ea_180102640.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

int __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,Windows::UI::Composition::ICompositionCapabilitiesStatics,Microsoft::WRL::CloakedIid<Windows::UI::Composition::Desktop::ICompositionCapabilitiesInteropFactory>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  int result; // eax
  int v6; // r10d
  bool v7; // zf
  const struct _GUID *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  const struct _GUID *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r8
  __int64 v15; // r9

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v4;
    return 0;
  }
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
  v6 = -2147467262;
  v7 = result == -2147467262;
  if ( result == -2147467262 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v9 = v10;
      result = 0;
LABEL_9:
      v7 = result == v6;
      goto LABEL_10;
    }
    if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_f7b7a86e_6416_49e5_8ddf_afe949e20562) )
    {
      *v12 = v13;
    }
    else
    {
      if ( !(unsigned int)InlineIsEqualGUID(v11, &GUID_2c9db356_e70d_4642_8298_bc4aa5b4865c) )
      {
        result = v6;
LABEL_7:
        if ( result == v6 )
          result = v6;
        goto LABEL_9;
      }
      *v14 = v15 + 8;
    }
    result = 0;
    goto LABEL_7;
  }
LABEL_10:
  if ( v7 )
    return v6;
  return result;
}
