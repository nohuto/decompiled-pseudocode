/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopSoftLandingHandler@@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180147D30
 * Callers:
 *     ??0CVirtualDesktopSoftLandingHandler@@QEAA@XZ @ 0x180147C5C (--0CVirtualDesktopSoftLandingHandler@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180100920 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,IVirtualDesktopSoftLandingHandler,IApplicationViewChangeListener>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &VirtualDesktopNotificationBase<IVirtualDesktopNotification>::`vftable';
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 16));
  result = a1;
  *(_DWORD *)(a1 + 28) = 1;
  return result;
}
