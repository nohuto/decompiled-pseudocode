/*
 * XREFs of sub_1407D80A4 @ 0x1407D80A4
 * Callers:
 *     sub_140580D80 @ 0x140580D80 (sub_140580D80.c)
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_1406B4E90 @ 0x1406B4E90 (sub_1406B4E90.c)
 *     sub_1406C2560 @ 0x1406C2560 (sub_1406C2560.c)
 *     sub_1406F80E4 @ 0x1406F80E4 (sub_1406F80E4.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_1409276D0 @ 0x1409276D0 (sub_1409276D0.c)
 *     sub_140967E00 @ 0x140967E00 (sub_140967E00.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 *     sub_1409BA44C @ 0x1409BA44C (sub_1409BA44C.c)
 *     sub_140A08E84 @ 0x140A08E84 (sub_140A08E84.c)
 *     sub_140A70F90 @ 0x140A70F90 (sub_140A70F90.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 */

__int64 __fastcall sub_1407D80A4(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = sub_1407D7E94(a1, (__int64)CurrentThread, a2, 1);
  sub_1402AC800((__int64)CurrentThread);
  return v3;
}
