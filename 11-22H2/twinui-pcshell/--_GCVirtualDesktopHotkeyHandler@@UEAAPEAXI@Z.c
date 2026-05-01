/*
 * XREFs of ??_GCVirtualDesktopHotkeyHandler@@UEAAPEAXI@Z @ 0x180148320
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopHotkeyHandler@@UEAA@XZ @ 0x180145820 (--1CVirtualDesktopHotkeyHandler@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CVirtualDesktopHotkeyHandler *__fastcall CVirtualDesktopHotkeyHandler::`scalar deleting destructor'(
        CVirtualDesktopHotkeyHandler *this,
        char a2)
{
  CVirtualDesktopHotkeyHandler::~CVirtualDesktopHotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x60uLL);
  return this;
}
