/*
 * XREFs of ??_G?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BD6E8
 * Callers:
 *     ??_E?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1802A38A0 (--_E-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x180143A14 (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDestopSwitcherViewChangeNotificationProxy *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`scalar deleting destructor'(
        VirtualDestopSwitcherViewChangeNotificationProxy *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  VirtualDestopSwitcherViewChangeNotificationProxy::~VirtualDestopSwitcherViewChangeNotificationProxy(a1, a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, 0xE0uLL);
  return a1;
}
