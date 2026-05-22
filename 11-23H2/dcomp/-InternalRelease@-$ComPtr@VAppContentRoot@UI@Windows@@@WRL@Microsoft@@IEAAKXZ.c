/*
 * XREFs of ?InternalRelease@?$ComPtr@VAppContentRoot@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D9D8
 * Callers:
 *     ?CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@23@@Z @ 0x1800183A0 (-CreateInstance@AppContentRootFactory@UI@Windows@@UEAAJPEAUIInspectable@@0PEAPEAUIUIContentRoot@.c)
 *     ??$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAUIInputSite@Input@Internal@23@@Details@WRL@Microsoft@@YAJPEAPEAVAppContentRoot@UI@Windows@@$$QEAPEAUICompositionIsland@Composition@45@$$QEAPEAUIInputSite@Input@Internal@45@@Z @ 0x180018600 (--$MakeAndInitialize@VAppContentRoot@UI@Windows@@V123@PEAUICompositionIsland@Composition@23@PEAU.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI@Windows@@U?$CloakedIid@UIClosable@Foundation@Windows@@@23@U?$CloakedIid@UIUIContentRootPartner@UI@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIUIContentRoot@UI.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::AppContentRoot>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::IUIContentRoot,Microsoft::WRL::CloakedIid<Windows::Foundation::IClosable>,Microsoft::WRL::CloakedIid<Windows::UI::IUIContentRootPartner>,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
