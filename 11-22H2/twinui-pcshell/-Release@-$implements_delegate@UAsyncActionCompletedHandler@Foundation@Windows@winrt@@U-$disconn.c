/*
 * XREFs of ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@U?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@4@@impl@winrt@@UEAAIXZ @ 0x1800DB040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$disconnect_aware_handler@U?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800AD990 (--1-$disconnect_aware_handler@U-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@@impl@win.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncActionCompletedHandler,winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>>>::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 10);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    winrt::impl::disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>>::~disconnect_aware_handler<winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction>>((_QWORD *)a1 + 1);
    operator delete((void *)a1, 0x30uLL);
  }
  return v2;
}
