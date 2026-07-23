/*
 * XREFs of sub_14051F5B0 @ 0x14051F5B0
 * Callers:
 *     sub_140259C50 @ 0x140259C50 (sub_140259C50.c)
 *     sub_14051FA44 @ 0x14051FA44 (sub_14051FA44.c)
 * Callees:
 *     sub_140508F00 @ 0x140508F00 (sub_140508F00.c)
 */

void __noreturn sub_14051F5B0()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  sub_140508F00();
}
