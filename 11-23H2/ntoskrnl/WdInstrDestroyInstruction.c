/*
 * XREFs of WdInstrDestroyInstruction @ 0x14052A9FC
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14051F304 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x14052A8D4 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
