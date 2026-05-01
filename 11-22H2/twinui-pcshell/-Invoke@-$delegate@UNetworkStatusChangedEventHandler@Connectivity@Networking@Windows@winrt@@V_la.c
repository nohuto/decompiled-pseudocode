/*
 * XREFs of ?Invoke@?$delegate@UNetworkStatusChangedEventHandler@Connectivity@Networking@Windows@winrt@@V_lambda_28dbd2337059dd45743c62eabeaa809f_@@@impl@winrt@@UEAAHPEAX@Z @ 0x180283EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_28dbd2337059dd45743c62eabeaa809f_@@QEBA?A_PAEBUIInspectable@Foundation@Windows@winrt@@@Z @ 0x180283C6C (--$-RAEBUIInspectable@Foundation@Windows@winrt@@@_lambda_28dbd2337059dd45743c62eabeaa809f_@@QEBA.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler,_lambda_28dbd2337059dd45743c62eabeaa809f_>::Invoke(
        __int64 a1,
        struct IUnknownVtbl *a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  struct IUnknown v5; // [rsp+38h] [rbp+10h] BYREF

  v5.lpVtbl = a2;
  v2 = (__int64 *)(a1 + 8);
  try
  {
    _lambda_28dbd2337059dd45743c62eabeaa809f_::operator()<winrt::Windows::Foundation::IInspectable const &>(v2, &v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v4);
  }
  return result;
}
