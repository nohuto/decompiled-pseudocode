/*
 * XREFs of ??_GVirtualDesktopController@@UEAAPEAXI@Z @ 0x1801482A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VirtualDesktopController@@UEAA@XZ @ 0x180147FBC (--1VirtualDesktopController@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

VirtualDesktopController *__fastcall VirtualDesktopController::`scalar deleting destructor'(
        VirtualDesktopController *this,
        char a2)
{
  VirtualDesktopController::~VirtualDesktopController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
