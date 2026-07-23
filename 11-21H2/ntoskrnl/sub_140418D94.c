/*
 * XREFs of sub_140418D94 @ 0x140418D94
 * Callers:
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140418D94(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_BYTE *)(a1 + 141) != 1 || _bittest64((const signed __int64 *)&qword_140D06958, 0x22u) )
    return 0LL;
  return result;
}
