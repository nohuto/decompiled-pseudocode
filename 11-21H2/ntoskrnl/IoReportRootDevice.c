/*
 * XREFs of IoReportRootDevice @ 0x14081F220
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DCF44 @ 0x1402DCF44 (sub_1402DCF44.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140768024 @ 0x140768024 (sub_140768024.c)
 *     sub_140768AF8 @ 0x140768AF8 (sub_140768AF8.c)
 *     sub_14076FE20 @ 0x14076FE20 (sub_14076FE20.c)
 *     sub_14077198C @ 0x14077198C (sub_14077198C.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14081F468 @ 0x14081F468 (sub_14081F468.c)
 *     sub_140A236A4 @ 0x140A236A4 (sub_140A236A4.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rcx
  __int16 v7; // di
  int v8; // eax
  char v9; // r14
  HANDLE v10; // rdi
  HANDLE v11; // r8
  wchar_t *Buffer; // [rsp+30h] [rbp-D8h]
  unsigned int v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _WORD *v19; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v22; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  SourceString.Buffer = v21;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&SourceString.Length = 26214400LL;
  LODWORD(v16) = 0;
  LOWORD(v14) = 0;
  Handle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v22;
  P = 0LL;
  result = sub_14081F468(&DriverExtension->ServiceKeyName, &SourceString);
  if ( result < 0 )
    return result;
  if ( SourceString.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  appended = sub_140779DC4((__int64 **)&P);
  if ( appended >= 0 )
  {
    sub_14077572C(1);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
    appended = RtlAppendUnicodeToString(&SourceString, asc_140865B20);
    if ( appended >= 0 )
    {
      v19 = &v21[(unsigned __int64)SourceString.Length >> 1];
      sub_1402DFBC4(v19, (400 - (unsigned __int64)SourceString.Length) >> 1, &v19, 0LL, 0, L"%04u", 0LL);
      v6 = &v19[-((unsigned __int64)SourceString.Length >> 1)] - v21;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - SourceString.Length;
      else
        v7 = 2 * v6;
      SourceString.Length += v7;
      v8 = sub_140768AF8(*(__int64 *)&qword_140D00AC0, (__int64)SourceString.Buffer, 983103, &Handle, &v14, 0);
      v9 = v14;
      appended = v8;
      if ( v8 >= 0 )
      {
        if ( !(_BYTE)v14 )
          goto LABEL_9;
        v10 = Handle;
        v11 = Handle;
        v13 = DestinationString.Length + 4;
        Buffer = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v13 >> 1) - 2] = 0;
        appended = sub_14076FE20(
                     *(__int64 *)&qword_140D00AC0,
                     (__int64)SourceString.Buffer,
                     (__int64)v11,
                     2u,
                     7u,
                     (__int64)Buffer,
                     v13,
                     0);
        if ( appended >= 0 )
        {
          LODWORD(v16) = 32;
          appended = sub_14076FE20(
                       *(__int64 *)&qword_140D00AC0,
                       (__int64)SourceString.Buffer,
                       (__int64)v10,
                       0xBu,
                       4u,
                       (__int64)&v16,
                       4u,
                       0);
          if ( appended >= 0 )
          {
            BYTE1(v14) = -1;
            appended = sub_14077198C(
                         *(__int64 *)&qword_140D00AC0,
                         (__int64)SourceString.Buffer,
                         1,
                         (__int64)v10,
                         0LL,
                         (__int64)&qword_14000EC40,
                         17,
                         (__int64)&v14 + 1,
                         1u,
                         0);
            if ( appended >= 0 )
            {
              appended = sub_14076FE20(
                           *(__int64 *)&qword_140D00AC0,
                           (__int64)SourceString.Buffer,
                           (__int64)v10,
                           5u,
                           1u,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                sub_1402DCF44(*((PVOID *)qword_140C46278 + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_9;
              }
            }
          }
        }
      }
      if ( v9 )
      {
        sub_140A236A4(qword_140D00AC0);
        sub_140768024((__int64)&SourceString);
      }
    }
  }
LABEL_9:
  ExReleaseResourceLite(&stru_140C462A0);
  sub_1402F9540((__int64)KeGetCurrentThread());
  sub_140775698(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    sub_140779A50((PVOID **)P);
  return appended;
}
