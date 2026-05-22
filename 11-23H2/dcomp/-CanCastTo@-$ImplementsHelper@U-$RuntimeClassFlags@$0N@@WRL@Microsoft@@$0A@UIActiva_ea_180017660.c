/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180017660
 * Callers:
 *     ??$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800171E0 (--$CreateActivationFactory@VCompositionEffectSourceParameterFactory@Composition@UI@Windows@@@Det.c)
 *     ?QueryInterface@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E2A0 (-QueryInterface@CompositionEffectSourceParameterFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107930 (-QueryInterface@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIComposi_ea_180107930.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionEffectSourceParameterFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int CanCastTo; // eax
  _QWORD *v8; // r8
  unsigned int v9; // r9d

  v5 = 0;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v4;
    return 0LL;
  }
  else
  {
    v6 = v4 + 8;
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
    if ( CanCastTo == -2147467262 )
    {
      if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_b3d9f276_aba3_4724_acf3_d0397464db1c) )
        *v8 = v6 + 32;
      else
        return v9;
    }
    else
    {
      return CanCastTo;
    }
    return v5;
  }
}
