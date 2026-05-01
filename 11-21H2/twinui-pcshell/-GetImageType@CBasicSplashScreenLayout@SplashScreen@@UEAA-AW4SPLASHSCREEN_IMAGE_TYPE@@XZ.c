/*
 * XREFs of ?GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA?AW4SPLASHSCREEN_IMAGE_TYPE@@XZ @ 0x180170790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SplashScreen::CBasicSplashScreenLayout::GetImageType(__int64 a1)
{
  int v1; // ecx

  v1 = MulDiv((int)*(float *)(a1 + 8), 100, *(_DWORD *)(a1 + 24));
  if ( v1 > 499 )
    return (unsigned int)(v1 > 619) + 1;
  else
    return 0LL;
}
