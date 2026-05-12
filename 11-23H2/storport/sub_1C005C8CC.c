/*
 * XREFs of sub_1C005C8CC @ 0x1C005C8CC
 * Callers:
 *     sub_1C0035A4C @ 0x1C0035A4C (sub_1C0035A4C.c)
 * Callees:
 *     sub_1C00207BC @ 0x1C00207BC (sub_1C00207BC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1C005C8CC(unsigned int a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  WCHAR SourceString[64]; // [rsp+30h] [rbp-98h] BYREF

  sub_1C00207BC(SourceString, 64LL, L"\\Device\\ScsiPort%d", a1, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  sub_1C00207BC(SourceString, 64LL, L"\\DosDevices\\Scsi%d:", a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
