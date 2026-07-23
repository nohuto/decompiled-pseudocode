/*
 * XREFs of sub_1403DD284 @ 0x1403DD284
 * Callers:
 *     sub_1403BD0FC @ 0x1403BD0FC (sub_1403BD0FC.c)
 *     sub_1403DD1E4 @ 0x1403DD1E4 (sub_1403DD1E4.c)
 * Callees:
 *     sub_1403B38C8 @ 0x1403B38C8 (sub_1403B38C8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_1403DD284(__int64 a1, __int64 a2)
{
  if ( qword_140C4A010 || (int)sub_1403B38C8(a1, 0LL, 2, 16LL, &qword_140C4A010) >= 0 && qword_140C4A010 )
    return sub_14042A5E0(a1, a2);
  else
    return 0;
}
