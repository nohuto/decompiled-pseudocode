/*
 * XREFs of ?GetInkProcessor@@YAJPEAPEAVInkProcessor@@@Z @ 0x1C01FE0B4
 * Callers:
 *     InkProcessorOnPointerMessagePosted @ 0x1C0156550 (InkProcessorOnPointerMessagePosted.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE0EC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE1B8 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01FE25C (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE2F8 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01FE39C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01FE440 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 *     InkProcessorIsInkDevice @ 0x1C01FE530 (InkProcessorIsInkDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInkProcessor(struct InkProcessor **a1)
{
  struct InkProcessor *v2; // rdx

  v2 = *(struct InkProcessor **)(SGDGetUserSessionState(a1) + 3440);
  *a1 = v2;
  return v2 == 0LL ? 0xC0000001 : 0;
}
