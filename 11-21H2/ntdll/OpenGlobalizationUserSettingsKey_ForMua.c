/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x180050B20 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(
        ACCESS_MASK DesiredAccess,
        __int64 a2,
        HANDLE *a3,
        _DWORD *a4)
{
  int v6; // r15d
  PVOID Heap; // r14
  NTSTATUS PersistedStateLocation; // ebx
  _BYTE *v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  wchar_t *v13; // rsi
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  WCHAR TargetPath[264]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x54uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  PersistedStateLocation = NtQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Heap, 0x54u, &ReturnLength);
  if ( PersistedStateLocation >= 0 )
  {
    v10 = *(_BYTE **)Heap;
    if ( *(_BYTE *)(*(_QWORD *)Heap + 1LL) < 2u
      || v10[1] == 5 && *((_DWORD *)v10 + 2) == 21 && *((_DWORD *)v10 + 6) == 503 )
    {
      *a4 = 0;
    }
    else
    {
      PersistedStateLocation = RtlConvertSidToUnicodeString(&UnicodeString, *(PSID *)Heap, 1u);
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
                    v6 = 1;
                    *a4 = 1;
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
      if ( !v6 )
        goto LABEL_23;
    }
    PersistedStateLocation = OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, a3);
  }
LABEL_23:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)PersistedStateLocation;
}
