/*
 * XREFs of ??_GVirtualDesktopTabletModeNotificationListener@@UEAAPEAXI@Z @ 0x18017EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopFactory@@UEAA@XZ @ 0x18017EE3C (--1CVirtualDesktopFactory@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopTabletModeNotificationListener *__fastcall VirtualDesktopTabletModeNotificationListener::`scalar deleting destructor'(
        VirtualDesktopTabletModeNotificationListener *this,
        char a2)
{
  CVirtualDesktopFactory::~CVirtualDesktopFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
