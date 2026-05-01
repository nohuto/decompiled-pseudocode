/*
 * XREFs of ?Release@CSplashScreen@@UEAAKXZ @ 0x180307170
 * Callers:
 *     ?Release@CSplashScreen@@W7EAAKXZ @ 0x1801EE990 (-Release@CSplashScreen@@W7EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBA@EAAKXZ @ 0x1801EE9B0 (-Release@CSplashScreen@@WBA@EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBI@EAAKXZ @ 0x1801EE9D0 (-Release@CSplashScreen@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(this);
}
