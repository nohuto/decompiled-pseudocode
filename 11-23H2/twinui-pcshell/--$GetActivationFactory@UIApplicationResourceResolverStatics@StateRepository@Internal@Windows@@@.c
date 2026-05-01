/*
 * XREFs of ??$GetActivationFactory@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationResourceResolverStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800539CC
 * Callers:
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180053914 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationResourceResolverStatics>(
        _QWORD *a1)
{
  __int64 v2; // rax
  int ActivationFactory; // eax
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5[2] = a1;
  v5[0] = L"Windows.Internal.StateRepository.ApplicationResourceResolver";
  *a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v6, v5);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v2 + 24), &GUID_84463b2a_c88e_4597_b41f_17d3bf6486e9, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x696,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
