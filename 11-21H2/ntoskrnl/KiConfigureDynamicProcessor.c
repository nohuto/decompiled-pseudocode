/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140A699D0
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x14056EB90 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140A5433C (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
