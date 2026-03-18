/*
 * XREFs of ZwEnumerateBootEntries @ 0x14041CA00
 * Callers:
 *     DifZwEnumerateBootEntriesWrapper @ 0x1405EFE10 (DifZwEnumerateBootEntriesWrapper.c)
 *     BiEnumerateBootEntries @ 0x140806FE0 (BiEnumerateBootEntries.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F71D8 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5FE34 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwEnumerateBootEntries(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
