/*
 * XREFs of RtlPopFrame @ 0x18006D470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlPopFrame(PTEB_ACTIVE_FRAME Frame)
{
  NtCurrentTeb()->ActiveFrame = Frame->Previous;
}
