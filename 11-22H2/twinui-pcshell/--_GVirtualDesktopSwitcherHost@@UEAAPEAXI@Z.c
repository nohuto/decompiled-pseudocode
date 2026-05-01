/*
 * XREFs of ??_GVirtualDesktopSwitcherHost@@UEAAPEAXI@Z @ 0x180772C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180771E10 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
 */

VirtualDesktopSwitcherHost *__fastcall VirtualDesktopSwitcherHost::`scalar deleting destructor'(
        VirtualDesktopSwitcherHost *this,
        char a2)
{
  VirtualDesktopSwitcherHost::~VirtualDesktopSwitcherHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
