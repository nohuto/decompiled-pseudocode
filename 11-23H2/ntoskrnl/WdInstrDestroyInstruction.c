/*
 * XREFs of WdInstrDestroyInstruction @ 0x14052A4AC
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14051EDB4 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x14052A384 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
