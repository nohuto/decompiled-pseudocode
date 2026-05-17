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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, _DWORD *a2, char a3, UNICODE_STRING *a4)
{
  _DWORD *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  signed int InformationToken; // ebx
  __int64 v14; // rdi
  int v15; // ebx
  unsigned int v16; // r14d
  char v17; // al
  _WORD *v18; // rcx
  const wchar_t *v19; // rdx
  signed int v20; // eax
  int v21; // r11d
  int v22; // r14d
  __int64 v23; // rbx
  int v24; // r15d
  size_t v25; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v27; // rdi
  const wchar_t *v29; // rax
  bool v30; // zf
  __int16 v31; // ax
  _WORD *v32; // rax
  __int16 v33; // ax
  __int64 v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+20h] [rbp-E0h]
  char v36; // [rsp+40h] [rbp-C0h]
  PSID v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v39[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h]
  int v42; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-78h] BYREF
  const void *v46[2]; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v47; // [rsp+A0h] [rbp-60h] BYREF
  PSID Sid[12]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v49; // [rsp+110h] [rbp+10h] BYREF
  _WORD v50[264]; // [rsp+160h] [rbp+60h] BYREF
  PCWSTR v51; // [rsp+370h] [rbp+270h] BYREF
  char v52; // [rsp+378h] [rbp+278h]
  WCHAR SourceString[264]; // [rsp+490h] [rbp+390h] BYREF

  v37 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(v50, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  LODWORD(v46[0]) = 262146;
  v46[1] = L"\\";
  if ( !a4 || !a1 )
    return 3221225485LL;
  v36 = 1;
  v41 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v42 = v11;
  v38 = 0;
  v40 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v47 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    v38 = 1;
    goto LABEL_8;
  }
  InformationToken = NtQueryInformationToken(a1, 29LL, &v38, 4LL, v39);
  if ( InformationToken >= 0 )
  {
    if ( !v38 )
      goto LABEL_8;
    InformationToken = NtQueryInformationToken(a1, 31LL, &v49, 80LL, v39);
    if ( InformationToken >= 0 )
    {
      v7 = v49;
      if ( !v49 )
      {
        InformationToken = -1073741823;
        goto LABEL_40;
      }
LABEL_8:
      InformationToken = NtQueryInformationToken(a1, 42LL, &v40, 4LL, v39);
      if ( InformationToken < 0 )
        goto LABEL_40;
      if ( v40 )
      {
        InformationToken = NtQueryInformationToken(a1, 1LL, Sid, 88LL, v39);
        if ( InformationToken < 0 )
          goto LABEL_40;
        InformationToken = RtlConvertSidToUnicodeString(&v47, Sid[0], 1u);
        if ( InformationToken < 0 )
          goto LABEL_40;
      }
      InformationToken = NtQueryInformationToken(a1, 12LL, &v45, 4LL, v39);
      if ( InformationToken < 0 )
        goto LABEL_40;
      v14 = 260LL;
      if ( v38 )
      {
        InformationToken = RtlGetAppContainerSidType(v7, &DestinationString);
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
          InformationToken = RtlGetAppContainerParent(v7, &v37);
          if ( InformationToken < 0 )
            goto LABEL_39;
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v37, 1u);
          if ( InformationToken < 0 )
            goto LABEL_39;
          LODWORD(v34) = v7[10];
          InformationToken = RtlStringCchPrintfW(
                               SourceString,
                               260LL,
                               L"%s\\%u-%u-%u-%u",
                               UnicodeString.Buffer,
                               v34,
                               v7[11],
                               v7[12],
                               v7[13]);
          if ( InformationToken < 0 )
            goto LABEL_39;
          RtlFreeUnicodeString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v36 = 0;
        }
      }
      InformationToken = NtQueryInformationToken(a1, 44LL, &v51, 288LL, v39);
      if ( InformationToken >= 0 )
      {
        v15 = v38;
        v16 = v45;
        if ( v40 || v38 || (v30 = v16 == (unsigned int)RtlGetCurrentServiceSessionId(), v17 = 1, !v30) )
          v17 = 0;
        if ( v10 )
        {
          if ( !v12 )
          {
            v29 = L"\\AppContainerNamedObjects";
            if ( !v15 )
              v29 = (const wchar_t *)&unk_180132BF4;
            v20 = RtlStringCchPrintfW(v50, 260LL, L"Global\\Session\\%ld%s", v16, v29);
            goto LABEL_24;
          }
          v18 = v50;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v31 = *(_WORD *)((char *)v18 + (char *)L"AppContainerNamedObjects" - (char *)v50);
            if ( !v31 )
              break;
            *v18++ = v31;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v18 = v50;
          if ( !v17 )
          {
            v19 = L"AppContainerNamedObjects";
            if ( !v15 )
              v19 = L"BaseNamedObjects";
            LODWORD(v35) = v16;
            v20 = RtlStringCchPrintfW(v50, 260LL, L"%s\\%ld\\%s", L"\\Sessions", v35, v19);
LABEL_24:
            InformationToken = v20;
LABEL_25:
            if ( InformationToken >= 0 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              InformationToken = RtlStringCbLengthW(v50, 520LL, &DestinationString);
              if ( InformationToken >= 0 )
              {
                v22 = v41;
                if ( v40 == v21 || v41 )
                  v23 = *(_QWORD *)&DestinationString.Length;
                else
                  v23 = *(_QWORD *)&DestinationString.Length + v47.Length + 2LL;
                if ( v38 != v21 )
                  v23 += UnicodeString.Length + 2LL;
                v24 = v42;
                if ( v52 != (_BYTE)v21 && !v42 )
                {
                  RtlInitUnicodeString(&DestinationString, v51);
                  v23 += DestinationString.Length + 2LL;
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
                  InformationToken = RtlAppendUnicodeToString(&a4->Length, v50);
                  if ( InformationToken >= 0 )
                  {
                    if ( !v40
                      || v22
                      || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v46), InformationToken >= 0)
                      && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v47),
                          InformationToken >= 0) )
                    {
                      if ( !v38
                        || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v46), InformationToken >= 0)
                        && (InformationToken = RtlAppendUnicodeStringToString(
                                                 &a4->Length,
                                                 (const void **)&UnicodeString),
                            InformationToken >= 0) )
                      {
                        if ( v52 )
                        {
                          if ( !v24 )
                          {
                            InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v46);
                            if ( InformationToken >= 0 )
                              InformationToken = RtlAppendUnicodeStringToString(
                                                   &a4->Length,
                                                   (const void **)&DestinationString);
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
            v33 = *(_WORD *)((char *)v18 + (char *)L"\\BaseNamedObjects" - (char *)v50);
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
        InformationToken = v14 == 0 ? 0x80000005 : 0;
        *v32 = 0;
        goto LABEL_25;
      }
LABEL_39:
      v8 = v37;
    }
  }
LABEL_40:
  RtlFreeUnicodeString(&v47);
  if ( InformationToken < 0 )
    RtlFreeUnicodeString(a4);
  if ( v36 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v37);
  return (unsigned int)InformationToken;
}
