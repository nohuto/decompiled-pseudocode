/*
 * XREFs of LdrpLogDllStateEx2 @ 0x180031F1C
 * Callers:
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     LdrpGetDllPath @ 0x180031B6C (LdrpGetDllPath.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, _WORD *a2, _WORD *a3, __int64 a4)
{
  unsigned __int16 v4; // di
  _WORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  char *v11; // rcx
  char v12; // bl
  char v13; // al
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+40h] [rbp-18h] BYREF

  v15 = 0LL;
  v4 = a4;
  UnicodeString = 0LL;
  v6 = a2;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v10 = 2147353476LL;
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v11 = (unsigned int)RtlGetCurrentServiceSessionId(v10, v7, v8, v9)
        ? (char *)NtCurrentPeb()->SharedData + 555
        : (char *)2147353477;
    if ( (*v11 & 0x20) != 0 )
    {
      if ( !v6 )
        v6 = &unk_180137D3C;
      v12 = RtlCreateUnicodeString((__int64)&v15, v6);
      v13 = RtlCreateUnicodeString((__int64)&UnicodeString, a3);
      if ( v12 )
      {
        if ( v13 )
        {
          LdrpLogEtwEvent(v4, 0, 0, 0, (__int64)&UnicodeString, (__int64)&v15);
          RtlFreeUnicodeString(&UnicodeString);
        }
        RtlFreeUnicodeString(&v15);
      }
    }
  }
}
