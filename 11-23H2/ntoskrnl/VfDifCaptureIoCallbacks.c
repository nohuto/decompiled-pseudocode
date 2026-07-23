/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x140209F20
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x1405CF7C8 (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B3DB64 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14020A524 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CF52C (ViDifCaptureIoCallbacks.c)
 */

char __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  char result; // al

  result = ViDifCheckCallbackInterception();
  if ( result )
  {
    ViDifCaptureIoCallbacks(a1);
    return 1;
  }
  return result;
}
