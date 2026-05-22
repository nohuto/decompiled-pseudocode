/*
 * XREFs of ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x180030A50
 * Callers:
 *     CreateInputServiceProxy @ 0x1800309C0 (CreateInputServiceProxy.c)
 * Callees:
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180030D04 (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputServiceProxy,IInputServiceProxy,IInputServiceProxyOwner * &>(
        _QWORD *a1,
        struct IInputServiceProxyOwner **a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  InputServiceProxy *v6; // rdi
  int v7; // esi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = (InputServiceProxy *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 5) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `IInputServiceProxy'};
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &InputServiceProxy::`vftable'{for `IInputServiceProxy'};
    v5[1] = &InputServiceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
    v5[4] = 0LL;
    v5[5] = 0LL;
    v7 = InputServiceProxy::RuntimeClassInitialize(v6, *a2);
    if ( v7 >= 0 )
      v7 = (**(__int64 (__fastcall ***)(InputServiceProxy *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
             a1);
    (*(void (__fastcall **)(InputServiceProxy *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
