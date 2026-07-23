/*
 * XREFs of sub_1406D5860 @ 0x1406D5860
 * Callers:
 *     sub_1406D5424 @ 0x1406D5424 (sub_1406D5424.c)
 *     sub_1406D56D0 @ 0x1406D56D0 (sub_1406D56D0.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403D6930 @ 0x1403D6930 (sub_1403D6930.c)
 *     ZwLoadDriver @ 0x14041D8C0 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x14041F1A0 (ZwUnloadDriver.c)
 *     sub_14081AA90 @ 0x14081AA90 (sub_14081AA90.c)
 *     sub_14085D06C @ 0x14085D06C (sub_14085D06C.c)
 */

__int64 __fastcall sub_1406D5860(_DWORD *a1, _DWORD *a2, int a3, _QWORD *a4, unsigned int a5)
{
  int v5; // edi
  int v6; // ebx
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  DestinationString = 0LL;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_140D01194 )
      {
        sub_14081AA90(*a4, a5);
        sub_14085D06C(0LL);
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140D01194 = 0;
      }
    }
    return 0;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    return 0;
  if ( !(unsigned int)sub_1403D6930() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v8 = ZwLoadDriver(&DestinationString);
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_140D01194 = 1;
    v5 = 1;
  }
  v6 = sub_14085D06C(1LL);
  if ( v6 >= 0 )
    return 0;
  if ( v5 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140D01194 = 0;
  }
  return (unsigned int)v6;
}
