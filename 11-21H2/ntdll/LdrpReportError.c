/*
 * XREFs of LdrpReportError @ 0x18007E00C
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000ADA4 (StringCbPrintfW.c)
 *     RtlInitAnsiString @ 0x180035350 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x18003D5E0 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtRaiseHardError @ 0x1800A6E60 (NtRaiseHardError.c)
 */

void __fastcall LdrpReportError(_UNICODE_STRING *a1, const CHAR *a2, NTSTATUS a3)
{
  _UNICODE_STRING *p_DestinationString; // rdi
  unsigned __int8 v6; // si
  ULONG v7; // r14d
  int v8; // edx
  const char *v9; // rax
  ULONG v10; // r15d
  _UNICODE_STRING *Response; // [rsp+28h] [rbp-D8h]
  _UNICODE_STRING *v12; // [rsp+30h] [rbp-D0h]
  int v13; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING v14; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v15; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 Parameters[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h]
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+A0h] [rbp-60h] BYREF

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
  switch ( a3 )
  {
    case -1073741515:
      v10 = 1;
      Parameters[0] = (unsigned __int64)p_DestinationString;
      v7 = 1;
      break;
    case -1073741512:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v14, pszDest);
      v13 = -1073741512;
      v9 = "Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      v12 = p_DestinationString;
      v8 = 857;
      v19 = -1073741512LL;
      v10 = 2;
      LODWORD(Response) = (_DWORD)a2;
      Parameters[0] = (unsigned __int64)a2;
LABEL_9:
      Parameters[1] = (unsigned __int64)p_DestinationString;
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrutil.c",
        v8,
        (__int64)"LdrpReportError",
        v6 ^ 1,
        v9,
        Response,
        v12,
        v13,
        *(_QWORD *)&v14.Length);
      goto LABEL_10;
    case -1073741511:
      RtlInitAnsiString(&SourceString, a2);
      v14.Buffer = (wchar_t *)&v21;
      v14.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) < 0 )
        v14.Length = 0;
      v13 = -1073741511;
      Parameters[0] = (unsigned __int64)&v14;
      v8 = 883;
      v12 = p_DestinationString;
      Response = &v14;
      v9 = "Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n";
      v19 = -1073741511LL;
      v10 = 3;
      goto LABEL_9;
    default:
      v10 = 3;
      break;
  }
  v14.Buffer = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
LABEL_10:
  if ( v6 )
  {
    if ( NtRaiseHardError(a3, v7, v10, Parameters, 1u, &v15) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(a3 + 1073741512) <= 1 )
      RtlRaiseStatus(a3);
  }
}
