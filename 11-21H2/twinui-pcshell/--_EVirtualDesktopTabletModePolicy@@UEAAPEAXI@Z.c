/*
 * XREFs of ??_EVirtualDesktopTabletModePolicy@@UEAAPEAXI@Z @ 0x18017A820
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopTabletModePolicy@@UEAA@XZ @ 0x18017A85C (--1VirtualDesktopTabletModePolicy@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopTabletModePolicy *__fastcall VirtualDesktopTabletModePolicy::`vector deleting destructor'(
        VirtualDesktopTabletModePolicy *this,
        char a2)
{
  VirtualDesktopTabletModePolicy::~VirtualDesktopTabletModePolicy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
