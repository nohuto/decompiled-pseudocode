/*
 * XREFs of PepIdlePreExecuteV2 @ 0x1C000A0F0
 * Callers:
 *     <none>
 * Callees:
 *     PepIdlePreExecute @ 0x1C000A090 (PepIdlePreExecute.c)
 */

__int64 __fastcall PepIdlePreExecuteV2(__int64 *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return PepIdlePreExecute(a1, a2, a3, a4, a5);
  result = 0LL;
  if ( !BYTE1(a1[11 * a2 + 18]) )
    return PepIdlePreExecute(a1, a2, a3, a4, a5);
  return result;
}
