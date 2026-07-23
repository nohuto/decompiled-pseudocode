/*
 * XREFs of KiEncls @ 0x140420010
 * Callers:
 *     KeAddEnclavePage @ 0x140570778 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x1405708D8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x140570920 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405709E0 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x140570AE0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x140570B1C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140570BE0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x140570C1C (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1409745F4 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1409747AC (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140974830 (KeInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
