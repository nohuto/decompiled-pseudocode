/*
 * XREFs of HalRegisterDynamicProcessor @ 0x140506E40
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 * Callees:
 *     HalpInterruptRegisterDynamicProcessor @ 0x14050522C (HalpInterruptRegisterDynamicProcessor.c)
 */

__int64 HalRegisterDynamicProcessor()
{
  return HalpInterruptRegisterDynamicProcessor();
}
