/*
 * XREFs of ??_GVirtualDesktopItem@@UEAAPEAXI@Z @ 0x1805718D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopItem@@UEAA@XZ @ 0x1805716E4 (--1VirtualDesktopItem@@UEAA@XZ.c)
 */

VirtualDesktopItem *__fastcall VirtualDesktopItem::`scalar deleting destructor'(VirtualDesktopItem *this, char a2)
{
  VirtualDesktopItem::~VirtualDesktopItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
