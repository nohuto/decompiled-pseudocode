/*
 * XREFs of sub_140559124 @ 0x140559124
 * Callers:
 *     sub_140558D40 @ 0x140558D40 (sub_140558D40.c)
 * Callees:
 *     sub_1402A34C8 @ 0x1402A34C8 (sub_1402A34C8.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_1407E65A0 @ 0x1407E65A0 (sub_1407E65A0.c)
 */

__int64 __fastcall sub_140559124(__int64 a1, __int64 a2)
{
  if ( (unsigned int)sub_1402A34C8(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = off_140C06A80;
  sub_1402A7370(a1, a2, 0LL, 0LL, 0, 0);
  return sub_1407E65A0(a1, 0LL);
}
