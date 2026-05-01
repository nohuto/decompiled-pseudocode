/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1802CE650
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::hresult_out_of_bounds::~hresult_out_of_bounds(winrt::hresult_out_of_bounds *this)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)((char *)this + 16);
  if ( *v2 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::bstr_traits>::close(this);
}
