/*
 * XREFs of SmpParseCommandLine @ 0x140005150
 * Callers:
 *     SmpExecuteCommand @ 0x140004F44 (SmpExecuteCommand.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000A43C (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A930 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004384 (RtlStringCbPrintfW.c)
 *     SmpParseToken @ 0x1400055F0 (SmpParseToken.c)
 *     SmpExpandEnvironmentString @ 0x140005780 (SmpExpandEnvironmentString.c)
 *     SmpQueryEnvVariable @ 0x140005CFC (SmpQueryEnvVariable.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpParseCommandLine(
        __int128 *a1,
        _DWORD *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *DestinationString)
{
  ULONG v6; // r12d
  NTSTATUS v10; // edi
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  PWSTR PartName; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v19; // [rsp+68h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  WCHAR pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v18 = 655368;
  v19 = L"Path";
  PartName = 0LL;
  v6 = 0;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(DestinationString, 0LL);
  v20 = *a1;
  v10 = SmpParseToken(&v20, 0LL, &String1);
  if ( v10 < 0 )
    return 3221225473LL;
  while ( 1 )
  {
    if ( !String1.Buffer )
      return 3221225473LL;
    if ( !a2 )
    {
      v10 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s");
      goto LABEL_36;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpDebugKeyword, 1u) )
    {
      *a2 |= 1u;
      goto LABEL_14;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpASyncKeyword, 1u) )
    {
      *a2 |= 2u;
      goto LABEL_14;
    }
    if ( RtlEqualUnicodeString(&String1, &SmpSecureKeyword, 1u) )
    {
      *a2 |= 0x8000u;
      goto LABEL_14;
    }
    if ( !RtlEqualUnicodeString(&String1, &SmpAutoChkKeyword, 1u) )
      break;
    if ( !SmpPrimarySmss )
      return 3221225485LL;
    if ( SmpHostSmss )
      *a2 |= 4u;
LABEL_14:
    RtlFreeUnicodeString(&String1);
    v10 = SmpParseToken(&v20, 0LL, &String1);
    if ( v10 < 0 )
      return 3221225473LL;
  }
  if ( (*a2 & 0x400) != 0 )
  {
    *a3 = String1;
    goto LABEL_44;
  }
  if ( (*a2 & 8) == 0 || (result = SmpExpandEnvironmentString(&String1), v10 = result, (int)result >= 0) )
  {
    if ( RtlCompareUnicodeString(&SmpS0InitCmd, &String1, 0)
      && RtlCompareUnicodeString(&SmscpDefaultCmd, &String1, 0)
      && RtlCompareUnicodeString(&SmpSetupClCmd, &String1, 0) )
    {
      RtlInitUnicodeString(&v17, 0LL);
      v10 = SmpQueryEnvVariable(v13, &v18, &v17);
      if ( v10 >= 0 )
        v6 = RtlDosSearchPath_U(v17.Buffer, String1.Buffer, L".exe", 0x208u, pszDest, &PartName);
      if ( v17.Buffer )
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v17.Buffer);
    }
    if ( v10 >= 0
      && !v6
      && !RtlDosSearchPath_U(SmpDefaultLibPath.Buffer, String1.Buffer, L".exe", 0x208u, pszDest, &PartName) )
    {
      *a2 |= 0x10u;
      *a3 = String1;
      if ( a4 )
        RtlInitUnicodeString(a4, 0LL);
      return 0LL;
    }
LABEL_36:
    RtlFreeUnicodeString(&String1);
    if ( v10 >= 0 )
    {
      if ( !RtlDosPathNameToNtPathName_U(pszDest, a3, 0LL, 0LL) )
      {
        v14 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v14 + 2] = 9247;
        SmpGlobalLog[2 * v14 + 3] = -1073741767;
        *(_QWORD *)&SmpGlobalLog[2 * v14 + 4] = a1;
        return 3221225529LL;
      }
      if ( a4 )
      {
        if ( PartName > pszDest )
        {
          *--PartName = 0;
          if ( RtlCreateUnicodeString(a4, pszDest) == 1 )
            goto LABEL_44;
          v10 = -1073741823;
        }
        RtlInitUnicodeString(a4, 0LL);
        if ( v10 >= 0 )
          goto LABEL_44;
LABEL_49:
        RtlFreeUnicodeString(a3);
        if ( a4 )
          RtlFreeUnicodeString(a4);
      }
      else
      {
LABEL_44:
        LOBYTE(v11) = 1;
        v10 = SmpParseToken(&v20, v11, DestinationString);
        if ( v10 < 0 )
          goto LABEL_49;
        if ( a2 )
        {
          if ( (*(_BYTE *)a2 & 8) != 0 )
          {
            if ( DestinationString->Length )
            {
              v10 = SmpExpandEnvironmentString(DestinationString);
              if ( v10 < 0 )
                goto LABEL_49;
            }
          }
        }
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
