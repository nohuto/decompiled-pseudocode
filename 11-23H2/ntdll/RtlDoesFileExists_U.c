/*
 * XREFs of RtlDoesFileExists_U @ 0x1800898A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlDoesFileExists_U(PCWSTR FileName)
{
  return RtlDoesFileExists_UEx(FileName, 1);
}
