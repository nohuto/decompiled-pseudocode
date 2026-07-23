/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180076B98
 * Callers:
 *     RtlGetTokenNamedObjectPath @ 0x180076A30 (RtlGetTokenNamedObjectPath.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180076A50 (RtlGetAppContainerNamedObjectPath.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     RtlStringCbLengthW @ 0x18007701C (RtlStringCbLengthW.c)
 *     RtlStringCchPrintfW @ 0x180077090 (RtlStringCchPrintfW.c)
 *     RtlGetAppContainerSidType @ 0x180077100 (RtlGetAppContainerSidType.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlGetAppContainerParent @ 0x1800F1370 (RtlGetAppContainerParent.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, _DWORD *a2, char a3, _UNICODE_STRING *a4)
{
  _DWORD *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // r14d
  char v17; // al
  WCHAR *v18; // rcx
  const wchar_t *v19; // rdx
  NTSTATUS v20; // eax
  int v21; // r11d
  int v22; // r14d
  __int64 v23; // rbx
  int v24; // r15d
  SIZE_T v25; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v27; // rdi
  const wchar_t *v29; // rax
  bool v30; // zf
  WCHAR v31; // ax
  WCHAR *v32; // rax
  WCHAR v33; // ax
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h]
  int v42; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING AppContainerSidType; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v46; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING v47; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v49; // [rsp+110h] [rbp+10h] BYREF
  WCHAR Source[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v51; // [rsp+370h] [rbp+270h] BYREF
  char v52; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v46.Length = 262146;
  v46.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v36 = 1;
  v41 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v42 = v11;
  TokenInformation = 0;
  v40 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
    goto LABEL_8;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &v39);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_8;
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v49, 0x50u, &v39);
    if ( AppContainerParent >= 0 )
    {
      v7 = v49;
      if ( !v49 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_40;
      }
LABEL_8:
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v40, 4u, &v39);
      if ( AppContainerParent < 0 )
        goto LABEL_40;
      if ( v40 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &v39);
        if ( AppContainerParent < 0 )
          goto LABEL_40;
        AppContainerParent = RtlConvertSidToUnicodeString(&v47, Sid[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_40;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v45, 4u, &v39);
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
          v36 = 0;
        }
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v51, 0x120u, &v39);
      if ( AppContainerParent >= 0 )
      {
        v15 = TokenInformation;
        v16 = v45;
        if ( v40 || TokenInformation || (v30 = v16 == RtlGetCurrentServiceSessionId(), v17 = 1, !v30) )
          v17 = 0;
        if ( v10 )
        {
          if ( !v12 )
          {
            v29 = L"\\AppContainerNamedObjects";
            if ( !v15 )
              v29 = &word_180132BF4;
            v20 = RtlStringCchPrintfW(Source, 260LL, L"Global\\Session\\%ld%s", v16, v29);
            goto LABEL_24;
          }
          v18 = Source;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v31 = *(WCHAR *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)Source);
            if ( !v31 )
              break;
            *v18++ = v31;
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
              AppContainerParent = RtlStringCbLengthW(Source, 520LL, &AppContainerSidType);
              if ( AppContainerParent >= 0 )
              {
                v22 = v41;
                if ( v40 == v21 || v41 )
                  v23 = *(_QWORD *)&AppContainerSidType.Length;
                else
                  v23 = *(_QWORD *)&AppContainerSidType.Length + v47.Length + 2LL;
                if ( TokenInformation != v21 )
                  v23 += UnicodeString.Length + 2LL;
                v24 = v42;
                if ( v52 != (_BYTE)v21 && !v42 )
                {
                  RtlInitUnicodeString(&AppContainerSidType, v51);
                  v23 += AppContainerSidType.Length + 2LL;
                }
                v25 = v23 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v25);
                v27 = StringRoutine;
                if ( StringRoutine )
                {
                  memset(StringRoutine, 0, v25);
                  *a4 = 0LL;
                  a4->MaximumLength = v25;
                  a4->Buffer = v27;
                  AppContainerParent = RtlAppendUnicodeToString(a4, Source);
                  if ( AppContainerParent >= 0 )
                  {
                    if ( !v40
                      || v22
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v46), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v47), AppContainerParent >= 0) )
                    {
                      if ( !TokenInformation
                        || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v46), AppContainerParent >= 0)
                        && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                            AppContainerParent >= 0) )
                      {
                        if ( v52 )
                        {
                          if ( !v24 )
                          {
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v46);
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
            v33 = *(WCHAR *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)Source);
            if ( !v33 )
              break;
            *v18++ = v33;
            --v14;
          }
          while ( v14 );
        }
        v32 = v18 - 1;
        if ( v14 )
          v32 = v18;
        AppContainerParent = v14 == 0 ? 0x80000005 : 0;
        *v32 = 0;
        goto LABEL_25;
      }
LABEL_39:
      v8 = AppContainerSidParent;
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&v47);
  if ( AppContainerParent < 0 )
    RtlFreeUnicodeString(a4);
  if ( v36 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
