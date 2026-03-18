/*
 * XREFs of sub_1409F989C @ 0x1409F989C
 * Callers:
 *     sub_140609420 @ 0x140609420 (sub_140609420.c)
 *     sub_1409F9A40 @ 0x1409F9A40 (sub_1409F9A40.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409F9DD0 (ExpGenuinePolicyPostProcess.c)
 *     sub_1409FA230 @ 0x1409FA230 (sub_1409FA230.c)
 *     sub_1409FA2B0 @ 0x1409FA2B0 (sub_1409FA2B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F989C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 4;
  if ( a3 < 4 )
    return 3221225507LL;
  if ( a1 )
    *a1 = 4;
  if ( a2 )
    *a2 = a5;
  return result;
}
