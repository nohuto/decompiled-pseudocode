/*
 * XREFs of RtlEncodeSystemPointer @ 0x180087280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlEncodeSystemPointer(PVOID Ptr)
{
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
}
