/*
 * XREFs of WCSToMBEx @ 0x1C014E8DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00D4FCC (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnIMECONTROL @ 0x1C0223470 (SfnIMECONTROL.c)
 * Callees:
 *     ConvertToAndFromWideChar @ 0x1C00E7F50 (ConvertToAndFromWideChar.c)
 */

__int64 __fastcall WCSToMBEx(
        unsigned __int16 a1,
        WCHAR *a2,
        int a3,
        PCHAR *a4,
        int MaxBytesInMultiByteString,
        ULONG BytesInMultiByteString)
{
  int v6; // eax
  ULONG BytesInUnicodeString; // r8d
  NTSTATUS v8; // eax
  __int64 result; // rax
  __int64 v10; // rax

  BytesInMultiByteString = 0;
  v6 = a3;
  if ( !MaxBytesInMultiByteString || !a3 || !a2 )
    return 0LL;
  if ( a3 == -1 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    v6 = v10 + 1;
  }
  else if ( a3 < -1 )
  {
    return 0LL;
  }
  if ( MaxBytesInMultiByteString < 0 )
    return 0LL;
  BytesInUnicodeString = 2 * v6;
  if ( a1 == NlsAnsiCodePage || !a1 )
  {
    v8 = RtlUnicodeToMultiByteN(*a4, MaxBytesInMultiByteString, &BytesInMultiByteString, a2, BytesInUnicodeString);
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      return BytesInMultiByteString;
    return 0LL;
  }
  result = ConvertToAndFromWideChar(a1, a2, BytesInUnicodeString, *a4, MaxBytesInMultiByteString, 0);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
