/*
 * XREFs of sub_1403DCD34 @ 0x1403DCD34
 * Callers:
 *     sub_140861890 @ 0x140861890 (sub_140861890.c)
 *     sub_140B21B40 @ 0x140B21B40 (sub_140B21B40.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

NTSTATUS sub_1403DCD34()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( byte_140C4629A )
    return KeWaitForSingleObject(&stru_140C46BE0, Executive, 0, 0, 0LL);
  return result;
}
