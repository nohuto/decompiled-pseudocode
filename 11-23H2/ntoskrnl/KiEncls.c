/*
 * XREFs of KiEncls @ 0x14041FC80
 * Callers:
 *     KeAddEnclavePage @ 0x140570238 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x140570398 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405703E0 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405704A0 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x1405705A0 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x1405705DC (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x1405706A0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x1405706DC (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1409743F4 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1409745AC (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x140974630 (KeInitializeEnclave.c)
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
