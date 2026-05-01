/*
 * XREFs of ??_E?$heap_implements@VTouchGestureSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x180178648
 * Callers:
 *     ??_ETouchGestureSettings@@W7EAAPEAXI@Z @ 0x18020EBC0 (--_ETouchGestureSettings@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchGestureSettings@@UEAA@XZ @ 0x180178684 (--1TouchGestureSettings@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TouchGestureSettings *__fastcall winrt::impl::heap_implements<TouchGestureSettings>::`vector deleting destructor'(
        TouchGestureSettings *a1,
        char a2)
{
  TouchGestureSettings::~TouchGestureSettings(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x78uLL);
  return a1;
}
