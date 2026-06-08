/*
 * XREFs of PepIdleCompleteV2 @ 0x1C0009F10
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleComplete @ 0x1C0009E90 (PepIdleComplete.c)
 */

__int64 __fastcall PepIdleCompleteV2(__int64 *a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return PepIdleComplete(a1, a2, a3, a4, a5);
  result = a2;
  if ( !BYTE1(a1[11 * a2 + 18]) )
    return PepIdleComplete(a1, a2, a3, a4, a5);
  return result;
}
