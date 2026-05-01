/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18053F630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1CVirtualDesktopNotifications@@QEAA@XZ @ 0x18053EE90 (--1CVirtualDesktopNotifications@@QEAA@XZ.c)
 */

CVirtualDesktopNotifications *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vector deleting destructor'(
        CVirtualDesktopNotifications *a1,
        char a2)
{
  *((_DWORD *)a1 + 29) = -1073741823;
  CVirtualDesktopNotifications::~CVirtualDesktopNotifications(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
