/*
 * XREFs of ??$MakeAndInitializeOrThrow@VAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@wil@@YA?AV?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1804531A4
 * Callers:
 *     ?CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIImageSource@Media@Xaml@UI@6@@Z @ 0x180453E60 (-CreateImageSource@AppViewIconFactory@@UEAAJUIconProperties@Multitasking@ComposableShell@Interna.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x180452E64 (--$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Inte.c)
 *     ?InternalRelease@?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ @ 0x180454B2C (-InternalRelease@-$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
AppViewIconLoader **__fastcall wil::MakeAndInitializeOrThrow<AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
        AppViewIconLoader **a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5)
{
  int v9; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(a1);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<AppViewIconLoader,AppViewIconLoader,Windows::Internal::ComposableShell::Multitasking::IconProperties &,IApplicationView *,Windows::UI::Xaml::Media::Imaging::IWriteableBitmap *,IApplicationViewIconLoader *>(
         a1,
         a2,
         a3,
         a4,
         a5);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v9,
      v11);
  return a1;
}
