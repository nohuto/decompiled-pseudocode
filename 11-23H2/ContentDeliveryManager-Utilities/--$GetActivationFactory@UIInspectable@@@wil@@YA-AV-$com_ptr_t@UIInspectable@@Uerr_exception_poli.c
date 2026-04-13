/*
 * XREFs of ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A9170
 * Callers:
 *     ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x1800AAA8C (-IsMsaConnected@Actions@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180072488 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
WCHAR *__fastcall wil::GetActivationFactory<IInspectable>(WCHAR *a1)
{
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int ActivationFactory; // eax
  const WCHAR *v6[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v7; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6[2] = a1;
  v6[0] = L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal";
  *(_QWORD *)a1 = 0LL;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset((__int64 *)a1);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v7, v6, v2);
  ActivationFactory = RoGetActivationFactory(v3[1].Reserved.Reserved1, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x696,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
