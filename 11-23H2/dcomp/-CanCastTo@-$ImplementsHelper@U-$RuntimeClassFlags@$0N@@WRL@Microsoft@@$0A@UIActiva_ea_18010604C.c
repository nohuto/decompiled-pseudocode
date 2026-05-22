/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010604C
 * Callers:
 *     ??$CreateActivationFactory@VCompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801032A0 (--$CreateActivationFactory@VCompositionProjectedShadowCasterCollectionStatics@Composition@UI@Win.c)
 *     ?QueryInterface@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180107B70 (-QueryInterface@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJA.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::ICompositionProjectedShadowCasterCollectionStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  void **v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v7; // rsi
  unsigned int CanCastTo; // eax
  _QWORD *v9; // r8
  unsigned int v10; // r9d

  v5 = 0;
  if ( InlineIsEqualGUID(a2, &GUID_00000035_0000_0000_c000_000000000046) )
  {
    *v3 = (void *)v4;
    return 0LL;
  }
  else
  {
    v7 = v4 + 8;
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), a2, v3);
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_56fbb136_e94f_5299_ab5b_6e15e38bd899) )
        *v9 = v7 + 32;
      else
        return v10;
    }
    else
    {
      return CanCastTo;
    }
    return v5;
  }
}
