/*
 * XREFs of ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x180096850
 * Callers:
 *     <none>
 * Callees:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x18005B2A8 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 */

__int64 __fastcall SetManipulationInputTarget(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5)
{
  PointerInputMediator::RoutePointers(a1, a2, a3, a4, a5, 0);
  return 1LL;
}
