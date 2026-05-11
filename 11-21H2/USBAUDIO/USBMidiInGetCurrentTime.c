/*
 * XREFs of USBMidiInGetCurrentTime @ 0x1C00032B0
 * Callers:
 *     USBHwGetClockRatio @ 0x1C0002BC4 (USBHwGetClockRatio.c)
 *     UsbHwFrameCountTimestamp @ 0x1C0003148 (UsbHwFrameCountTimestamp.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C000362C (USBType1AdjustPositionWithin1Ms.c)
 *     USBType1RenderBytePosition @ 0x1C00051A0 (USBType1RenderBytePosition.c)
 *     USBCaptureAdjustPositionWithin1Ms @ 0x1C0005E30 (USBCaptureAdjustPositionWithin1Ms.c)
 *     USBMIDIInReQueueUrb @ 0x1C0007330 (USBMIDIInReQueueUrb.c)
 *     USBMidiInStateChangePin @ 0x1C0007B90 (USBMidiInStateChangePin.c)
 * Callees:
 *     <none>
 */

unsigned __int64 USBMidiInGetCurrentTime()
{
  LARGE_INTEGER v0; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  return ((10000000 * HIDWORD(v0.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
       + (((10000000 * HIDWORD(v0.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
        + 10000000LL * v0.LowPart)
       / PerformanceFrequency.QuadPart;
}
