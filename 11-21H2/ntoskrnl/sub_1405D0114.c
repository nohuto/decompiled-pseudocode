/*
 * XREFs of sub_1405D0114 @ 0x1405D0114
 * Callers:
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_140A34B94 @ 0x140A34B94 (sub_140A34B94.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D0114(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v3 = a1 + a2;
  v4 = a1 >> 63;
  if ( (_DWORD)v4 != a2 >> 63 || (_DWORD)v4 == v3 >> 63 )
  {
    result = 0LL;
  }
  else
  {
    result = 3221225621LL;
    v3 = -1LL;
  }
  *a3 = v3;
  return result;
}
