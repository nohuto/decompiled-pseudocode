/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release @ 0x1800E42C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800318B4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x180098D74 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Release(
        void *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--((volatile signed __int32 *)a1 + 26);
  if ( !v2 && a1 )
  {
    winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)a1 + 1);
    operator delete(a1);
  }
  return v2;
}
