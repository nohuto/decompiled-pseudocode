/*
 * XREFs of ??_G?$heap_implements@VVirtualDestopSwitcherViewChangeNotificationProxy@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800ABB00
 * Callers:
 *     ??_E?$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z @ 0x180207A70 (--_E-$heap_implements@VTaskViewViewChangeNotificationProxy@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ @ 0x1800AAD60 (--1VirtualDestopSwitcherViewChangeNotificationProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDestopSwitcherViewChangeNotificationProxy *__fastcall winrt::impl::heap_implements<VirtualDestopSwitcherViewChangeNotificationProxy>::`scalar deleting destructor'(
        VirtualDestopSwitcherViewChangeNotificationProxy *a1,
        char a2)
{
  VirtualDestopSwitcherViewChangeNotificationProxy::~VirtualDestopSwitcherViewChangeNotificationProxy(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0xE0uLL);
  return a1;
}
