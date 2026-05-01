/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___::_scalar_deleting_destructor_ @ 0x1803417C0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_990a3a94af437e7dcdd96bcbb6b9cde9___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  __int64 *v4; // rcx

  v4 = a1 + 3;
  if ( *v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
