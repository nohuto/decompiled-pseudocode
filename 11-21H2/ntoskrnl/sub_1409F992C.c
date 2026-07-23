/*
 * XREFs of sub_1409F992C @ 0x1409F992C
 * Callers:
 *     sub_14063A000 @ 0x14063A000 (sub_14063A000.c)
 *     sub_1409F9AD0 @ 0x1409F9AD0 (sub_1409F9AD0.c)
 *     sub_1409F9E40 @ 0x1409F9E40 (sub_1409F9E40.c)
 *     sub_1409FA290 @ 0x1409FA290 (sub_1409FA290.c)
 *     sub_1409FA310 @ 0x1409FA310 (sub_1409FA310.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1409F992C(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, int a5)
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
