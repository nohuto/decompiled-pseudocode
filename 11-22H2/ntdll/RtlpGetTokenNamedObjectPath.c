/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x18000BE08
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x18000AC00 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x180087BF0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlGetAppContainerSidType @ 0x18000AEA0 (RtlGetAppContainerSidType.c)
 *     RtlStringCchPrintfW @ 0x18000AF0C (RtlStringCchPrintfW.c)
 *     RtlStringCbLengthW @ 0x18000AF74 (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     RtlFreeUnicodeString @ 0x18000EB80 (RtlFreeUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     RtlGetAppContainerParent @ 0x1800F0F70 (RtlGetAppContainerParent.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, _DWORD *a2, char a3, _UNICODE_STRING *a4)
{
  _DWORD *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  signed int AppContainerParent; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // r14d
  char v17; // al
  WCHAR *v18; // rcx
  const wchar_t *v19; // rdx
  signed int v20; // eax
  __int64 v21; // rdx
  int v22; // r11d
  int v23; // r14d
  __int64 v24; // rbx
  int v25; // r15d
  size_t v26; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v28; // rdi
  const wchar_t *v30; // rax
  bool v31; // zf
  WCHAR v32; // ax
  WCHAR *v33; // rax
  WCHAR v34; // ax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING AppContainerSidType; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v46; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v47; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v48; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v50; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v52; // [rsp+370h] [rbp+270h] BYREF
  char v53; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(Source, 0, 0x208uLL);
  memset_thunk_772440563353939046(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v47.Length = 262146;
  v47.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v37 = 1;
  v42 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v43 = v11;
  TokenInformation = 0;
  v41 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v48 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
    goto LABEL_8;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &v40);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_8;
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v50, 0x50u, &v40);
    if ( AppContainerParent >= 0 )
    {
      v7 = v50;
      if ( !v50 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_40;
      }
LABEL_8:
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v41, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_40;
      if ( v41 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &v40);
        if ( AppContainerParent < 0 )
          goto LABEL_40;
        AppContainerParent = RtlConvertSidToUnicodeString(&v48, Sid[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_40;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v46, 4u, &v40);
      if ( AppContainerParent < 0 )
        goto LABEL_40;
      v14 = 260LL;
      if ( TokenInformation )
      {
        AppContainerParent = RtlGetAppContainerSidType(v7, (PAPPCONTAINER_SID_TYPE)&AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_39;
        if ( *(_DWORD *)&AppContainerSidType.Length == 2 )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_39;
        }
        else
        {
          AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
          if ( AppContainerParent < 0 )
            goto LABEL_39;
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_39;
          LODWORD(ReturnLength) = v7[10];
          AppContainerParent = RtlStringCchPrintfW(
                                 SourceString,
                                 260LL,
                                 L"%s\\%u-%u-%u-%u",
                                 UnicodeString.Buffer,
                                 ReturnLength,
                                 v7[11],
                                 v7[12],
                                 v7[13]);
          if ( AppContainerParent < 0 )
            goto LABEL_39;
          RtlFreeUnicodeString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v37 = 0;
        }
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v52, 0x120u, &v40);
      if ( AppContainerParent >= 0 )
      {
        v15 = TokenInformation;
        v16 = v46;
        if ( v41 || TokenInformation || (v31 = v16 == RtlGetCurrentServiceSessionId(), v17 = 1, !v31) )
          v17 = 0;
        if ( v10 )
        {
          if ( !v12 )
          {
            v30 = L"\\AppContainerNamedObjects";
            if ( !v15 )
              v30 = &word_180135D3C;
            v20 = RtlStringCchPrintfW(Source, 260LL, L"Global\\Session\\%ld%s", v16, v30);
            goto LABEL_24;
          }
          v18 = Source;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v32 = *(WCHAR *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)Source);
            if ( !v32 )
              break;
            *v18++ = v32;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v18 = Source;
          if ( !v17 )
          {
            v19 = L"AppContainerNamedObjects";
            if ( !v15 )
              v19 = L"BaseNamedObjects";
            LODWORD(ReturnLengtha) = v16;
            v20 = RtlStringCchPrintfW(Source, 260LL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v19);
LABEL_24:
            AppContainerParent = v20;
LABEL_25:
            if ( AppContainerParent >= 0 )
            {
              *(_QWORD *)&AppContainerSidType.Length = 0LL;
              AppContainerParent = RtlStringCbLengthW(Source, 0x208uLL, &AppContainerSidType);
              if ( AppContainerParent >= 0 )
              {
                v23 = v42;
                if ( v41 == v22 || v42 )
                  v24 = *(_QWORD *)&AppContainerSidType.Length;
                else
                  v24 = *(_QWORD *)&AppContainerSidType.Length + v48.Length + 2LL;
                if ( TokenInformation != v22 )
                  v24 += UnicodeString.Length + 2LL;
                v25 = v43;
                if ( v53 != (_BYTE)v22 && !v43 )
                {
                  RtlInitUnicodeString(&AppContainerSidType, v52);
                  v24 += AppContainerSidType.Length + 2LL;
                }
                v26 = v24 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v26, v21);
                v28 = StringRoutine;
                if ( StringRoutine )
                {
                  memset_thunk_772440563353939046(StringRoutine, 0, v26);
                  *a4 = 0LL;
                  a4->MaximumLength = v26;
                  a4->Buffer = v28;
                  AppContainerParent = RtlAppendUnicodeToString(a4, Source);
                  if ( AppContainerParent >= 0 )
                  {
                    if ( !v41
                      || v23
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v47), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v48), AppContainerParent >= 0) )
                    {
                      if ( !TokenInformation
                        || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v47), AppContainerParent >= 0)
                        && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                            AppContainerParent >= 0) )
                      {
                        if ( v53 )
                        {
                          if ( !v25 )
                          {
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v47);
                            if ( AppContainerParent >= 0 )
                              AppContainerParent = RtlAppendUnicodeStringToString(a4, &AppContainerSidType);
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
            goto LABEL_39;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v34 = *(WCHAR *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)Source);
            if ( !v34 )
              break;
            *v18++ = v34;
            --v14;
          }
          while ( v14 );
        }
        v33 = v18 - 1;
        if ( v14 )
          v33 = v18;
        AppContainerParent = v14 == 0 ? 0x80000005 : 0;
        *v33 = 0;
        goto LABEL_25;
      }
LABEL_39:
      v8 = AppContainerSidParent;
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&v48);
  if ( AppContainerParent < 0 )
    RtlFreeUnicodeString(a4);
  if ( v37 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
