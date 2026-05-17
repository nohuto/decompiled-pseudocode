/*
 * XREFs of LdrpReportError @ 0x18000C29C
 * Callers:
 *     LdrpProcessWork @ 0x1800114C8 (LdrpProcessWork.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C450 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025040 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     StringCbPrintfW @ 0x180062414 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtRaiseHardError @ 0x1800A1C40 (NtRaiseHardError.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __fastcall LdrpReportError(UNICODE_STRING *a1, const char *a2, int a3)
{
  __int64 v3; // rbx
  UNICODE_STRING *p_DestinationString; // rdi
  unsigned __int8 v6; // si
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  int v9; // edx
  const char *v10; // rax
  UNICODE_STRING *v11; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING *v12; // [rsp+30h] [rbp-D0h]
  int v13; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING v14; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v18[3]; // [rsp+78h] [rbp-88h] BYREF
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v20; // [rsp+A0h] [rbp-60h] BYREF

  v3 = a3;
  p_DestinationString = a1;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    p_DestinationString = &DestinationString;
    v6 = 0;
  }
  v7 = 3;
  switch ( (_DWORD)v3 )
  {
    case 0xC0000139:
      RtlInitAnsiString(&SourceString, a2);
      v14.Buffer = (wchar_t *)&v20;
      v14.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) < 0 )
        v14.Length = 0;
      v13 = -1073741511;
      v18[0] = &v14;
      v8 = 3;
      v12 = p_DestinationString;
      v11 = &v14;
      v9 = 883;
      v10 = "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      goto LABEL_7;
    case 0xC0000135:
      v8 = 1;
      v18[0] = p_DestinationString;
      v7 = 1;
      break;
    case 0xC0000138:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v14, pszDest);
      v13 = -1073741512;
      v10 = "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      v12 = p_DestinationString;
      v8 = 2;
      LODWORD(v11) = (_DWORD)a2;
      v9 = 857;
      v18[0] = a2;
LABEL_7:
      v18[2] = v3;
      v18[1] = p_DestinationString;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        v9,
        (unsigned int)"LdrpReportError",
        v6 ^ 1,
        v10,
        v11,
        v12,
        v13,
        *(_QWORD *)&v14.Length);
      goto LABEL_8;
    default:
      v8 = 3;
      break;
  }
  v14.Buffer = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
LABEL_8:
  if ( v6 )
  {
    if ( (int)NtRaiseHardError((unsigned int)v3, v7, v8, v18, 1, v15) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(v3 + 1073741512) <= 1 )
      RtlRaiseStatus((unsigned int)v3);
  }
}
