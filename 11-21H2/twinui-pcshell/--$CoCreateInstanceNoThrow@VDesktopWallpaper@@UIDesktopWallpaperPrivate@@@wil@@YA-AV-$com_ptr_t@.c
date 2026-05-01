/*
 * XREFs of ??$CoCreateInstanceNoThrow@VDesktopWallpaper@@UIDesktopWallpaperPrivate@@@wil@@YA?AV?$com_ptr_t@UIDesktopWallpaperPrivate@@Uerr_returncode_policy@wil@@@0@K@Z @ 0x18054255C
 * Callers:
 *     _lambda_7437abe9868d87a11c5e0bb58da3a0ad_::operator() @ 0x1801B5730 (_lambda_7437abe9868d87a11c5e0bb58da3a0ad_--operator().c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
LPVOID *__fastcall wil::CoCreateInstanceNoThrow<DesktopWallpaper,IDesktopWallpaperPrivate>(LPVOID *ppv)
{
  *ppv = 0LL;
  CoCreateInstance(&GUID_c2cf3110_460e_4fc1_b9d0_8a1c0c9cc4bd, 0LL, 4u, &GUID_c182461f_dfac_4375_ab6e_4cc45aa7f9cc, ppv);
  return ppv;
}
