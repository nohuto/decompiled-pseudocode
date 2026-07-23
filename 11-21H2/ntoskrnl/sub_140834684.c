/*
 * XREFs of sub_140834684 @ 0x140834684
 * Callers:
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     PsWow64IsMachineSupported @ 0x1406AD5D0 (PsWow64IsMachineSupported.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     sub_140834B5C @ 0x140834B5C (sub_140834B5C.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void sub_140834684()
{
  wchar_t **v0; // rdi
  ULONG v1; // edx
  void *v2; // rsi
  __int16 v3; // cx
  const WCHAR *v4; // rdx
  NTSTATUS Key; // ebx
  UNICODE_STRING *v6; // rax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // ebx
  __int64 HostSilo; // rax
  PVOID *v10; // rax
  ULONG v11; // edx
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Data_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _STRING SourceString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v20[256]; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  DestinationString = 0LL;
  LODWORD(v16) = 0;
  Data_8 = 0LL;
  Data = 0;
  v0 = &off_140C06410;
  v2 = (void *)sub_140834D0C();
  if ( off_140C06410 )
  {
    do
    {
      v3 = *((_WORD *)v0 + 8);
      if ( v3 == -31132 || (unsigned int)PsWow64IsMachineSupported(v3) )
      {
        RtlInitUnicodeString(&DestinationString, *v0);
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        ObjectAttributes.ObjectName = 0LL;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        if ( ZwCreateKey(
               &KeyHandle,
               4u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&Class,
               0,
               0LL) < 0 )
          goto LABEL_24;
        v4 = v0[1];
        if ( v4 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          ObjectAttributes.ObjectName = (PUNICODE_STRING)KeyHandle;
          LODWORD(ObjectAttributes.RootDirectory) = 48;
          LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
          *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
          ObjectAttributes.SecurityQualityOfService = v2;
          v16 = 0LL;
          Key = ZwCreateKey(
                  (PHANDLE)&ObjectAttributes,
                  2u,
                  (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
                  0,
                  (PUNICODE_STRING)&Class,
                  0,
                  0LL);
          ZwClose(KeyHandle);
          if ( Key < 0 )
            goto LABEL_24;
          v6 = *(UNICODE_STRING **)&ObjectAttributes.Length;
          KeyHandle = *(HANDLE *)&ObjectAttributes.Length;
        }
        else
        {
          v6 = (UNICODE_STRING *)KeyHandle;
        }
        ObjectAttributes.ObjectName = v6;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &qword_140A38CC0;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        v7 = ZwCreateKey(
               (PHANDLE)&ObjectAttributes,
               2u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&Class,
               0,
               0LL);
        ZwClose(KeyHandle);
        if ( v7 < 0 )
          goto LABEL_24;
        ObjectAttributes.ObjectName = *(PUNICODE_STRING *)&ObjectAttributes.Length;
        *(_QWORD *)&ObjectAttributes.Attributes = &stru_140A384B8;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        ObjectAttributes.SecurityQualityOfService = v2;
        v16 = 0LL;
        v8 = ZwCreateKey(
               &KeyHandle,
               3u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&Class,
               0,
               0LL);
        ZwClose(*(HANDLE *)&ObjectAttributes.Length);
        if ( v8 < 0 )
          goto LABEL_24;
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&stru_140A384B8,
          0,
          1u,
          stru_140C4E590.Buffer,
          stru_140C4E590.Length + 2);
        Data = 10;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38CE0, 0, 4u, &Data, 4u);
        Data = 0;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38CD0, 0, 4u, &Data, 4u);
        Data = 0;
        if ( qword_140C48E70 && *(_DWORD *)(qword_140C48E70 + 8) )
          sub_140834B5C(KeyHandle);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&Data_8.Length = 0x1000000;
        Data_8.Buffer = (wchar_t *)v20;
        if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A38CF0, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
          if ( stru_140C4E570.Length )
          {
            ZwSetValueKey(
              KeyHandle,
              (PUNICODE_STRING)&stru_140A384D8,
              0,
              1u,
              stru_140C4E570.Buffer,
              stru_140C4E570.Length + 2);
            if ( stru_140C4E570.Buffer )
              ExFreePoolWithTag(stru_140C4E570.Buffer, v11);
            RtlInitUnicodeString(&stru_140C4E570, 0LL);
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A384D8);
          }
        }
        if ( dword_140C4E50C )
        {
          sprintf_s(DstBuf, 0x80uLL, "%u", dword_140C4E50C);
          RtlInitAnsiString(&SourceString, DstBuf);
          *(_DWORD *)&Data_8.Length = 0x1000000;
          Data_8.Buffer = (wchar_t *)v20;
          if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A384C8, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_140A384C8);
        }
        HostSilo = PsGetHostSilo();
        v10 = (PVOID *)sub_140204738(HostSilo);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&stru_140A38D00,
          0,
          1u,
          v10[159],
          *((unsigned __int16 *)v10 + 632) + 2);
        ZwClose(KeyHandle);
      }
      v0 += 3;
    }
    while ( *v0 );
  }
  if ( stru_140C4E570.Buffer )
    ExFreePoolWithTag(stru_140C4E570.Buffer, v1);
  RtlInitUnicodeString(&stru_140C4E570, 0LL);
LABEL_24:
  ExFreePoolWithTag(v2, 0);
}
