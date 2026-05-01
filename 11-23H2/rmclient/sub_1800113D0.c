/*
 * XREFs of sub_1800113D0 @ 0x1800113D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 */

void __fastcall sub_1800113D0(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  void *v2; // rcx

  if ( (a1 & 0x80000000) != 0 )
  {
    if ( !byte_180032A38 )
      return;
    v1 = a1 & 0xFFFFFFFF7FFFFFFFuLL;
    v2 = &unk_180032AD0;
  }
  else
  {
    if ( !byte_180032A38 )
      return;
    v1 = a1;
    v2 = &unk_180032A80;
  }
  sub_180011190((__int64)v2, (RTL_SRWLOCK *)&xmmword_180032A58, v1);
}
