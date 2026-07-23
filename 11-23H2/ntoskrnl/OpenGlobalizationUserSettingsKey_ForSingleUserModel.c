/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140610230
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x140371B9C (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ULONG a1, HANDLE *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  __int64 Pool2; // rsi
  HANDLE v6; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE v15; // [rsp+E8h] [rbp+7Fh] BYREF

  ResultLength = a1;
  if ( dword_140D1C188 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, &word_140D19010);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(a2, 8u, &ObjectAttributes);
  }
  KeyHandle = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v9;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v4 != -1073741789 && v4 != -2147483643 )
    {
      *(_QWORD *)&DestinationString.Length = 11141120LL;
      DestinationString.Buffer = &word_140D19010;
      if ( v9.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&DestinationString, &v9);
        dword_140D1C188 = 1;
      }
      v3 = 0;
      *a2 = KeyHandle;
      KeyHandle = 0LL;
      goto LABEL_21;
    }
    Pool2 = ExAllocatePool2(256LL, ResultLength, 5131347LL);
    if ( Pool2 )
    {
      v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, (PVOID)Pool2, ResultLength, &ResultLength);
      if ( v3 >= 0 )
      {
        if ( *(_DWORD *)(Pool2 + 4) != 1 )
        {
          v6 = KeyHandle;
          KeyHandle = 0LL;
LABEL_15:
          *a2 = v6;
          goto LABEL_16;
        }
        v15 = 0LL;
        SourceString = 0LL;
        RtlInitUnicodeString(&SourceString, (PCWSTR)(Pool2 + 12));
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &SourceString;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v3 = ZwOpenKey(&v15, 8u, &ObjectAttributes);
        if ( v3 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 11141120LL;
          DestinationString.Buffer = &word_140D19010;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            dword_140D1C188 = 1;
          }
          v6 = v15;
          goto LABEL_15;
        }
      }
LABEL_16:
      ExFreePoolWithTag((PVOID)Pool2, 0x4E4C53u);
      goto LABEL_21;
    }
    v3 = -1073741801;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
