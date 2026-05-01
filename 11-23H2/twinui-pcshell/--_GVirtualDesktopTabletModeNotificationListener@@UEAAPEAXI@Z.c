/*
 * XREFs of ??_GVirtualDesktopTabletModeNotificationListener@@UEAAPEAXI@Z @ 0x1801BC5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopTabletModeNotificationListener@@UEAA@XZ @ 0x1801BC60C (--1VirtualDesktopTabletModeNotificationListener@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopTabletModeNotificationListener *__fastcall VirtualDesktopTabletModeNotificationListener::`scalar deleting destructor'(
        VirtualDesktopTabletModeNotificationListener *this,
        char a2)
{
  VirtualDesktopTabletModeNotificationListener::~VirtualDesktopTabletModeNotificationListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
