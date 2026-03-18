/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x1402D8A7C
 * Callers:
 *     VfTargetReplaceIoCallbacks @ 0x1405FEF58 (VfTargetReplaceIoCallbacks.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x1402D8764 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x1405FECBC (ViDifCaptureIoCallbacks.c)
 */

bool __fastcall VfDifCaptureIoCallbacks(struct _DRIVER_OBJECT *a1)
{
  bool result; // al

  result = ViDifCheckCallbackInterception(a1);
  if ( result )
  {
    ViDifCaptureIoCallbacks(a1);
    return 1;
  }
  return result;
}
