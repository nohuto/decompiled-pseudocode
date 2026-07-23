/*
 * XREFs of RtlCopyExtendedContext @ 0x1405AAE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCopyExtendedContext @ 0x14030D2C0 (RtlpCopyExtendedContext.c)
 */

NTSTATUS __cdecl RtlCopyExtendedContext(PCONTEXT_EX Destination, ULONG ContextFlags, PCONTEXT_EX Source)
{
  return RtlpCopyExtendedContext(1, (__int64)Destination, 0LL, ContextFlags, (__int64)Source, 0LL);
}
