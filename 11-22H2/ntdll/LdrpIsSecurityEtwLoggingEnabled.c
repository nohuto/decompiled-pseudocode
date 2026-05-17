/*
 * XREFs of LdrpIsSecurityEtwLoggingEnabled @ 0x180011018
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpSearchPath @ 0x18002E074 (LdrpSearchPath.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 */

char __fastcall LdrpIsSecurityEtwLoggingEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  v7 = 0;
  v8 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 )
  {
    v9 = (unsigned int)RtlGetCurrentServiceSessionId(v9, v4, v5, v6)
       ? (__int64)NtCurrentPeb()->SharedData + 555
       : 2147353477LL;
    if ( (*(_BYTE *)v9 & 0x40) != 0 )
      return 1;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v4, v5, v6) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v11, v13, v14) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
      return 1;
  }
  return v7;
}
