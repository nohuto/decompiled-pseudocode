/*
 * XREFs of ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1800677B0
 * Callers:
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall PointerInputMediator::RouteInput(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a5,
        int a6)
{
  NtUserSetManipulationInputTarget(a1, a2, a3, a4, a5, a6);
}
