/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18007F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64 (-RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5)
{
  PointerInputMediator::RoutePointer(a1, a2, a3, a4, a5, 0);
  return 1LL;
}
