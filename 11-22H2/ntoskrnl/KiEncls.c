/*
 * XREFs of KiEncls @ 0x14041F5C0
 * Callers:
 *     KeAddEnclavePage @ 0x1405702D8 (KeAddEnclavePage.c)
 *     KeBlockEnclavePage @ 0x140570438 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x140570480 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x140570540 (KeChangeEnclavePageProtection.c)
 *     KeCreateEnclaveMetadataPage @ 0x140570640 (KeCreateEnclaveMetadataPage.c)
 *     KeOutPageEnclavePage @ 0x14057067C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140570740 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14057077C (KeTrackEnclaveTbFlush.c)
 *     KeCreateEnclave @ 0x1409744A4 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14097465C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1409746E0 (KeInitializeEnclave.c)
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
