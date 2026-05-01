/*
 * XREFs of ??_EVirtualDesktopManagerSuspensionToken@@UEAAPEAXI@Z @ 0x180600870
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1VirtualDesktopManagerSuspensionToken@@UEAA@XZ @ 0x18060049C (--1VirtualDesktopManagerSuspensionToken@@UEAA@XZ.c)
 */

VirtualDesktopManagerSuspensionToken *__fastcall VirtualDesktopManagerSuspensionToken::`vector deleting destructor'(
        VirtualDesktopManagerSuspensionToken *this,
        char a2)
{
  VirtualDesktopManagerSuspensionToken::~VirtualDesktopManagerSuspensionToken(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
