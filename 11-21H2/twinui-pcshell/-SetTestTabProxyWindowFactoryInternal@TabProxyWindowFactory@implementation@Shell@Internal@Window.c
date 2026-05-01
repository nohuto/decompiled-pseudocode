/*
 * XREFs of ?SetTestTabProxyWindowFactoryInternal@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUITestTabProxyWindowFactoryInternal@345@@Z @ 0x180579D30
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory::SetTestTabProxyWindowFactoryInternal(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory *this,
        struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal *a2)
{
  _QWORD *v3; // rdi

  v3 = (_QWORD *)((char *)this + 80);
  if ( *((struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal **)this + 10) != a2 )
  {
    if ( *v3 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this + 10);
    *v3 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Internal::Shell::ITestTabProxyWindowFactoryInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return 0LL;
}
