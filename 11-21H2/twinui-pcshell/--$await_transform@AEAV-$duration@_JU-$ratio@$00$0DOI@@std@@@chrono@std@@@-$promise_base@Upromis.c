/*
 * XREFs of ??$await_transform@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AU?$notify_awaiter@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@12@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x1801C2320
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1801CDB70 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x18041CF2C (--0hresult_canceled@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::await_transform<std::chrono::duration<__int64,std::ratio<1,1000>> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r8
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
    throw (winrt::hresult_canceled *)pExceptionObject;
  }
  v3 = 10000LL * *a3;
  v4 = (_QWORD *)((a1 + 72) & -(__int64)(*(_BYTE *)(a1 + 93) != 0));
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = v3;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = 0;
  if ( v4 )
  {
    *(_QWORD *)a2 = v4;
    v4[1] = a2;
    *v4 = _lambda_853bb78cc99d5363e4352e3710d5f65c_::_lambda_invoker_cdecl_;
  }
  return a2;
}
