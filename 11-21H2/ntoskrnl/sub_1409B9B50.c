/*
 * XREFs of sub_1409B9B50 @ 0x1409B9B50
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405E5200 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1409B91D0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x14025D8B0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1402DCD64 @ 0x1402DCD64 (sub_1402DCD64.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409B9B50(HANDLE TokenHandle, PSID Sid, char a3, UNICODE_STRING *a4)
{
  PSID v8; // r12
  PSID v9; // r14
  int v10; // eax
  int v11; // esi
  int v12; // edi
  signed int AppContainerParent; // ebx
  __int64 v15; // r14
  ULONG CurrentServiceSessionId; // eax
  int v17; // r9d
  char v18; // al
  PULONG v19; // rsi
  PULONG v20; // rdi
  PULONG v21; // rbx
  const wchar_t *v22; // rcx
  signed int v23; // eax
  WCHAR *v24; // rcx
  WCHAR v25; // ax
  WCHAR *v26; // rax
  WCHAR *v27; // rdx
  WCHAR v28; // ax
  int v29; // esi
  __int64 v30; // rbx
  int v31; // r14d
  SIZE_T v32; // rbx
  wchar_t *v33; // rax
  wchar_t *v34; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+88h] [rbp-78h]
  UNICODE_STRING v49; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v51; // [rsp+B0h] [rbp-50h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[10]; // [rsp+120h] [rbp+20h] BYREF
  WCHAR Source[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR v55; // [rsp+380h] [rbp+280h] BYREF
  char v56; // [rsp+388h] [rbp+288h]
  WCHAR SourceString[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  AppContainerSidParent = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v53, 0, sizeof(v53));
  v40 = 0;
  v42 = 0;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  memset(Sida, 0, 0x58uLL);
  *(_QWORD *)&v49.Length = 262146LL;
  v49.Buffer = (wchar_t *)asc_140865B20;
  v51 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  TokenInformation = 0;
  v41 = 0;
  v44 = a3 & 2;
  v37 = 1;
  v10 = a3 & 8;
  v11 = a3 & 1;
  v12 = a3 & 4;
  LODWORD(v46) = v11;
  v45 = v10;
  v48 = v12;
  *a4 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( Sid )
  {
    v8 = Sid;
    TokenInformation = 1;
    goto LABEL_17;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v40);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_17;
    AppContainerParent = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v53, 0x50u, &v40);
    if ( AppContainerParent >= 0 )
    {
      v8 = (PSID)v53[0];
      if ( !v53[0] )
      {
        AppContainerParent = -1073741823;
        goto LABEL_10;
      }
LABEL_17:
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v41, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_10;
      if ( v41 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v40);
        if ( AppContainerParent < 0 )
          goto LABEL_10;
        AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_10;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenSessionId, &v42, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_10;
      v15 = 260LL;
      if ( TokenInformation )
      {
        AppContainerParent = RtlGetAppContainerSidType(v8, &AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_35;
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&DestinationString, v8, 1u);
          if ( AppContainerParent >= 0 )
            goto LABEL_26;
          goto LABEL_35;
        }
        AppContainerParent = RtlGetAppContainerParent(v8, &AppContainerSidParent);
        if ( AppContainerParent < 0
          || (AppContainerParent = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u),
              AppContainerParent < 0)
          || (v19 = RtlSubAuthoritySid(v8, 0xBu),
              v20 = RtlSubAuthoritySid(v8, 0xAu),
              v21 = RtlSubAuthoritySid(v8, 9u),
              LODWORD(ReturnLength) = *RtlSubAuthoritySid(v8, 8u),
              AppContainerParent = sub_1402E0198(
                                     SourceString,
                                     260LL,
                                     L"%s\\%u-%u-%u-%u",
                                     DestinationString.Buffer,
                                     ReturnLength,
                                     *v21,
                                     *v20,
                                     *v19),
              AppContainerParent < 0) )
        {
LABEL_35:
          v9 = AppContainerSidParent;
          goto LABEL_10;
        }
        RtlFreeUnicodeString(&DestinationString);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v12 = v48;
        LOBYTE(v11) = v46;
        v37 = 0;
      }
LABEL_26:
      AppContainerParent = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &v55, 0x120u, &v40);
      if ( AppContainerParent < 0 )
      {
LABEL_73:
        v9 = AppContainerSidParent;
        goto LABEL_10;
      }
      if ( v41 || TokenInformation )
      {
        v17 = v42;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v17 = v42;
        if ( v42 == CurrentServiceSessionId )
        {
          v18 = 1;
          goto LABEL_38;
        }
      }
      v18 = 0;
LABEL_38:
      if ( (_BYTE)v11 )
      {
        if ( !v12 )
        {
          v23 = sub_1402E0198(Source, 260LL, L"Global\\Session\\%ld%s");
LABEL_52:
          AppContainerParent = v23;
LABEL_60:
          if ( AppContainerParent >= 0 )
          {
            v46 = 0LL;
            AppContainerParent = sub_1402DCD64(Source, 0x208uLL, &v46);
            if ( AppContainerParent >= 0 )
            {
              v29 = v44;
              if ( !v41 || v44 )
                v30 = v46;
              else
                v30 = UnicodeString.Length + v46 + 2;
              if ( TokenInformation )
                v30 += DestinationString.Length + 2LL;
              v31 = v45;
              if ( v56 && !v45 )
              {
                RtlInitUnicodeString(&v51, v55);
                v30 += v51.Length + 2LL;
              }
              v32 = v30 + 2;
              v33 = (wchar_t *)sub_1406BE560(v32);
              v34 = v33;
              if ( v33 )
              {
                memset(v33, 0, v32);
                *a4 = 0LL;
                a4->MaximumLength = v32;
                a4->Buffer = v34;
                AppContainerParent = RtlAppendUnicodeToString(a4, Source);
                if ( AppContainerParent >= 0 )
                {
                  if ( !v41
                    || v29
                    || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v49), AppContainerParent >= 0)
                    && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString), AppContainerParent >= 0) )
                  {
                    if ( !TokenInformation
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v49), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &DestinationString),
                          AppContainerParent >= 0) )
                    {
                      if ( v56 )
                      {
                        if ( !v31 )
                        {
                          AppContainerParent = RtlAppendUnicodeStringToString(a4, &v49);
                          if ( AppContainerParent >= 0 )
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v51);
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                AppContainerParent = -1073741670;
              }
            }
          }
          goto LABEL_73;
        }
        v27 = Source;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v28 = *(WCHAR *)((char *)v27 + (char *)L"AppContainerNamedObjects" - (char *)Source);
          if ( !v28 )
            break;
          *v27++ = v28;
          --v15;
        }
        while ( v15 );
        v26 = v27 - 1;
        if ( v15 )
          v26 = v27;
      }
      else
      {
        if ( !v18 )
        {
          v22 = L"AppContainerNamedObjects";
          if ( !TokenInformation )
            v22 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v17;
          v23 = sub_1402E0198(Source, 260LL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v22);
          goto LABEL_52;
        }
        v24 = Source;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v25 = *(WCHAR *)((char *)v24 + (char *)L"\\BaseNamedObjects" - (char *)Source);
          if ( !v25 )
            break;
          *v24++ = v25;
          --v15;
        }
        while ( v15 );
        v26 = v24 - 1;
        if ( v15 )
          v26 = v24;
      }
      *v26 = 0;
      AppContainerParent = v15 == 0 ? 0x80000005 : 0;
      goto LABEL_60;
    }
  }
LABEL_10:
  RtlFreeUnicodeString(&UnicodeString);
  if ( AppContainerParent < 0 )
    RtlFreeUnicodeString(a4);
  if ( v37 )
    RtlFreeUnicodeString(&DestinationString);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)AppContainerParent;
}
