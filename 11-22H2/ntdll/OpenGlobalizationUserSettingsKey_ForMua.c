/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x18000B6A0 (RtlGetPersistedStateLocation.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012D6D0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        HANDLE *a3,
        _DWORD *a4)
{
  int v7; // r15d
  __int64 *Heap; // r14
  NTSTATUS PersistedStateLocation; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = 0;
  Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x54uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  PersistedStateLocation = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Heap, 0x54u, &ReturnLength);
  if ( PersistedStateLocation >= 0 )
  {
    v10 = *Heap;
    if ( *(_BYTE *)(*Heap + 1) < 2u
      || *(_BYTE *)(v10 + 1) == 5 && *(_DWORD *)(v10 + 8) == 21 && *(_DWORD *)(v10 + 24) == 503 )
    {
      *a4 = 0;
LABEL_21:
      PersistedStateLocation = OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, a3);
      goto LABEL_22;
    }
    PersistedStateLocation = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v10, 1u);
    if ( PersistedStateLocation >= 0 )
    {
      ReturnLength = 0;
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"GlobalizationUserSettings",
                                 L"TargetNtPath",
                                 L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                                 LocationTypeRegistry,
                                 TargetPath,
                                 0x208u,
                                 &ReturnLength);
      if ( PersistedStateLocation >= 0 )
      {
        v11 = ReturnLength + UnicodeString.Length + 4;
        v12 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
        v13 = v12;
        if ( v12 )
        {
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v11;
          Destination.Buffer = v12;
          PersistedStateLocation = RtlAppendUnicodeToString(&Destination, TargetPath);
          if ( PersistedStateLocation >= 0 )
          {
            PersistedStateLocation = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( PersistedStateLocation >= 0 )
            {
              PersistedStateLocation = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
              if ( PersistedStateLocation >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
                {
                  *a4 = 1;
                  v7 = 1;
                }
                else
                {
                  NtClose(KeyHandle);
                  *a4 = 2;
                  PersistedStateLocation = NtOpenKey(a3, DesiredAccess, &ObjectAttributes);
                }
              }
            }
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        else
        {
          PersistedStateLocation = -1073741801;
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  if ( v7 )
    goto LABEL_21;
LABEL_22:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)PersistedStateLocation;
}
