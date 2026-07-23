/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x180126138
 * Callers:
 *     EtwpAddProviderTrackingInfo @ 0x18005E3DC (EtwpAddProviderTrackingInfo.c)
 * Callees:
 *     EtwpAddEventToBuffer @ 0x180002BE0 (EtwpAddEventToBuffer.c)
 *     RtlUnicodeToMultiByteN @ 0x180018840 (RtlUnicodeToMultiByteN.c)
 *     EtwpQueryRegString @ 0x18005DA34 (EtwpQueryRegString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

int __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  int result; // eax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 **v9; // rsi
  __int64 *v10; // rbx
  _DWORD v11[4]; // [rsp+40h] [rbp-358h] BYREF
  CHAR MultiByteString[272]; // [rsp+50h] [rbp-348h] BYREF
  WCHAR UnicodeString[264]; // [rsp+160h] [rbp-238h] BYREF

  v4 = a3 - *(_DWORD *)(a2 + 48);
  result = EtwpQueryRegString(
             L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion",
             L"BuildLabEx",
             UnicodeString,
             0x104u);
  if ( result < 0 || (result = RtlUnicodeToMultiByteN(MultiByteString, 0x104u, 0LL, UnicodeString, 0x208u), result < 0) )
  {
    v7 = (_QWORD *)(a2 + 88);
  }
  else
  {
    v7 = (_QWORD *)(a2 + 88);
    v8 = -1LL;
    do
      ++v8;
    while ( MultiByteString[v8] );
    result = EtwpAddEventToBuffer(a2, 66, (_QWORD *)(a2 + 88), MultiByteString, (int)v8 + 1, v4, v11);
    if ( result < 0 )
      return result;
    result = (v11[0] + 7) & 0xFFFFFFF8;
    v4 -= result;
  }
  v9 = (__int64 **)(a1 + 448);
  v10 = *v9;
  while ( v10 != (__int64 *)v9 )
  {
    result = EtwpAddEventToBuffer(a2, 64, v7, (char *)v10 + 28, *((_DWORD *)v10 + 5) - 4, v4, v11);
    if ( result < 0 )
      break;
    v10 = (__int64 *)*v10;
    result = (v11[0] + 7) & 0xFFFFFFF8;
    v4 -= result;
  }
  return result;
}
