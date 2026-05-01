/*
 * XREFs of ??$?0U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x1806C6950
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1806C897C (-await_suspend@-$await_adapter@U-$IAsyncOperation@W4HttpStatusCode@Http@Web@Windows@winrt@@@Foun.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??1?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x18054C458 (--1-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Web::Http::HttpStatusCode>::AsyncOperationCompletedHandler<enum winrt::Windows::Web::Http::HttpStatusCode>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x30uLL);
  v4 = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v8[1] = v4;
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = -1;
  *((_DWORD *)v8 + 4) = v5;
  v6 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v8[3] = v6;
  v8[4] = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 10) = 1;
  *v8 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<enum winrt::Windows::Web::Http::HttpStatusCode>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Web::Http::HttpStatusCode>>>>::`vftable';
  *a1 = v8;
  winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>>::~disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>>((__int64 *)a2);
  return a1;
}
