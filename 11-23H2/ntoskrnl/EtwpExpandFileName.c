/*
 * XREFs of EtwpExpandFileName @ 0x1407F7050
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140772F38 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1407F69A0 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140229714 (RtlStringCbPrintfW.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     EtwpGetDriverDataDosPath @ 0x1403D7A2C (EtwpGetDriverDataDosPath.c)
 *     _wcsnicmp @ 0x1403D9D70 (_wcsnicmp.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4, char a5)
{
  __int64 v5; // r12
  char v8; // r15
  char v9; // r13
  __int64 Length; // rax
  __int64 v11; // r10
  unsigned __int16 *v12; // rdi
  unsigned int v13; // esi
  size_t v14; // rbx
  __int64 result; // rax
  wchar_t *Pool2; // rax
  const WCHAR *v17; // rsi
  const WCHAR *v18; // r9
  const WCHAR *v19; // rdx
  NTSTATUS v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // rbx
  unsigned __int16 *v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v5 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = a2->Length;
  v11 = a3 != 0 ? 8 : 0;
  v12 = 0LL;
  v13 = 0;
  if ( a1 )
  {
    v8 = 1;
    v14 = Length + v11 + 2 + *a4;
  }
  else
  {
    v14 = Length + v11 + 2;
  }
  if ( !wcsnicmp(a2->Buffer, L"%SystemRoot%", 0xCuLL) )
  {
    if ( a2->Length == 24 )
    {
      v9 = 1;
      v22 = *a4 + 54LL;
    }
    else
    {
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] != 92 )
      {
LABEL_24:
        v12 = (unsigned __int16 *)((char *)PsGetCurrentServerSiloGlobals() + 1264);
LABEL_25:
        v5 = 12LL;
        v14 += *v12 - 24LL;
        goto LABEL_6;
      }
      v22 = *a4;
      v8 = 1;
    }
    v14 += v22;
    goto LABEL_24;
  }
  if ( a5 && !wcsnicmp(a2->Buffer, L"%DriverData%", 0xCuLL) )
  {
    result = EtwpGetDriverDataDosPath(&v26);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v12 = v26;
    goto LABEL_25;
  }
LABEL_6:
  if ( !v27 && !v8 && !v12 )
    return v13;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1350005829LL);
  v17 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( v9 )
  {
    v20 = RtlStringCbPrintfW(
            Pool2,
            v14,
            L"%ws%ws%ws%ws",
            *((_QWORD *)v12 + 1),
            L"\\system32\\Logfiles\\WMI\\",
            *((_QWORD *)a4 + 1),
            L".etl");
  }
  else
  {
    v18 = &word_140888010;
    if ( v8 )
      v19 = (const WCHAR *)*((_QWORD *)a4 + 1);
    else
      v19 = &word_140888010;
    if ( v12 )
      v18 = (const WCHAR *)*((_QWORD *)v12 + 1);
    v20 = RtlStringCbPrintfW(Pool2, v14, L"%ws%ws%ws", v18, &a2->Buffer[v5], v19);
  }
  v21 = v20;
  if ( v27 )
  {
    v23 = -1LL;
    v24 = -1LL;
    do
      ++v24;
    while ( v17[v24] );
    v25 = v14 - 2 * v24;
    do
      ++v23;
    while ( v17[v23] );
    v21 = RtlStringCbPrintfW((NTSTRSAFE_PWSTR)&v17[v23], v25, L".%03d", v27);
  }
  RtlFreeUnicodeString(a2);
  RtlInitUnicodeString(a2, v17);
  return v21;
}
