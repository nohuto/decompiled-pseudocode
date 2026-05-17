/*
 * XREFs of RtlCreateEnvironment @ 0x180058560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateEnvironment(char a1, __int64 a2)
{
  return RtlCreateEnvironmentEx(0LL, a2, a1 == 0 ? 4 : 0);
}
