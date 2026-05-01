/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Release @ 0x1801BC640
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Release(
        void *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 4);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    if ( *((_QWORD *)a1 + 1) )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)a1 + 1);
    operator delete(a1, 0x18uLL);
  }
  return v2;
}
