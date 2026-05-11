/*
 * XREFs of USBHwFreePipes @ 0x1C0033684
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0034900 (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBType1RenderClosePin @ 0x1C003A040 (USBType1RenderClosePin.c)
 *     USBCaptureClosePin @ 0x1C003A530 (USBCaptureClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreePipes(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 72);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 72) = 0LL;
  }
}
