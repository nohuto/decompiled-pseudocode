/*
 * XREFs of ?ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z @ 0x180094E30
 * Callers:
 *     ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18002C0FC (-InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV5234@PEAPEAUICompositionPropertyChangedListenerPartner@234@@Z @ 0x18002D528 (-ShouldNotify@AnimationBindingManager@Composition@UI@Windows@@QEAA_NPEAVProxyObject@234@IPEAPEAV.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_366999c7e48dfd44e6dcc12fada39a6d___ @ 0x180094F00 (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_366999c7e48dfd44e6dcc12fada39a6d_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::ProxyObject::ReferencePropertyChanged_Callback(
        Windows::UI::Composition::CompositorCommon **this,
        unsigned int a2)
{
  Windows::UI::Composition::CompositorCommon *v4; // rcx
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *v6; // rcx
  struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *Buffer; // [rsp+90h] [rbp+20h] BYREF
  struct Windows::UI::Composition::ProxyObject *v8; // [rsp+A0h] [rbp+30h] BYREF

  Buffer = 0LL;
  (*((void (__fastcall **)(Windows::UI::Composition::CompositorCommon **))*this + 36))(this);
  v4 = this[3];
  v8 = 0LL;
  BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(v4);
  if ( Windows::UI::Composition::AnimationBindingManager::ShouldNotify(
         BindingManager,
         (struct Windows::UI::Composition::ProxyObject *)this,
         a2,
         &v8,
         &Buffer) )
  {
    Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_366999c7e48dfd44e6dcc12fada39a6d___(this[3]);
  }
  v6 = Buffer;
  if ( Buffer )
  {
    Buffer = 0LL;
    (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionPropertyChangedListenerPartner *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
