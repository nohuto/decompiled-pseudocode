/*
 * XREFs of HalReportResourceUsage @ 0x140AFC970
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140A56C48 @ 0x140A56C48 (sub_140A56C48.c)
 *     sub_140AF77F8 @ 0x140AF77F8 (sub_140AF77F8.c)
 */

void __fastcall HalReportResourceUsage(int a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  switch ( a1 )
  {
    case -1:
      v1 = 24;
      v2 = 23;
      goto LABEL_6;
    case 0:
      sub_140A56C48(0x1Bu, 28);
      RtlInitUnicodeString(&DestinationString, L"ACPI x64 platform");
      sub_140AF77F8(&DestinationString);
      return;
    case 1:
      v1 = 30;
      v2 = 29;
LABEL_6:
      sub_140A56C48(v2, v1);
      break;
  }
}
