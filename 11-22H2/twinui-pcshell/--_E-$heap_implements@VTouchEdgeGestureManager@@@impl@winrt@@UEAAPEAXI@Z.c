/*
 * XREFs of ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z @ 0x1801BD724
 * Callers:
 *     ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x1802AADF0 (--_E-$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x180142CD8 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

TouchEdgeGestureManager *__fastcall winrt::impl::heap_implements<TouchEdgeGestureManager>::`vector deleting destructor'(
        TouchEdgeGestureManager *a1,
        char a2)
{
  TouchEdgeGestureManager::~TouchEdgeGestureManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x1B8uLL);
  return a1;
}
