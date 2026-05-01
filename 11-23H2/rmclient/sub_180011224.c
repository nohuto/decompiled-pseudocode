/*
 * XREFs of sub_180011224 @ 0x180011224
 * Callers:
 *     sub_18000CDF4 @ 0x18000CDF4 (sub_18000CDF4.c)
 * Callees:
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 */

void __fastcall sub_180011224(__int64 a1)
{
  if ( a1 )
  {
    if ( *((_QWORD *)&xmmword_180032A48 + 1) )
      sub_180011190(*((_QWORD *)&xmmword_180032A48 + 1) + 200LL, *((RTL_SRWLOCK **)&xmmword_180032A48 + 1), a1);
  }
}
