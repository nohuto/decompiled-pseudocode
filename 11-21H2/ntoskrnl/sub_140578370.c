/*
 * XREFs of sub_140578370 @ 0x140578370
 * Callers:
 *     sub_140577F94 @ 0x140577F94 (sub_140577F94.c)
 *     sub_140578074 @ 0x140578074 (sub_140578074.c)
 *     sub_140578174 @ 0x140578174 (sub_140578174.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140578370(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_WORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  return result;
}
