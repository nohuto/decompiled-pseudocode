/*
 * XREFs of LdrpReportError @ 0x18000C07C
 * Callers:
 *     LdrpProcessWork @ 0x1800112B8 (LdrpProcessWork.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 * Callees:
 *     RtlInitAnsiString @ 0x18000C230 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024EF0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     StringCbPrintfW @ 0x18005F584 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtRaiseHardError @ 0x1800A3D00 (NtRaiseHardError.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

void __fastcall LdrpReportError(_UNICODE_STRING *a1, const CHAR *a2, int a3)
{
  unsigned __int64 v3; // rbx
  _UNICODE_STRING *p_DestinationString; // rdi
  unsigned __int8 v6; // si
  ULONG v7; // r14d
  ULONG v8; // r15d
  int v9; // edx
  const char *v10; // rax
  _UNICODE_STRING *Response; // [rsp+28h] [rbp-D8h]
  _UNICODE_STRING *v12; // [rsp+30h] [rbp-D0h]
  int v13; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING v14; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v15; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+78h] [rbp-88h] BYREF
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
      Parameters[0] = (unsigned __int64)&v14;
      v8 = 3;
      v12 = p_DestinationString;
      Response = &v14;
      v9 = 883;
      v10 = "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      goto LABEL_7;
    case 0xC0000135:
      v8 = 1;
      Parameters[0] = (unsigned __int64)p_DestinationString;
      v7 = 1;
      break;
    case 0xC0000138:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v14, pszDest);
      v13 = -1073741512;
      v10 = "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      v12 = p_DestinationString;
      v8 = 2;
      LODWORD(Response) = (_DWORD)a2;
      v9 = 857;
      Parameters[0] = (unsigned __int64)a2;
LABEL_7:
      Parameters[2] = v3;
      Parameters[1] = (unsigned __int64)p_DestinationString;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        v9,
        (unsigned int)"LdrpReportError",
        v6 ^ 1,
        v10,
        Response,
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
    if ( NtRaiseHardError(v3, v7, v8, Parameters, 1u, &v15) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(v3 + 1073741512) <= 1 )
      RtlRaiseStatus(v3);
  }
}
