/*
 * XREFs of sub_1406C38A8 @ 0x1406C38A8
 * Callers:
 *     sub_1406C3540 @ 0x1406C3540 (sub_1406C3540.c)
 * Callees:
 *     sub_1406C3918 @ 0x1406C3918 (sub_1406C3918.c)
 */

__int64 __fastcall sub_1406C38A8(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  int v6; // eax

  if ( a2 < 0x44 )
    return 3221225473LL;
  result = sub_1406C3918((_DWORD)a1, 68, a1[12], a1[15], a1[16], a2, a3, 1, 1);
  if ( (int)result < 0 )
    return result;
  v6 = a1[11];
  if ( (v6 & 0x8000) == 0 || a2 != *a1 || (v6 & 0xFFFF7F7F) != 0 )
    return 3221225473LL;
  return 0LL;
}
