/*
 * XREFs of sub_1403690D0 @ 0x1403690D0
 * Callers:
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 *     sub_140802640 @ 0x140802640 (sub_140802640.c)
 *     sub_14080877C @ 0x14080877C (sub_14080877C.c)
 *     sub_140864980 @ 0x140864980 (sub_140864980.c)
 * Callees:
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 */

__int64 sub_1403690D0()
{
  if ( qword_140C234A0 )
    return sub_14036A2C8(qword_140C234A0);
  else
    return 3221225473LL;
}
