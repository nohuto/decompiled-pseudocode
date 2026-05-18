/*
 * XREFs of sub_180093120 @ 0x180093120
 * Callers:
 *     sub_1800930E8 @ 0x1800930E8 (sub_1800930E8.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 */

_DWORD *__fastcall sub_180093120(__int64 a1, __int64 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_180091F90(a1, a2, 0LL);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
