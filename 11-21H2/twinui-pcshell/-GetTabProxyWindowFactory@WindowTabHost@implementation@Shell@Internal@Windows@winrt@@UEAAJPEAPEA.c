/*
 * XREFs of ?GetTabProxyWindowFactory@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUITabProxyWindowFactoryInternal@345@@Z @ 0x1805781D0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetTabProxyWindowFactory(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal **); // rcx
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v4; // rbx
  signed int v5; // eax
  struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, void *, struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal **))*((_QWORD *)this + 14);
  if ( v3 )
  {
    v7 = 0LL;
    v5 = (**v3)(v3, &winrt::impl::guid_v<Windows::Internal::Shell::ITabProxyWindowFactoryInternal>, &v7);
    if ( v5 < 0 )
      winrt::throw_hresult(v5);
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  v7 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ITabProxyWindowFactoryInternal *))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = v4;
  if ( v4 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v7);
  return 0LL;
}
