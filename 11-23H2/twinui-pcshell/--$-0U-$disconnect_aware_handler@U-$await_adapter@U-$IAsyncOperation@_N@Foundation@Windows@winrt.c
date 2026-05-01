/*
 * XREFs of ??$?0U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@winrt@@QEAA@U?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@@impl@3@@Z @ 0x18054B000
 * Callers:
 *     ?await_suspend@?$await_adapter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1805509EC (-await_suspend@-$await_adapter@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??1?$disconnect_aware_handler@U?$await_adapter@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x18054C458 (--1-$disconnect_aware_handler@U-$await_adapter@U-$IAsyncOperation@URect@Foundation@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>::AsyncOperationCompletedHandler<bool>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x30uLL);
  v4 = *a2;
  *a2 = 0LL;
  v8[1] = v4;
  v5 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = -1;
  *((_DWORD *)v8 + 4) = v5;
  v6 = a2[2];
  a2[2] = 0LL;
  v8[3] = v6;
  v8[4] = a2[3];
  a2[3] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v8 + 10) = 1;
  *v8 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<bool>,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<bool>>>>::`vftable';
  *a1 = v8;
  winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>>::~disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>>>(a2);
  return a1;
}
