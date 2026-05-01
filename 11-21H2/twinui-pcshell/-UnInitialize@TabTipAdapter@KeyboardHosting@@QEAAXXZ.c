/*
 * XREFs of ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180155850
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1801555A0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x1801558D8 (-RemoveEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1805E3B7C (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::UnInitialize(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  MessageProxyReconnectAdapter *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  KeyboardHosting::TabTipAdapter::RemoveEventHandlersFromCoreKeyboardManager(this);
  if ( *((_QWORD *)this + 6) )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
  v4 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    MessageProxyReconnectAdapter::Dispose(v4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 7);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 12);
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v2,
    v3);
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  }
}
