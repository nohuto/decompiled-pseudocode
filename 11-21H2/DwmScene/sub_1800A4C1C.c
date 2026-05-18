/*
 * XREFs of sub_1800A4C1C @ 0x1800A4C1C
 * Callers:
 *     sub_1800A4984 @ 0x1800A4984 (sub_1800A4984.c)
 *     sub_1800A4EEC @ 0x1800A4EEC (sub_1800A4EEC.c)
 *     sub_1800A4FA4 @ 0x1800A4FA4 (sub_1800A4FA4.c)
 *     sub_1800A5104 @ 0x1800A5104 (sub_1800A5104.c)
 *     sub_1800A5190 @ 0x1800A5190 (sub_1800A5190.c)
 *     sub_1800A5308 @ 0x1800A5308 (sub_1800A5308.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_1800A4C1C(void *Src, __int64 a2, __int64 a3)
{
  return memmove((void *)(a3 - (a2 - (_QWORD)Src)), Src, a2 - (_QWORD)Src);
}
