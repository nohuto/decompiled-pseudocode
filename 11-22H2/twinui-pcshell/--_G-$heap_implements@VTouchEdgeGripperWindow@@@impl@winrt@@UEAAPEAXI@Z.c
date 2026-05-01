/*
 * XREFs of ??_G?$heap_implements@VTouchEdgeGripperWindow@@@impl@winrt@@UEAAPEAXI@Z @ 0x180656850
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1TouchEdgeGripperWindow@@UEAA@XZ @ 0x180658EEC (--1TouchEdgeGripperWindow@@UEAA@XZ.c)
 */

TouchEdgeGripperWindow *__fastcall winrt::impl::heap_implements<TouchEdgeGripperWindow>::`scalar deleting destructor'(
        TouchEdgeGripperWindow *a1,
        char a2)
{
  TouchEdgeGripperWindow::~TouchEdgeGripperWindow(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
