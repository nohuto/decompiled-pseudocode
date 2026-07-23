/*
 * XREFs of sub_1409F9B2C @ 0x1409F9B2C
 * Callers:
 *     sub_140609970 @ 0x140609970 (sub_140609970.c)
 *     sub_1409F9CD0 @ 0x1409F9CD0 (sub_1409F9CD0.c)
 *     ExpGenuinePolicyPostProcess @ 0x1409FA060 (ExpGenuinePolicyPostProcess.c)
 *     sub_1409FA4C0 @ 0x1409FA4C0 (sub_1409FA4C0.c)
 *     sub_1409FA540 @ 0x1409FA540 (sub_1409FA540.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F9B2C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
