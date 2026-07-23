/*
 * XREFs of sub_140A82240 @ 0x140A82240
 * Callers:
 *     sub_140A9CAB4 @ 0x140A9CAB4 (sub_140A9CAB4.c)
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 */

void sub_140A82240()
{
  if ( qword_140C1AD08 )
  {
    MmUnlockPagableImageSection(qword_140C1AD08);
    qword_140C1AD08 = 0LL;
  }
  if ( qword_140C1AD00 )
  {
    MmUnlockPagableImageSection(qword_140C1AD00);
    qword_140C1AD00 = 0LL;
  }
  xmmword_140C1B2B0 = 0LL;
  *(_OWORD *)&xmmword_140C1B1F0 = 0LL;
}
