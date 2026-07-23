/*
 * XREFs of HalpStartPccCommand @ 0x140935E3C
 * Callers:
 *     HalpSendPccCommand @ 0x140935DD0 (HalpSendPccCommand.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpUpdateCoolingPacket @ 0x140527D10 (HalpUpdateCoolingPacket.c)
 *     HalpAcquirePccInterface @ 0x140935A54 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v2) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v2);
  }
  if ( qword_140C600A0 )
    return (*((__int64 (__fastcall **)(_QWORD))&xmmword_140C60070 + 1))(*((_QWORD *)&xmmword_140C60050 + 1));
  return 3221225488LL;
}
