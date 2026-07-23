/*
 * XREFs of ViDifFindIoCallbackContext @ 0x1405CF6F4
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x1405CF264 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x1405CF4BC (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CF52C (ViDifCaptureIoCallbacks.c)
 * Callees:
 *     <none>
 */

char **__fastcall ViDifFindIoCallbackContext(int a1)
{
  char **result; // rax

  result = &VfDifIoCallbackThunks;
  while ( *((_DWORD *)result + 7) != a1 )
  {
    result += 4;
    if ( !*result )
      return 0LL;
  }
  return result;
}
