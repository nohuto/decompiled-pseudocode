/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$IVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@Windows@@UIWeakReferenceSource@@U?$IIterable@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@567@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801733D4
 * Callers:
 *     ?QueryInterface@?$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180173F30 (-QueryInterface@-$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@_ea_180173F30.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IVectorView<Windows::UI::Composition::CompositionColorGradientStop *>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::UI::Composition::CompositionColorGradientStop *>>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( InlineIsEqualGUID(a2, &GUID_801d95c7_7ce2_55d7_a62f_2ff94c544034) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v7 = v9;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_0f2cfac1_cdbc_5c4e_a7d2_a3914fb63426) )
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
