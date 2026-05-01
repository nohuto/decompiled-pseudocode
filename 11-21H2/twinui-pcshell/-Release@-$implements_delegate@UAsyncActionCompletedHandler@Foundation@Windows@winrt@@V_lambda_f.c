/*
 * XREFs of ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@V_lambda_fcf98652dc0cd937c818a0b0ee1f275d_@@@impl@winrt@@UEAAIXZ @ 0x1800FC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1disconnect_aware_handler@impl@winrt@@QEAA@XZ @ 0x180023118 (--1disconnect_aware_handler@impl@winrt@@QEAA@XZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,_lambda_fcf98652dc0cd937c818a0b0ee1f275d_>::Release(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9

  v6 = winrt::impl::atomic_ref_count::operator--(a1 + 10, a2, a3, a4);
  if ( !v6 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock, v5, v7, v8);
    winrt::impl::disconnect_aware_handler::~disconnect_aware_handler((winrt::impl::disconnect_aware_handler *)(a1 + 4));
    operator delete((void *)a1, 0x30uLL);
  }
  return v6;
}
