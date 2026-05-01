/*
 * XREFs of ??_GVirtualDesktopSwitcherHost@@UEAAPEAXI@Z @ 0x1806088D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopSwitcherHost@@UEAA@XZ @ 0x180607F04 (--1VirtualDesktopSwitcherHost@@UEAA@XZ.c)
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
