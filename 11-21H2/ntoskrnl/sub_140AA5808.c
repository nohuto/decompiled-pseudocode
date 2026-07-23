/*
 * XREFs of sub_140AA5808 @ 0x140AA5808
 * Callers:
 *     sub_140AA4440 @ 0x140AA4440 (sub_140AA4440.c)
 *     sub_140AA4470 @ 0x140AA4470 (sub_140AA4470.c)
 * Callees:
 *     sub_1405FE008 @ 0x1405FE008 (sub_1405FE008.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

void __fastcall sub_140AA5808(__int64 a1, __int64 a2, char a3)
{
  if ( (qword_140D01450 & 0x400000) != 0 || !sub_1405FE008() )
  {
    if ( a3 )
      sub_140A8C924(0xC4u, 0x8BuLL, 0LL, 0LL, 0LL);
  }
}
