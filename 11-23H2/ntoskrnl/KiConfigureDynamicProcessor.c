/*
 * XREFs of KiConfigureDynamicProcessor @ 0x140A9F87C
 * Callers:
 *     KiInitDynamicProcessorIpi @ 0x1405719A0 (KiInitDynamicProcessorIpi.c)
 * Callees:
 *     KiEnableXSave @ 0x140A8C5B0 (KiEnableXSave.c)
 */

void __noreturn KiConfigureDynamicProcessor()
{
  KiEnableXSave(0LL);
}
