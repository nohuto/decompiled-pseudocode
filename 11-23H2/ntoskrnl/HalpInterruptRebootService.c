/*
 * XREFs of HalpInterruptRebootService @ 0x14051C270
 * Callers:
 *     HalpPreprocessNmi @ 0x140367570 (HalpPreprocessNmi.c)
 *     HalpNmiReboot @ 0x14051BD50 (HalpNmiReboot.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x140504E40 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
