/*
 * XREFs of ViDifFindIoCallbackContext @ 0x1405CF184
 * Callers:
 *     VfDifRecoverIoCallbacks @ 0x1405CECF4 (VfDifRecoverIoCallbacks.c)
 *     ViDifCaptureDriverEntry @ 0x1405CEF4C (ViDifCaptureDriverEntry.c)
 *     ViDifCaptureIoCallbacks @ 0x1405CEFBC (ViDifCaptureIoCallbacks.c)
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
