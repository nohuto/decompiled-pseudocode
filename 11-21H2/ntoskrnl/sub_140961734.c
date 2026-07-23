/*
 * XREFs of sub_140961734 @ 0x140961734
 * Callers:
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 * Callees:
 *     sub_1404205F0 @ 0x1404205F0 (sub_1404205F0.c)
 */

__int64 __fastcall sub_140961734(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  bool v6; // zf
  int v7; // ebx
  __int64 result; // rax

  v6 = (qword_140D068D8 & 0x10000000000LL) == 0;
  *a6 = 0;
  if ( v6 )
    return 3221225659LL;
  v7 = 16;
  while ( 1 )
  {
    result = sub_1404205F0(2u);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result != 128 )
    {
      *a6 = result;
      return 3221226639LL;
    }
    if ( !--v7 )
    {
      *a6 = 128;
      return 3221226029LL;
    }
  }
  return result;
}
