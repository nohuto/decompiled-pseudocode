/*
 * XREFs of HalpInterruptRebootService @ 0x14051C7C0
 * Callers:
 *     HalpPreprocessNmi @ 0x140367710 (HalpPreprocessNmi.c)
 *     HalpNmiReboot @ 0x14051C2A0 (HalpNmiReboot.c)
 * Callees:
 *     HalpInterruptResetThisProcessor @ 0x140505390 (HalpInterruptResetThisProcessor.c)
 */

void __noreturn HalpInterruptRebootService()
{
  if ( __readmsr(0xC0000101) < 0xFFFF800000000000uLL )
    __writemsr(0xC0000101, __readmsr(0xC0000102));
  HalpInterruptResetThisProcessor();
}
