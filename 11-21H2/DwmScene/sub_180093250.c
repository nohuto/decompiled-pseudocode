/*
 * XREFs of sub_180093250 @ 0x180093250
 * Callers:
 *     sub_180093218 @ 0x180093218 (sub_180093218.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 */

_DWORD *__fastcall sub_180093250(__int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_180091F90(a1, a2, 1LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
