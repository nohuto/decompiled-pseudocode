/*
 * XREFs of ??_GVirtualDesktopDataSourceComponent@@UEAAPEAXI@Z @ 0x1801B14BC
 * Callers:
 *     ??_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z @ 0x1802A1C50 (--_EVirtualDesktopDataSourceComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1VirtualDesktopDataSourceComponent@@UEAA@XZ @ 0x1801B14F8 (--1VirtualDesktopDataSourceComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
