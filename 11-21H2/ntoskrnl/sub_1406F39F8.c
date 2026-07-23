/*
 * XREFs of sub_1406F39F8 @ 0x1406F39F8
 * Callers:
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 * Callees:
 *     sub_14026D048 @ 0x14026D048 (sub_14026D048.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_1406F8D30 @ 0x1406F8D30 (sub_1406F8D30.c)
 */

void __fastcall sub_1406F39F8(ULONG_PTR *a1)
{
  __int64 v2; // rcx

  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    sub_1406F8D30(*((_QWORD *)KeGetCurrentThread() + 23));
    sub_1402D0930((__int64)(a1 + 4), 0LL);
  }
  else
  {
    sub_14026D048(*a1, 1);
  }
  v2 = a1[1];
  if ( v2 )
    sub_14058C0E4(v2);
}
