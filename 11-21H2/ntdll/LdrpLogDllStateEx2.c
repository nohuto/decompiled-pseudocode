/*
 * XREFs of LdrpLogDllStateEx2 @ 0x18001DE58
 * Callers:
 *     LdrpGetDllPath @ 0x18001DBFC (LdrpGetDllPath.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 */

void __fastcall LdrpLogDllStateEx2(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  void *v6; // rbx
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
        v6 = &unk_180132BF4;
      v12 = RtlCreateUnicodeString(&v15, v6);
      v13 = RtlCreateUnicodeString(&UnicodeString, a3);
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
