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

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v7; // r15d
  __int64 Heap; // r14
  int InformationToken; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  _QWORD *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  _WORD v23[264]; // [rsp+A0h] [rbp-60h] BYREF

  v7 = 0;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 84LL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
  {
    v10 = *(_QWORD *)Heap;
    if ( *(_BYTE *)(*(_QWORD *)Heap + 1LL) < 2u
      || *(_BYTE *)(v10 + 1) == 5 && *(_DWORD *)(v10 + 8) == 21 && *(_DWORD *)(v10 + 24) == 503 )
    {
      *a4 = 0;
LABEL_21:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
      goto LABEL_22;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v10, 1u);
    if ( InformationToken >= 0 )
    {
      LODWORD(v15) = 0;
      InformationToken = RtlGetPersistedStateLocation(
                           L"GlobalizationUserSettings",
                           L"TargetNtPath",
                           L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                           0,
                           v23,
                           0x208u,
                           (unsigned int *)&v15);
      if ( InformationToken >= 0 )
      {
        v11 = v15 + UnicodeString.Length + 4;
        v12 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
        v13 = v12;
        if ( v12 )
        {
          v16[0] = 0LL;
          WORD1(v16[0]) = v11;
          v16[1] = v12;
          InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v16, v23);
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v16, L"\\");
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeStringToString((unsigned __int16 *)v16, (const void **)&UnicodeString);
              if ( InformationToken >= 0 )
              {
                v19 = 0LL;
                v20 = v16;
                v18 = 48;
                v21 = 576;
                v22 = 0LL;
                if ( (int)NtOpenKey() < 0 )
                {
                  *a4 = 1;
                  v7 = 1;
                }
                else
                {
                  NtClose((HANDLE)v16[2]);
                  *a4 = 2;
                  InformationToken = NtOpenKey();
                }
              }
            }
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
        }
        else
        {
          InformationToken = -1073741801;
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  if ( v7 )
    goto LABEL_21;
LABEL_22:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)InformationToken;
}
