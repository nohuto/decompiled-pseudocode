/*
 * XREFs of ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x180472E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1805E3B7C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisconnected(
        KeyboardHosting::TabTipAdapter *this,
        struct IMessageProxy *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // r14
  void (__fastcall *v5)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  MessageProxyReconnectAdapter *v6; // rcx
  struct IMessageProxy *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 6);
  if ( v4 )
  {
    v8 = 0LL;
    v5 = **v4;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
    v5(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v8);
    if ( v8 == a2 )
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  v6 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    MessageProxyReconnectAdapter::Dispose(v6);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  }
  return 0LL;
}
