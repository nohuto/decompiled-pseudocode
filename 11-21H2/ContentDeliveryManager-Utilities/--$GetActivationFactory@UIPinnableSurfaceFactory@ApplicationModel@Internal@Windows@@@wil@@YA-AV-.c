/*
 * XREFs of ??$GetActivationFactory@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIPinnableSurfaceFactory@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800D2504
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800D2890 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::ApplicationModel::IPinnableSurfaceFactory>(
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
  v7[0] = L"Windows.Internal.ApplicationModel.TaskbarPinnableSurface";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_f27684e4_e634_4807_be9a_4838381fcbfc, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1686LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
