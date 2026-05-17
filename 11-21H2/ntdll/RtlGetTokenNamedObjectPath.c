/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x180076A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(__int64 a1, char a2, __int64 a3)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL, a2 != 0, a3);
}
