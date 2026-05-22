/*
 * XREFs of ?InternalRelease@?$ComPtr@V?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180143834
 * Callers:
 *     ?First@?$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180142480 (-First@-$ImplementsIVectorWinRt@VSceneComponentCollection@Scenes@Composition@UI@Windows@@$$V@Com.c)
 *     ?First@?$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x180142510 (-First@-$ImplementsIVectorWinRt@VSceneNodeCollection@Scenes@Composition@UI@Windows@@$$V@Composit.c)
 *     ?Make@?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x180143884 (-Make@-$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSc.c)
 *     ?Make@?$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x180143924 (-Make@-$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSceneNo.c)
 *     ?First@?$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@M@Collections@Foundation@4@@Z @ 0x180170880 (-First@-$ImplementsIVectorWinRt@VCompositionStrokeDashArray@Composition@UI@Windows@@$$V@Composit.c)
 *     ?Make@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@M@345@PEAPEAV12345@@Z @ 0x18017128C (-Make@-$SimpleVectorIterator@MU-$IVector@M@Collections@Foundation@Windows@@U-$DefaultLifetimeTra.c)
 *     ?First@?$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@UICompositionColorGradientStopCollection@234@@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x1801734C0 (-First@-$ImplementsIVectorWinRt@VCompositionColorGradientStopCollection@Composition@UI@Windows@@.c)
 *     ?Make@?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x180173D5C (-Make@-$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVector.c)
 *     ?First@?$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@@Z @ 0x1801A0B30 (-First@-$ImplementsIVectorWinRt@VCompositionShapeCollection@Composition@UI@Windows@@$$V@Composit.c)
 *     ?Make@?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@345@PEAPEAV12345@@Z @ 0x1801A137C (-Make@-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVComposi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@M@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180143D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@M@Col.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<float,Windows::Foundation::Collections::IVector<float>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<float>,Windows::Foundation::Collections::Internal::NoVersionTag,0>>::InternalRelease(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<float>>::Release(v1);
  }
  return result;
}
