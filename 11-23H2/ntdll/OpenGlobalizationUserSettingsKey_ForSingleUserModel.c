/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012EBF0
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E954 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  WCHAR *Heap; // rsi
  HANDLE v7; // rax
  HANDLE v8; // rax
  HANDLE v10; // [rsp+30h] [rbp-39h] BYREF
  _UNICODE_STRING SourceString; // [rsp+38h] [rbp-31h] BYREF
  _UNICODE_STRING v12; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING v13; // [rsp+58h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE KeyHandlea; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( dword_18018C394 )
  {
    RtlInitUnicodeString(&DestinationString, &word_1801886C0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)NtOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  KeyHandlea = 0LL;
  RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v13;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtOpenKey(&KeyHandlea, DesiredAccess, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&DestinationString, L"RedirectedKey");
    v5 = NtQueryValueKey(KeyHandlea, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v5 != -1073741789 && v5 != -2147483643 )
    {
      *(_QWORD *)&v12.Length = 11141120LL;
      v12.Buffer = &word_1801886C0;
      if ( v13.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&v12, &v13);
        dword_18018C394 = 1;
      }
      v8 = KeyHandlea;
      KeyHandlea = 0LL;
      v4 = 0;
      *KeyHandle = v8;
      goto LABEL_21;
    }
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
    if ( Heap )
    {
      v4 = NtQueryValueKey(
             KeyHandlea,
             &DestinationString,
             KeyValuePartialInformation,
             Heap,
             ResultLength,
             &ResultLength);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)Heap + 1) != 1 )
        {
          v7 = KeyHandlea;
          KeyHandlea = 0LL;
LABEL_15:
          *KeyHandle = v7;
          goto LABEL_16;
        }
        RtlInitUnicodeString(&SourceString, Heap + 6);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &SourceString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = NtOpenKey(&v10, DesiredAccess, &ObjectAttributes);
        if ( v4 >= 0 )
        {
          *(_QWORD *)&v12.Length = 11141120LL;
          v12.Buffer = &word_1801886C0;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&v12, &SourceString);
            dword_18018C394 = 1;
          }
          v7 = v10;
          goto LABEL_15;
        }
      }
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( KeyHandlea )
    NtClose(KeyHandlea);
  return (unsigned int)v4;
}
