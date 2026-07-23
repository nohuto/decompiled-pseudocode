/*
 * XREFs of KeDeregisterNmiCallback @ 0x14056A170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14056A8C4 @ 0x14056A8C4 (sub_14056A8C4.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return sub_14056A8C4(Handle);
}
