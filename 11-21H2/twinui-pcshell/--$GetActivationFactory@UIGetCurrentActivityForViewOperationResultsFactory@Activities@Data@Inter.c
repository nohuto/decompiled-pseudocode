/*
 * XREFs of ??$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1803C08CC
 * Callers:
 *     _lambda_6084a6cce004fd5fee81c22a52dae34d_::operator() @ 0x1803C2510 (_lambda_6084a6cce004fd5fee81c22a52dae34d_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResultsFactory>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int ActivationFactory; // eax
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = a1;
  v7[0] = L"Windows.Internal.Data.Activities.GetCurrentActivityForViewOperationResults";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(*(_QWORD *)(v4 + 24), &GUID_f3e77e93_47d9_41aa_9f7f_a4f948e0f48e, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x696,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)ActivationFactory,
      1);
  return a1;
}
