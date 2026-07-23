/*
 * XREFs of RtlCopyExtendedContext @ 0x1405E7C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140294DD8 @ 0x140294DD8 (sub_140294DD8.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return sub_140294DD8(1, (__int64)Destination, 0LL, ContextFlags, (__int64)Source, 0LL);
}
