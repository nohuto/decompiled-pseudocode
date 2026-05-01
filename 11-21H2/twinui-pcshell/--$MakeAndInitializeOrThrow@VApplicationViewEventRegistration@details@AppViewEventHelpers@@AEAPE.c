/*
 * XREFs of ??$MakeAndInitializeOrThrow@VApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPEAUIApplicationViewChangeListener@@@wil@@YA?AV?$ComPtr@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@WRL@Microsoft@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x18004E44C
 * Callers:
 *     ?Register@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18004E4A0 (-Register@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplica.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIApplicationViewChangeListener@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@AEAPEAUIApplicationViewChangeListener@@@Z @ 0x18004E38C (--$MakeAndInitialize@VApplicationViewEventRegistration@details@AppViewEventHelpers@@V123@AEAPEAU.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<AppViewEventHelpers::details::ApplicationViewEventRegistration,IApplicationViewChangeListener * &>(
        __int64 *a1,
        __int64 *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<AppViewEventHelpers::details::ApplicationViewEventRegistration,AppViewEventHelpers::details::ApplicationViewEventRegistration,IApplicationViewChangeListener * &>(
         a1,
         a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}
