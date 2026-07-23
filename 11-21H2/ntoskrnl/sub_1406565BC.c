/*
 * XREFs of sub_1406565BC @ 0x1406565BC
 * Callers:
 *     sub_140656270 @ 0x140656270 (sub_140656270.c)
 *     sub_140656340 @ 0x140656340 (sub_140656340.c)
 *     sub_1406563D0 @ 0x1406563D0 (sub_1406563D0.c)
 *     sub_140656430 @ 0x140656430 (sub_140656430.c)
 *     sub_140656584 @ 0x140656584 (sub_140656584.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140656118 @ 0x140656118 (sub_140656118.c)
 */

__int64 __fastcall sub_1406565BC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx

  v3 = *a1;
  v4 = (unsigned __int16)a2;
  sub_140656118(*a1, a2, a3, word_140D03CC8);
  sub_14042A5E0(v3 + 16, 2LL);
  sub_14042A5E0(v3 + 96, v4);
  while ( (sub_14042A5E0(v3 + 40, v5) & 0xD) != 0xC )
    ;
  return sub_14042A5E0(v3 + 96, v5);
}
