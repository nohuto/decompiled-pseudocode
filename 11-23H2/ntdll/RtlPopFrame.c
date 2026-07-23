/*
 * XREFs of RtlPopFrame @ 0x180068270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPopFrame(PTEB_ACTIVE_FRAME Frame)
{
  NtCurrentTeb()->ActiveFrame = Frame->Previous;
}
