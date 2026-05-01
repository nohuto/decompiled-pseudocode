/*
 * XREFs of ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18015EAE0
 * Callers:
 *     ??_ETouchGestureComponent@@WCA@EAAPEAXI@Z @ 0x18020EBA0 (--_ETouchGestureComponent@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x18015EB1C (--1TouchGestureComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

TouchGestureComponent *__fastcall winrt::impl::heap_implements<TouchGestureComponent>::`scalar deleting destructor'(
        TouchGestureComponent *a1,
        char a2)
{
  TouchGestureComponent::~TouchGestureComponent(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x68uLL);
  return a1;
}
