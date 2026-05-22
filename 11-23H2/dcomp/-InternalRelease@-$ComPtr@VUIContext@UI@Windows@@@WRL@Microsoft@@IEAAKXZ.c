/*
 * XREFs of ?InternalRelease@?$ComPtr@VUIContext@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008C910
 * Callers:
 *     ??1AppContentRoot@UI@Windows@@UEAA@XZ @ 0x18001183C (--1AppContentRoot@UI@Windows@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Z @ 0x180018790 (-RuntimeClassInitialize@AppContentRoot@UI@Windows@@QEAAJPEAUICompositionIsland@Composition@23@PE.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@$$QEAPEAVAppContentRoot@45@@Z @ 0x180018860 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@PEAVAppContentRoot@23@@Details@WRL@Microsoft@@Y.c)
 *     ?CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContext@23@@Z @ 0x180018980 (-CreateForCoreWindow@UIContextFactory@UI@Windows@@UEAAJPEAUICoreWindow@Core@23@HPEAPEAUIUIContex.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUICoreWindow@Core@45@@Z @ 0x180018AA8 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUICoreWindow@Core@23@@Details@WRL@Microso.c)
 *     ??$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft@@YAJPEAPEAVUIContext@UI@Windows@@AEAPEAUIUIContentRoot@45@@Z @ 0x18011AD58 (--$MakeAndInitialize@VUIContext@UI@Windows@@V123@AEAPEAUIUIContentRoot@23@@Details@WRL@Microsoft.c)
 *     ?CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@Z @ 0x18011AE40 (-CreateForContent@UIContextFactory@UI@Windows@@UEAAJPEAUIUIContentRoot@23@PEAPEAUIUIContext@23@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Windows@@U?$CloakedIid@UIUIContextPartner@UI@Windows@@@23@U?$CloakedIid@UIUIContextInternal@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180087630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContext@UI@Win.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::UIContext>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContext,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextPartner>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContextInternal>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
