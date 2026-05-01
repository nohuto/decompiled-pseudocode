/*
 * XREFs of ?EnsureTileCollectionAsync@JointResize@@AEAA?AU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@XZ @ 0x180213A04
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     JointResize::EnsureTileCollectionAsync$_InitCoro$2 @ 0x180213598 (JointResize--EnsureTileCollectionAsync$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall JointResize::EnsureTileCollectionAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+168h] [rbp+10h] BYREF

  v4 = operator new(0x129uLL);
  v6 = 0;
  JointResize::EnsureTileCollectionAsync__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
