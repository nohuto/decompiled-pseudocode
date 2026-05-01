/*
 * XREFs of ??_EVirtualDesktopAcessibility@@UEAAPEAXI@Z @ 0x1801BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopAcessibility@@UEAA@XZ @ 0x1801429F4 (--1VirtualDesktopAcessibility@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopAcessibility *__fastcall VirtualDesktopAcessibility::`vector deleting destructor'(
        VirtualDesktopAcessibility *this,
        char a2)
{
  VirtualDesktopAcessibility::~VirtualDesktopAcessibility(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xF8uLL);
  return this;
}
