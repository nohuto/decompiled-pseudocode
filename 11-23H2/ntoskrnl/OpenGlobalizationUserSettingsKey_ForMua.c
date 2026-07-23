/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140371B9C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x14022A970 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x14041B510 (ZwQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140610230 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407FB010 (RtlConvertSidToUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int v6; // r15d
  void *Pool2; // r14
  __int64 v8; // rcx
  NTSTATUS InformationToken; // ebx
  _DWORD *v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  UnicodeString = 0LL;
  v6 = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = (void *)ExAllocatePool2(256LL, 84LL, 5131347LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  ReturnLength[0] = 0;
  InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Pool2, 0x54u, ReturnLength);
  if ( InformationToken >= 0 )
  {
    v10 = *(_DWORD **)Pool2;
    LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)Pool2 + 1LL);
    if ( (unsigned __int8)v8 < 2u || (_BYTE)v8 == 5 && v10[2] == 21 && v10[6] == 503 )
    {
      *a4 = 0;
LABEL_21:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v8, a3);
      goto LABEL_22;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
    if ( InformationToken >= 0 )
    {
      ReturnLength[0] = 0;
      InformationToken = RtlGetPersistedStateLocation(
                           L"GlobalizationUserSettings",
                           L"TargetNtPath",
                           L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                           LocationTypeRegistry,
                           TargetPath,
                           0x208u,
                           ReturnLength);
      if ( InformationToken >= 0 )
      {
        v11 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
        v12 = (wchar_t *)ExAllocatePool2(256LL, v11, 5131347LL);
        v13 = v12;
        if ( v12 )
        {
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v11;
          Destination.Buffer = v12;
          InformationToken = RtlAppendUnicodeToString(&Destination, TargetPath);
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
              if ( InformationToken >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                *(_QWORD *)ReturnLength = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                {
                  *a4 = 1;
                  v6 = 1;
                }
                else
                {
                  ZwClose(*(HANDLE *)ReturnLength);
                  *a4 = 2;
                  InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                }
              }
            }
          }
          ExFreePoolWithTag(v13, 0x4E4C53u);
        }
        else
        {
          InformationToken = -1073741801;
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  if ( v6 )
    goto LABEL_21;
LABEL_22:
  ExFreePoolWithTag(Pool2, 0x4E4C53u);
  return (unsigned int)InformationToken;
}
