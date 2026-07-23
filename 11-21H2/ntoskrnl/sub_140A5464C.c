/*
 * XREFs of sub_140A5464C @ 0x140A5464C
 * Callers:
 *     sub_1408087A4 @ 0x1408087A4 (sub_1408087A4.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403B7244 @ 0x1403B7244 (sub_1403B7244.c)
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     sub_1406D2264 @ 0x1406D2264 (sub_1406D2264.c)
 *     sub_140A5496C @ 0x140A5496C (sub_140A5496C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void sub_140A5464C()
{
  REGHANDLE v0; // rdi
  REGHANDLE RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Data[5]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF

  DestinationString = 0LL;
  v0 = 0LL;
  RegHandle = 0LL;
  memset(Data, 0, sizeof(Data));
  sub_1406D2264((char *)&dword_140C045E0, 0LL, 0LL);
  if ( !ExIsSoftBoot() )
  {
    if ( sub_1403B7244((const GUID *)&qword_1400128A0, 1, &RegHandle) >= 0 )
      sub_14042A5E0(34LL, 0LL);
    v0 = RegHandle;
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  sub_140A5496C(Data);
  if ( v0 )
    EtwUnregister(v0);
}
