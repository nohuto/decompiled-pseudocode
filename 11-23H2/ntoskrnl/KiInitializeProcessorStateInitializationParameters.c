/*
 * XREFs of KiInitializeProcessorStateInitializationParameters @ 0x14056BEAC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973808 (KiStartDynamicProcessor.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall KiInitializeProcessorStateInitializationParameters(void *a1)
{
  return memset(a1, 0, 0xE8uLL);
}
