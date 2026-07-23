/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x14056C56C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset(a1, 0, 0xE8uLL);
}
