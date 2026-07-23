/*
 * XREFs of sub_1403725F4 @ 0x1403725F4
 * Callers:
 *     sub_1403725A0 @ 0x1403725A0 (sub_1403725A0.c)
 *     sub_1407F40A8 @ 0x1407F40A8 (sub_1407F40A8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403725F4(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x10u && a2 < LOBYTE(qword_140003350[3 * a1]);
}
