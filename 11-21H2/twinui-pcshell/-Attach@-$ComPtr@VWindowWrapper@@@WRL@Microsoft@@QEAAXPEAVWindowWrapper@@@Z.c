/*
 * XREFs of ?Attach@?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z @ 0x18005B4C8
 * Callers:
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x18005B3B0 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationMode.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<WindowWrapper>::Attach(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release();
  *a1 = a2;
  return result;
}
