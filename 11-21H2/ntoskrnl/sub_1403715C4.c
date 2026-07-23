/*
 * XREFs of sub_1403715C4 @ 0x1403715C4
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_1403714E0 @ 0x1403714E0 (sub_1403714E0.c)
 * Callees:
 *     sub_140371654 @ 0x140371654 (sub_140371654.c)
 *     sub_14039FD24 @ 0x14039FD24 (sub_14039FD24.c)
 */

__int64 __fastcall sub_1403715C4(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rsi

  v5 = a2 == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = *((unsigned __int8 *)qword_140016470 + ((unsigned __int64)(unsigned int)(v6 + 15) >> 4));
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) == 0 || (unsigned int)sub_140371654(a1, v6, 1LL) )
    return sub_14039FD24(a1, *(_QWORD *)(a1 + 8 * v9 + 128), a2, a4);
  else
    return -1LL;
}
