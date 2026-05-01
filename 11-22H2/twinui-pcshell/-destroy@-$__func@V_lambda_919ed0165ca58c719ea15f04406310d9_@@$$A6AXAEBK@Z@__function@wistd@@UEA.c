/*
 * XREFs of ?destroy@?$__func@V_lambda_919ed0165ca58c719ea15f04406310d9_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXXZ @ 0x1801BA7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_919ed0165ca58c719ea15f04406310d9_,void (unsigned long const &)>::destroy(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v1);
  return result;
}
