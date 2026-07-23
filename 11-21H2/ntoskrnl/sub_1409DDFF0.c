/*
 * XREFs of sub_1409DDFF0 @ 0x1409DDFF0
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     sub_1406C3918 @ 0x1406C3918 (sub_1406C3918.c)
 */

__int64 __fastcall sub_1409DDFF0(_DWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // eax

  if ( a2 < 0x44 )
    return 3221225473LL;
  result = sub_1406C3918((__int64)a1, 0x44u, a1[12], a1[15], a1[16], a2, 0, 0, 1);
  if ( (int)result < 0 )
    return result;
  v5 = a1[11];
  if ( (v5 & 4) != 0 && a2 == *a1 && (v5 & 0xFFFFFF7B) == 0 )
    return 0LL;
  else
    return 3221225473LL;
}
