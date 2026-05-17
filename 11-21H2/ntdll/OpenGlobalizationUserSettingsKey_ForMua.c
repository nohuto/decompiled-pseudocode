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

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // r15d
  PSID *Heap; // r14
  int InformationToken; // ebx
  _BYTE *v10; // rax
  unsigned __int16 v11; // bx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  _QWORD *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  _WORD v23[264]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  Heap = (PSID *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 84LL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
  {
    v10 = *Heap;
    if ( *((_BYTE *)*Heap + 1) < 2u || v10[1] == 5 && *((_DWORD *)v10 + 2) == 21 && *((_DWORD *)v10 + 6) == 503 )
    {
      *a4 = 0;
    }
    else
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, *Heap, 1u);
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
                InformationToken = RtlAppendUnicodeStringToString(
                                     (unsigned __int16 *)v16,
                                     (const void **)&UnicodeString);
                if ( InformationToken >= 0 )
                {
                  v19 = 0LL;
                  v20 = v16;
                  v18 = 48;
                  v21 = 576;
                  v22 = 0LL;
                  if ( (int)NtOpenKey() < 0 )
                  {
                    v6 = 1;
                    *a4 = 1;
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
      if ( !v6 )
        goto LABEL_23;
    }
    InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  }
LABEL_23:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)InformationToken;
}
