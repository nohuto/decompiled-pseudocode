/*
 * XREFs of sub_1402D1DA4 @ 0x1402D1DA4
 * Callers:
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_140746270 @ 0x140746270 (sub_140746270.c)
 *     sub_1407468A0 @ 0x1407468A0 (sub_1407468A0.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_14094A7D4 @ 0x14094A7D4 (sub_14094A7D4.c)
 *     sub_14094CFE8 @ 0x14094CFE8 (sub_14094CFE8.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 */

char __fastcall sub_1402D1DA4(__int64 a1, __int64 a2)
{
  void *v4; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = (void *)sub_1406BE560(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = v4;
    if ( !v4 )
      return (char)v4;
    memmove(v4, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(v4) = 1;
  return (char)v4;
}
