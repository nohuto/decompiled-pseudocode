/*
 * XREFs of ??$GetActivationFactory@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B0610
 * Callers:
 *     ?SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@ApplicationDefaults@Internal@Windows@@@Z @ 0x1800B098C (-SetDefaultApplication@Actions@CreativeFramework@@YAXPEB_W0W4ApplicationDefaultCategory@Applicat.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::ApplicationDefaults::IApplicationDefaultCategoriesStatics>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = a1;
  v7[0] = L"Windows.Internal.ApplicationDefaults.ApplicationDefaultCategories";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_491635eb_1fd0_5465_bbf8_cc0b37d30613, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x696,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
