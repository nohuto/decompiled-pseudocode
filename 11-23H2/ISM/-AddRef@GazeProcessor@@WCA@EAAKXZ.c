/*
 * XREFs of ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18006A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::AddRef(__int64 a1)
{
  return DWMFocusedInputTarget::AddRef((DWMFocusedInputTarget *)(a1 - 32));
}
