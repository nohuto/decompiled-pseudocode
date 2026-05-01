/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804A38B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x18000F7B0 (--1-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[39] = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
