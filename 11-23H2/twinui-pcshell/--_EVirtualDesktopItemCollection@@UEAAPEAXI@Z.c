/*
 * XREFs of ??_EVirtualDesktopItemCollection@@UEAAPEAXI@Z @ 0x180565D80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopItemCollection@@UEAA@XZ @ 0x180565C08 (--1VirtualDesktopItemCollection@@UEAA@XZ.c)
 */

VirtualDesktopItemCollection *__fastcall VirtualDesktopItemCollection::`vector deleting destructor'(
        VirtualDesktopItemCollection *this,
        char a2)
{
  VirtualDesktopItemCollection::~VirtualDesktopItemCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
