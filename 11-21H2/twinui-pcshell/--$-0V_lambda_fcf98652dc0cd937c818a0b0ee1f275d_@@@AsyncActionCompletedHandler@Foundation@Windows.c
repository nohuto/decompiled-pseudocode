/*
 * XREFs of ??$?0V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@AsyncActionCompletedHandler@Foundation@Windows@winrt@@QEAA@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@Z @ 0x180143268
 * Callers:
 *     ?await_suspend@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180143190 (-await_suspend@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAAXU-$coro.c)
 * Callees:
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x30uLL);
  v6[1] = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  v6[2] = v4;
  *((_DWORD *)v6 + 6) = *(_DWORD *)(a2 + 16);
  v6[4] = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 10) = 1;
  *v6 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,_lambda_fcf98652dc0cd937c818a0b0ee1f275d_>::`vftable';
  *a1 = v6;
  winrt::impl::disconnect_aware_handler::~disconnect_aware_handler((winrt::impl::disconnect_aware_handler *)(a2 + 8));
  return a1;
}
