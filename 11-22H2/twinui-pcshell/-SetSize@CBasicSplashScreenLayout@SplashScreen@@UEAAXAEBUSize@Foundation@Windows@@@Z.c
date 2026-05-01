/*
 * XREFs of ?SetSize@CBasicSplashScreenLayout@SplashScreen@@UEAAXAEBUSize@Foundation@Windows@@@Z @ 0x1801C5380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SplashScreen::CBasicSplashScreenLayout::SetSize(
        SplashScreen::CBasicSplashScreenLayout *this,
        const struct Windows::Foundation::Size *a2)
{
  *((_QWORD *)this + 1) = *(_QWORD *)a2;
}
