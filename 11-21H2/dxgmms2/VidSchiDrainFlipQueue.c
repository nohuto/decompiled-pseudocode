/*
 * XREFs of VidSchiDrainFlipQueue @ 0x1C00AA160
 * Callers:
 *     <none>
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000AD70 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00AA188 (VidSchiWaitForDrainFlipQueue.c)
 */

char __fastcall VidSchiDrainFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  char result; // al

  result = VidSchIsTDRPending((__int64)a1);
  if ( !result )
    return VidSchiWaitForDrainFlipQueue(a1);
  return result;
}
