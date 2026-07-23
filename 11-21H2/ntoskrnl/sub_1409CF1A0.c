/*
 * XREFs of sub_1409CF1A0 @ 0x1409CF1A0
 * Callers:
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 *     sub_140203950 @ 0x140203950 (sub_140203950.c)
 *     sub_1403CE4A4 @ 0x1403CE4A4 (sub_1403CE4A4.c)
 *     sub_1405F5B3C @ 0x1405F5B3C (sub_1405F5B3C.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406D7990 @ 0x1406D7990 (sub_1406D7990.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_1407240A0 @ 0x1407240A0 (sub_1407240A0.c)
 *     sub_1407241BC @ 0x1407241BC (sub_1407241BC.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     sub_1407243A0 @ 0x1407243A0 (sub_1407243A0.c)
 *     sub_140753358 @ 0x140753358 (sub_140753358.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 *     sub_140847400 @ 0x140847400 (sub_140847400.c)
 *     sub_140847BB4 @ 0x140847BB4 (sub_140847BB4.c)
 *     sub_1409C6D8C @ 0x1409C6D8C (sub_1409C6D8C.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     sub_1409C7C84 @ 0x1409C7C84 (sub_1409C7C84.c)
 *     sub_1409C7E08 @ 0x1409C7E08 (sub_1409C7E08.c)
 *     sub_1409C820C @ 0x1409C820C (sub_1409C820C.c)
 *     sub_1409C8548 @ 0x1409C8548 (sub_1409C8548.c)
 *     sub_1409C8774 @ 0x1409C8774 (sub_1409C8774.c)
 *     sub_1409C8CBC @ 0x1409C8CBC (sub_1409C8CBC.c)
 *     sub_1409C8EE8 @ 0x1409C8EE8 (sub_1409C8EE8.c)
 *     sub_1409C99C0 @ 0x1409C99C0 (sub_1409C99C0.c)
 *     sub_1409C9C64 @ 0x1409C9C64 (sub_1409C9C64.c)
 *     sub_1409CAC10 @ 0x1409CAC10 (sub_1409CAC10.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1409CB230 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14041D540 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1409C8AC4 @ 0x1409C8AC4 (sub_1409C8AC4.c)
 */

void __fastcall sub_1409CF1A0(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  DestinationString = 0LL;
  v1 = a1;
  if ( byte_140C5B0D8 )
  {
    if ( qword_140D3B098 )
    {
      sub_1409C8AC4(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(qword_140D3B098, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(qword_140D3B098);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    byte_140C5B0D8 = 0;
  }
}
