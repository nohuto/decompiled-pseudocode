/*
 * XREFs of sub_1403FB0C4 @ 0x1403FB0C4
 * Callers:
 *     sub_140864754 @ 0x140864754 (sub_140864754.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403FB0C4(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 8 )
    return 209715713LL;
  *a1 = *a2;
  a1[1] = a2[1];
  return result;
}
