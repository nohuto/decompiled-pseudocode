/*
 * XREFs of ??_EVirtualDesktopTabletModePolicy@@UEAAPEAXI@Z @ 0x1801B76C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopTabletModePolicy@@UEAA@XZ @ 0x1801B76FC (--1VirtualDesktopTabletModePolicy@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
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
