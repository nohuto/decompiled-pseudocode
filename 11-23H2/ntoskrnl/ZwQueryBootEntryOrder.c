/*
 * XREFs of ZwQueryBootEntryOrder @ 0x14041D660
 * Callers:
 *     DifZwQueryBootEntryOrderWrapper @ 0x1405F36B0 (DifZwQueryBootEntryOrderWrapper.c)
 *     BiQueryBootEntryOrder @ 0x140806F2C (BiQueryBootEntryOrder.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1409F71D8 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     SiGetEspFromFirmware @ 0x140A5FE34 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
