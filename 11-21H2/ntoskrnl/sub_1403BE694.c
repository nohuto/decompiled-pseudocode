/*
 * XREFs of sub_1403BE694 @ 0x1403BE694
 * Callers:
 *     sub_1403BCDA0 @ 0x1403BCDA0 (sub_1403BCDA0.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403BE694(__int64 a1)
{
  int v2; // [rsp+50h] [rbp+20h]

  v2 = 0;
  if ( (int)sub_1403B38C8(a1, 0LL, 2, 16LL, &qword_140CF8800) >= 0 )
    sub_14042A5E0(0LL, 0LL);
  return 0;
}
