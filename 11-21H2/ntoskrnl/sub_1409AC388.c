/*
 * XREFs of sub_1409AC388 @ 0x1409AC388
 * Callers:
 *     sub_1409ACBA0 @ 0x1409ACBA0 (sub_1409ACBA0.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14041B920 (ZwSetEvent.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenEvent @ 0x14041BF60 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14041C060 (ZwCreateEvent.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

NTSTATUS __fastcall sub_1409AC388(__int64 a1, unsigned int a2, void *a3)
{
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  __int64 v8; // r9
  int v9; // ebx
  HANDLE v10; // rcx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v17[3]; // [rsp+88h] [rbp-78h] BYREF
  WCHAR SourceString[120]; // [rsp+C0h] [rbp-40h] BYREF

  v14 = a2;
  memset(v17, 0, sizeof(v17));
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  EventHandle = 0LL;
  v5 = PsAttachSiloToCurrentThread(a1);
  sub_1402E0198(SourceString, 120LL, L"\\Sessions\\%d\\BaseNamedObjects\\EventShutdownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
  sub_1402E0198(SourceString, 120LL, L"\\Sessions\\%d\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateEvent(&Handle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v7 = Handle;
  if ( v6 < 0 )
    v7 = 0LL;
  Handle = v7;
  PsDetachSiloFromCurrentThread(v5);
  sub_14030D5C0((ULONG_PTR)a3, 0LL, (__int64)v17, v8);
  v9 = sub_1406F83A0(31, 0LL, 1, &v14);
  sub_1402D0930((__int64)v17, 0LL);
  if ( EventHandle )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
    EventHandle = 0LL;
  }
  v10 = Handle;
  if ( Handle )
  {
    if ( v9 >= 0 )
    {
      ZwWaitForSingleObject(Handle, 0, 0LL);
      v10 = Handle;
    }
    ZwClose(v10);
    Handle = 0LL;
  }
  result = sub_1407D80A4((__int64)a3, 0xC00002EB);
  if ( result >= 0 )
    return KeWaitForSingleObject(a3, Executive, 0, 0, 0LL);
  return result;
}
