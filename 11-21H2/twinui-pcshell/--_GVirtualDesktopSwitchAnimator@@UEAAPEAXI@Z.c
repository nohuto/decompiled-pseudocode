/*
 * XREFs of ??_GVirtualDesktopSwitchAnimator@@UEAAPEAXI@Z @ 0x18017B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopSwitchAnimator@@UEAA@XZ @ 0x18017B3DC (--1VirtualDesktopSwitchAnimator@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopSwitchAnimator *__fastcall VirtualDesktopSwitchAnimator::`scalar deleting destructor'(
        VirtualDesktopSwitchAnimator *this,
        char a2)
{
  VirtualDesktopSwitchAnimator::~VirtualDesktopSwitchAnimator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
