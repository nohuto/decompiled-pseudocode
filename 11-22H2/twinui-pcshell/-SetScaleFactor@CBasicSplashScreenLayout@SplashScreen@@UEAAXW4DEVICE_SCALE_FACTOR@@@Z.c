/*
 * XREFs of ?SetScaleFactor@CBasicSplashScreenLayout@SplashScreen@@UEAAXW4DEVICE_SCALE_FACTOR@@@Z @ 0x1801C5370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SplashScreen::CBasicSplashScreenLayout::SetScaleFactor(
        SplashScreen::CBasicSplashScreenLayout *this,
        enum DEVICE_SCALE_FACTOR a2)
{
  *((_DWORD *)this + 6) = a2;
}
