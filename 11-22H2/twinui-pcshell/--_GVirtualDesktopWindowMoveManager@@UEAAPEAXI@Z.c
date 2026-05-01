/*
 * XREFs of ??_GVirtualDesktopWindowMoveManager@@UEAAPEAXI@Z @ 0x1801B68F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopWindowMoveManager@@UEAA@XZ @ 0x1801B692C (--1VirtualDesktopWindowMoveManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopWindowMoveManager *__fastcall VirtualDesktopWindowMoveManager::`scalar deleting destructor'(
        VirtualDesktopWindowMoveManager *this,
        char a2)
{
  VirtualDesktopWindowMoveManager::~VirtualDesktopWindowMoveManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
