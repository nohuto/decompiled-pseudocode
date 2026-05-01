/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@UIVDSConfiguration@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180607C58
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@UIVDSConfiguration@@@WRL@Microsoft@@UEAA@XZ @ 0x180607C4C (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIVirtual.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180607F04 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@UIVDSConfiguration@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180608810 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$CMultitaskingViewHostBase@UIVirtua.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EF1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal,IVDSConfiguration>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal,IVDSConfiguration>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release((volatile signed __int32 *)(2 * v2));
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>(a1 + 8);
}
