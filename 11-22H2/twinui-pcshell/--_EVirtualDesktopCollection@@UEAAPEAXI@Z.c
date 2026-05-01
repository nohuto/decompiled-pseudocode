/*
 * XREFs of ??_EVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x180544750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopCollection@@UEAA@XZ @ 0x18054467C (--1VirtualDesktopCollection@@UEAA@XZ.c)
 */

VirtualDesktopCollection *__fastcall VirtualDesktopCollection::`vector deleting destructor'(
        VirtualDesktopCollection *this,
        char a2)
{
  VirtualDesktopCollection::~VirtualDesktopCollection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
