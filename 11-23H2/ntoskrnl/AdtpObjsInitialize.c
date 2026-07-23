/*
 * XREFs of AdtpObjsInitialize @ 0x1408423C8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140841F54 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     NtEnumerateKey @ 0x1406DBE40 (NtEnumerateKey.c)
 *     NtClose @ 0x1406E44F0 (NtClose.c)
 *     NtEnumerateValueKey @ 0x14070E540 (NtEnumerateValueKey.c)
 *     NtOpenKey @ 0x1407AC640 (NtOpenKey.c)
 *     RtlIntegerToUnicodeString @ 0x1407CF3D0 (RtlIntegerToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS AdtpObjsInitialize()
{
  int v0; // edi
  HANDLE v1; // r15
  __int64 v2; // rbx
  unsigned int v3; // esi
  char *v4; // r14
  NTSTATUS result; // eax
  unsigned int v6; // esi
  char *v7; // r14
  NTSTATUS v8; // eax
  NTSTATUS v9; // esi
  ULONG v10; // r13d
  HANDLE v11; // r12
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rax
  HANDLE v18; // rbx
  bool v19; // al
  ULONG v20; // r12d
  NTSTATUS v21; // r14d
  _WORD *v22; // rax
  _WORD *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rcx
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  HANDLE Handle; // [rsp+30h] [rbp-49h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-41h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  bool v34; // [rsp+E0h] [rbp+67h]
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  HANDLE v36; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0;
  v34 = 1;
  KeyHandle = 0LL;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v1 = 0LL;
  v36 = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  v30 = 0LL;
  SourceString = 0LL;
  AdtpSourceModules = 0LL;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v2) = 0;
  v3 = 0;
  v4 = (char *)&unk_140C0E7E2;
  while ( 1 )
  {
    *(_DWORD *)(v4 - 2) = 1572864;
    *(_QWORD *)(v4 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v2;
    result = RtlIntegerToUnicodeString(v3 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v3);
    if ( result < 0 )
      return result;
    v2 = (unsigned int)(v2 + 12);
    ++v3;
    v4 += 16;
    if ( v3 > 6 )
    {
      v6 = 0;
      v7 = (char *)&unk_140C0E6E2;
      while ( 1 )
      {
        *(_QWORD *)(v7 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v2;
        *(_DWORD *)(v7 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v6 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v6);
        if ( result < 0 )
          return result;
        v2 = (unsigned int)(v2 + 12);
        ++v6;
        v7 += 16;
        if ( v6 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          v9 = v8;
          if ( v8 == -1073741772 )
            return 0;
          v10 = 0;
          if ( v8 < 0 )
          {
LABEL_35:
            NtClose(KeyHandle);
            if ( v9 != -2147483622 )
              return v9;
            return v0;
          }
          else
          {
            while ( 1 )
            {
              v11 = KeyHandle;
              v9 = NtEnumerateKey(KeyHandle, v10, KeyBasicInformation, 0LL, 0, &ResultLength);
              if ( v9 != -1073741789 )
                goto LABEL_40;
              Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, ResultLength, 1799447891LL);
              v13 = Pool2;
              if ( !Pool2 )
                return -1073741801;
              v9 = NtEnumerateKey(v11, v10, KeyBasicInformation, Pool2, ResultLength, &ResultLength);
              if ( v9 < 0 )
              {
LABEL_40:
                v19 = v34;
LABEL_16:
                v20 = 0;
                goto LABEL_17;
              }
              v14 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
              v30 = v14;
              v15 = v14;
              if ( !v14 )
                return -1073741801;
              *v14 = AdtpSourceModules;
              AdtpSourceModules = (__int64)v14;
              v14[3] = 0LL;
              v16 = v13[6];
              *((_WORD *)v15 + 4) = v16;
              v16 += 2;
              *((_WORD *)v15 + 5) = v16;
              v17 = ExAllocatePool2(256LL, v16, 1799447891LL);
              v15[2] = v17;
              if ( !v17 )
                return -1073741801;
              SourceString.Length = v13[6];
              SourceString.MaximumLength = SourceString.Length;
              SourceString.Buffer = v13 + 8;
              RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 1), &SourceString);
              ExFreePoolWithTag(v13, 0);
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = v11;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)(v15 + 1);
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              result = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
              if ( result < 0 )
                return result;
              RtlInitUnicodeString(&SourceString, L"ObjectNames");
              v18 = Handle;
              ObjectAttributes.ObjectName = &SourceString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = Handle;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              v9 = NtOpenKey(&v36, 0x20019u, &ObjectAttributes);
              NtClose(v18);
              v1 = v36;
              v19 = 1;
              v34 = 1;
              if ( v9 != -1073741772 )
                goto LABEL_16;
              v19 = 0;
              v9 = 0;
              v34 = 0;
              v20 = 0;
              do
              {
                if ( !v19 )
                  break;
                v21 = NtEnumerateValueKey(v1, v20, KeyValueFullInformation, 0LL, 0, &ResultLength);
                if ( v21 == -1073741789 )
                {
                  v22 = (_WORD *)ExAllocatePool2(256LL, ResultLength, 1799447891LL);
                  v23 = v22;
                  if ( !v22 )
                    return -1073741801;
                  v21 = NtEnumerateValueKey(v1, v20, KeyValueFullInformation, v22, ResultLength, &ResultLength);
                  if ( v21 >= 0 )
                  {
                    v24 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1799447891LL);
                    v25 = v24;
                    if ( !v24 )
                      return -1073741801;
                    v26 = v30;
                    *v24 = v30[3];
                    v26[3] = v24;
                    v27 = v23[8];
                    *((_WORD *)v25 + 4) = v27;
                    v27 += 2;
                    *((_WORD *)v25 + 5) = v27;
                    v28 = ExAllocatePool2(256LL, v27, 1799447891LL);
                    v25[2] = v28;
                    if ( !v28 )
                      return -1073741801;
                    SourceString.Length = v23[8];
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = v23 + 10;
                    RtlCopyUnicodeString((PUNICODE_STRING)(v25 + 1), &SourceString);
                    if ( *((_DWORD *)v23 + 3) < 4u )
                      *((_DWORD *)v25 + 6) = 1552;
                    else
                      *((_DWORD *)v25 + 6) = *(_DWORD *)((char *)v23 + *((unsigned int *)v23 + 2));
                  }
                  ExFreePoolWithTag(v23, 0);
                }
                v9 = 0;
                if ( v21 != -2147483622 )
                  v9 = v21;
                ++v20;
                v19 = v21 != -2147483622;
                v34 = v21 != -2147483622;
LABEL_17:
                ;
              }
              while ( v9 >= 0 );
              if ( v9 || v19 || !v1 )
              {
                ++v10;
                if ( v9 < 0 )
                  goto LABEL_35;
              }
              else
              {
                NtClose(v1);
                ++v10;
                v36 = 0LL;
                v1 = 0LL;
              }
            }
          }
        }
      }
    }
  }
}
