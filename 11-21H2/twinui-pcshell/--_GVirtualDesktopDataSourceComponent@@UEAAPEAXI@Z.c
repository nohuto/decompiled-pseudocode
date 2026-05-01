/*
 * XREFs of ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x180176E78
 * Callers:
 *     ??_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z @ 0x180206310 (--_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopDataSourceComponent@@UEAA@XZ @ 0x180176EB4 (--1VirtualDesktopDataSourceComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopDataSourceComponent *__fastcall VirtualDesktopDataSourceComponent::`scalar deleting destructor'(
        VirtualDesktopDataSourceComponent *this,
        char a2)
{
  VirtualDesktopDataSourceComponent::~VirtualDesktopDataSourceComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA0uLL);
  return this;
}
