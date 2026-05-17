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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  _DWORD *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  signed int InformationToken; // ebx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  unsigned int v20; // r14d
  char v21; // al
  wchar_t *v22; // rcx
  const wchar_t *v23; // rdx
  signed int v24; // eax
  __int64 v25; // rdx
  int v26; // r11d
  int v27; // r14d
  __int64 v28; // rbx
  int v29; // r15d
  size_t v30; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v32; // rdi
  const wchar_t *v34; // rax
  bool v35; // zf
  wchar_t v36; // ax
  wchar_t *v37; // rax
  wchar_t v38; // ax
  __int64 v39; // [rsp+20h] [rbp-E0h]
  __int64 v40; // [rsp+20h] [rbp-E0h]
  char v41; // [rsp+40h] [rbp-C0h]
  PSID v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v44[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h]
  int v47; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v50; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v52; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v53; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v55; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v56[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v57; // [rsp+370h] [rbp+270h] BYREF
  char v58; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  v42 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset_thunk_772440563353939046(v56, 0, 0x208uLL);
  memset_thunk_772440563353939046(SourceString, 0, 0x208uLL);
  v51 = 262146;
  v52 = L"\\";
  if ( !a4 || !a1 )
    return 3221225485LL;
  v41 = 1;
  v46 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v47 = v11;
  v43 = 0;
  v45 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v53 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    v43 = 1;
    goto LABEL_8;
  }
  InformationToken = NtQueryInformationToken(a1, 29LL, &v43, 4LL, v44);
  if ( InformationToken >= 0 )
  {
    if ( !v43 )
      goto LABEL_8;
    InformationToken = NtQueryInformationToken(a1, 31LL, &v55, 80LL, v44);
    if ( InformationToken >= 0 )
    {
      v7 = v55;
      if ( !v55 )
      {
        InformationToken = -1073741823;
        goto LABEL_40;
      }
LABEL_8:
      InformationToken = NtQueryInformationToken(a1, 42LL, &v45, 4LL, v44);
      if ( InformationToken < 0 )
        goto LABEL_40;
      if ( v45 )
      {
        InformationToken = NtQueryInformationToken(a1, 1LL, Sid, 88LL, v44);
        if ( InformationToken < 0 )
          goto LABEL_40;
        InformationToken = RtlConvertSidToUnicodeString(&v53, Sid[0], 1u);
        if ( InformationToken < 0 )
          goto LABEL_40;
      }
      InformationToken = NtQueryInformationToken(a1, 12LL, &v50, 4LL, v44);
      if ( InformationToken < 0 )
        goto LABEL_40;
      v14 = 260LL;
      if ( v43 )
      {
        InformationToken = RtlGetAppContainerSidType((__int64)v7, &DestinationString);
        if ( InformationToken < 0 )
          goto LABEL_39;
        if ( *(_DWORD *)&DestinationString.Length == 2 )
        {
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( InformationToken < 0 )
            goto LABEL_39;
        }
        else
        {
          InformationToken = RtlGetAppContainerParent(v7, &v42);
          if ( InformationToken < 0 )
            goto LABEL_39;
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v42, 1u);
          if ( InformationToken < 0 )
            goto LABEL_39;
          LODWORD(v39) = v7[10];
          InformationToken = RtlStringCchPrintfW(
                               SourceString,
                               260LL,
                               L"%s\\%u-%u-%u-%u",
                               UnicodeString.Buffer,
                               v39,
                               v7[11],
                               v7[12],
                               v7[13]);
          if ( InformationToken < 0 )
            goto LABEL_39;
          RtlFreeUnicodeString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v41 = 0;
        }
      }
      InformationToken = NtQueryInformationToken(a1, 44LL, &v57, 288LL, v44);
      if ( InformationToken >= 0 )
      {
        v19 = v43;
        v20 = v50;
        if ( v45 || v43 || (v35 = v20 == (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18), v21 = 1, !v35) )
          v21 = 0;
        if ( v10 )
        {
          if ( !v12 )
          {
            v34 = L"\\AppContainerNamedObjects";
            if ( !v19 )
              v34 = (const wchar_t *)&unk_180135D3C;
            v24 = RtlStringCchPrintfW(v56, 260LL, L"Global\\Session\\%ld%s", v20, v34);
            goto LABEL_24;
          }
          v22 = v56;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v36 = *(wchar_t *)((char *)v22 + (char *)L"AppContainerNamedObjects" - (char *)v56);
            if ( !v36 )
              break;
            *v22++ = v36;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v22 = v56;
          if ( !v21 )
          {
            v23 = L"AppContainerNamedObjects";
            if ( !v19 )
              v23 = L"BaseNamedObjects";
            LODWORD(v40) = v20;
            v24 = RtlStringCchPrintfW(v56, 260LL, L"%s\\%ld\\%s", L"\\Sessions", v40, v23);
LABEL_24:
            InformationToken = v24;
LABEL_25:
            if ( InformationToken >= 0 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              InformationToken = RtlStringCbLengthW(v56, 0x208uLL, &DestinationString);
              if ( InformationToken >= 0 )
              {
                v27 = v46;
                if ( v45 == v26 || v46 )
                  v28 = *(_QWORD *)&DestinationString.Length;
                else
                  v28 = *(_QWORD *)&DestinationString.Length + v53.Length + 2LL;
                if ( v43 != v26 )
                  v28 += UnicodeString.Length + 2LL;
                v29 = v47;
                if ( v58 != (_BYTE)v26 && !v47 )
                {
                  RtlInitUnicodeString(&DestinationString, v57);
                  v28 += DestinationString.Length + 2LL;
                }
                v30 = v28 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v30, v25);
                v32 = StringRoutine;
                if ( StringRoutine )
                {
                  memset_thunk_772440563353939046(StringRoutine, 0, v30);
                  *a4 = 0LL;
                  a4->MaximumLength = v30;
                  a4->Buffer = v32;
                  InformationToken = RtlAppendUnicodeToString(&a4->Length, v56);
                  if ( InformationToken >= 0 )
                  {
                    if ( !v45
                      || v27
                      || (InformationToken = RtlAppendUnicodeStringToString(a4, &v51), InformationToken >= 0)
                      && (InformationToken = RtlAppendUnicodeStringToString(a4, &v53), InformationToken >= 0) )
                    {
                      if ( !v43
                        || (InformationToken = RtlAppendUnicodeStringToString(a4, &v51), InformationToken >= 0)
                        && (InformationToken = RtlAppendUnicodeStringToString(a4, &UnicodeString), InformationToken >= 0) )
                      {
                        if ( v58 )
                        {
                          if ( !v29 )
                          {
                            InformationToken = RtlAppendUnicodeStringToString(a4, &v51);
                            if ( InformationToken >= 0 )
                              InformationToken = RtlAppendUnicodeStringToString(a4, &DestinationString);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  InformationToken = -1073741670;
                }
              }
            }
            goto LABEL_39;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v38 = *(wchar_t *)((char *)v22 + (char *)L"\\BaseNamedObjects" - (char *)v56);
            if ( !v38 )
              break;
            *v22++ = v38;
            --v14;
          }
          while ( v14 );
        }
        v37 = v22 - 1;
        if ( v14 )
          v37 = v22;
        InformationToken = v14 == 0 ? 0x80000005 : 0;
        *v37 = 0;
        goto LABEL_25;
      }
LABEL_39:
      v8 = v42;
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&v53);
  if ( InformationToken < 0 )
    RtlFreeUnicodeString(a4);
  if ( v41 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v42);
  return (unsigned int)InformationToken;
}
