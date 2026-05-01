/*
 * XREFs of ??_E?$heap_implements@VTouchEdgeGripperHost@@@impl@winrt@@UEAAPEAXI@Z @ 0x180182F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1TouchEdgeGripperHost@@UEAA@XZ @ 0x18018300C (--1TouchEdgeGripperHost@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TouchEdgeGripperHost *__fastcall winrt::impl::heap_implements<TouchEdgeGripperHost>::`vector deleting destructor'(
        TouchEdgeGripperHost *a1,
        char a2)
{
  TouchEdgeGripperHost::~TouchEdgeGripperHost(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x100uLL);
  return a1;
}
