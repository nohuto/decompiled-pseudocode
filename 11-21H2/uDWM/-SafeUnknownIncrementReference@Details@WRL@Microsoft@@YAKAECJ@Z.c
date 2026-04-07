/*
 * XREFs of ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009DBD0
 * Callers:
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ @ 0x180012730 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x18003B590 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009C9A0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Im_ea_18009C9A0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010A2C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18010A2E0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGrap_ea_18010A2E0.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18010A500 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::SafeUnknownIncrementReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  signed __int32 v2; // r8d

  do
  {
    v2 = *(_DWORD *)this;
    if ( *(_DWORD *)this == 0x7FFFFFFF )
      return 0x7FFFFFFFLL;
  }
  while ( v2 != _InterlockedCompareExchange((volatile signed __int32 *)this, v2 + 1, v2) );
  return (unsigned int)(v2 + 1);
}
