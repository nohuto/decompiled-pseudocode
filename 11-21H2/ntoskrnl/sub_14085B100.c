/*
 * XREFs of sub_14085B100 @ 0x14085B100
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x14074ED50 (IoCreateDevice.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 *     ObCreateObjectTypeEx @ 0x140824B30 (ObCreateObjectTypeEx.c)
 *     sub_1408258B8 @ 0x1408258B8 (sub_1408258B8.c)
 *     sub_14085B2C4 @ 0x14085B2C4 (sub_14085B2C4.c)
 */

__int64 __fastcall sub_14085B100(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-39h] BYREF
  __int128 v9[8]; // [rsp+60h] [rbp-29h] BYREF

  DestinationString = 0LL;
  SourceString = 0LL;
  sub_1406D2264((char *)&dword_140C038A0, 0LL, 0LL);
  sub_140781F40(-2147483646, L"Session Manager\\Configuration Manager", (__int64)&unk_140C02F40, 0LL);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\VRegDriver");
  v2 = IoCreateDevice(DriverObject, 0, &DestinationString, 0x22u, 0x100u, 0, &qword_140D00A20);
  if ( v2 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v2, 1uLL, 0LL);
  qword_140C48D20 = 0LL;
  qword_140C54CE0 = (__int64)DriverObject;
  v3 = ObSetSecurityObjectByPointer((__int64)qword_140D00A20);
  if ( v3 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v3, 2uLL, 0LL);
  qword_140D00A20->Flags &= ~0x80u;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)sub_140926260;
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)sub_1406E3680;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)sub_1406E3680;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)sub_140692780;
  RtlInitUnicodeString(&SourceString, L"VRegConfigurationContext");
  memset(v9, 0, 0x78uLL);
  BYTE2(v9[0]) |= 4u;
  LOWORD(v9[0]) = 120;
  *(_QWORD *)&v9[1] = 0x2000000020000LL;
  *((_QWORD *)&v9[0] + 1) = 0x2000000000100LL;
  *((_QWORD *)&v9[1] + 1) = 0xF0000000F0000LL;
  *((_QWORD *)&v9[4] + 1) = sub_1407F8750;
  *(_QWORD *)((char *)&v9[2] + 4) = 0x6000000001LL;
  v4 = ObCreateObjectTypeEx(&SourceString, v9, 0LL, 0LL, &qword_140D00A18);
  if ( v4 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v4, 4uLL, 0LL);
  v5 = sub_14085B2C4();
  if ( v5 < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, v5, 5uLL, 0LL);
  result = sub_1408258B8((ULONG *)&dword_140C48D10);
  if ( (int)result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, (int)result, 6uLL, 0LL);
  return result;
}
