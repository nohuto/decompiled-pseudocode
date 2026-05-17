/*
 * XREFs of RtlDoesFileExists_U @ 0x180061E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDoesFileExists_U(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return RtlDoesFileExists_UEx(a1, a2);
}
