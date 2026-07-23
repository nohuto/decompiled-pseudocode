/*
 * XREFs of BgGetDisplayContext @ 0x140AEC028
 * Callers:
 *     BgkSetVirtualFrameBuffer @ 0x1403B6810 (BgkSetVirtualFrameBuffer.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int128 *BgGetDisplayContext()
{
  return &BgInternal;
}
