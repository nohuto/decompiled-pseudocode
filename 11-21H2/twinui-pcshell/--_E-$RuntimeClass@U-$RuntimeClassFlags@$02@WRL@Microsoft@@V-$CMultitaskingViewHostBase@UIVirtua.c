/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@UIVDSConfiguration@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180608810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$CMultitaskingViewHostBase@UIVirtualDesktopSwitcherHost@@@@UIVirtualDesktopSwitcherViewHostInternal@@UIVDSConfiguration@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180607C58 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$CMultita_ea_180607C58.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal,IVDSConfiguration>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal,IVDSConfiguration>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CMultitaskingViewHostBase<IVirtualDesktopSwitcherHost>,IVirtualDesktopSwitcherViewHostInternal,IVDSConfiguration>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
