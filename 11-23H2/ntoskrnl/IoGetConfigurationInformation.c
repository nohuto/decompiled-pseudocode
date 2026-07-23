/*
 * XREFs of IoGetConfigurationInformation @ 0x140875A60
 * Callers:
 *     DifIoGetConfigurationInformationWrapper @ 0x1405DFA60 (DifIoGetConfigurationInformationWrapper.c)
 *     IopCreateArcNamesDisk @ 0x140B39A64 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140B39BCC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B93A0C (IopGetBootDiskInformation.c)
 *     VhdiInitializeBootDisk @ 0x140B9AD30 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B9B180 (CimfsInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

PCONFIGURATION_INFORMATION IoGetConfigurationInformation(void)
{
  return (PCONFIGURATION_INFORMATION)&dword_140D53888;
}
