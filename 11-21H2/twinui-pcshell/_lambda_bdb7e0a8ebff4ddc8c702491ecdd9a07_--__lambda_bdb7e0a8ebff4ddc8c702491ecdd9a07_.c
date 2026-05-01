/*
 * XREFs of _lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_::__lambda_bdb7e0a8ebff4ddc8c702491ecdd9a07_ @ 0x1801AA1E4
 * Callers:
 *     ?PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18012FD60 (-PublishServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$17 @ 0x1801AA705 (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$17.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$31 @ 0x1801AA71D (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$31.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$47 @ 0x1801AA735 (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$47.c)
 *     __lambda_9b41e49093e020fa356c5dbea766620b_::operator()_::_1_::dtor$61 @ 0x1801AA74D (__lambda_9b41e49093e020fa356c5dbea766620b_--operator()_--_1_--dtor$61.c)
 *     _XamlLauncher::PublishServices_::_1_::dtor$1 @ 0x180220ED7 (_XamlLauncher--PublishServices_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ @ 0x18012FF18 (-unconditional_release_ref@-$com_ptr@VXamlLauncher@@@winrt@@AEAAXXZ.c)
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
