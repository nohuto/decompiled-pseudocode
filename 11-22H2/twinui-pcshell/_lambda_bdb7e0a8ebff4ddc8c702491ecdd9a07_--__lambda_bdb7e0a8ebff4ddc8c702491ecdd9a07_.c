/*
 * XREFs of _lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_ @ 0x1804FFD80
 * Callers:
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$63 @ 0x1802B6527 (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$63.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$39 @ 0x1802B6539 (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$39.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$76 @ 0x1802B655D (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$76.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$1 @ 0x1802BCC1B (_XamlLauncher--PublishServices_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x1801060D8 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<XamlLauncher>::unconditional_release_ref(v1);
  return result;
}
