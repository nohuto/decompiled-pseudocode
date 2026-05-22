/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1800A9110
 * Callers:
 *     <none>
 * Callees:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        unsigned int a1,
        void *a2,
        int a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5)
{
  PointerInputMediator::RoutePointers(a1, a2, a3, a4, a5, 0);
  return 1LL;
}
