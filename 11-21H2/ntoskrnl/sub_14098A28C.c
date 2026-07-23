/*
 * XREFs of sub_14098A28C @ 0x14098A28C
 * Callers:
 *     sub_14098A510 @ 0x14098A510 (sub_14098A510.c)
 *     sub_14098AAF0 @ 0x14098AAF0 (sub_14098AAF0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1405CC1E0 @ 0x1405CC1E0 (sub_1405CC1E0.c)
 */

void __fastcall sub_14098A28C(int *a1, char a2)
{
  byte_140D06A4D = a2;
  qword_140D068A8 = (__int64)a1;
  sub_1402935D0((ULONG_PTR)&qword_140C23010);
  sub_1405CC1E0(*a1);
}
