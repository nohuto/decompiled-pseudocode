/*
 * XREFs of LdrpCallInitRoutine @ 0x180028BA4
 * Callers:
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     LdrpCallTlsInitializers @ 0x1800297D4 (LdrpCallTlsInitializers.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800E64B0 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 */

char __fastcall LdrpCallInitRoutine(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // r9d
  char v27; // [rsp+48h] [rbp-38h]

  v5 = a3;
  v12 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
    v13 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v13 = 2147353476LL;
  if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v14 = 2147353477LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8, v10, v11) )
      v25 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v25 = 2147353477LL;
    if ( (*(_BYTE *)v25 & 0x20) != 0 )
    {
      LOBYTE(v24) = v5;
      LdrpLogEtwEvent(5283, a2, 0, v24, 0LL, 0LL);
    }
  }
  else
  {
    v14 = 2147353477LL;
  }
  v27 = a1(a2, v5, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v16, v15, v17, v18) )
    v12 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19, v21, v22) )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v14 & 0x20) != 0 )
    {
      LOBYTE(v26) = -1;
      LOBYTE(v21) = -1;
      LdrpLogEtwEvent(5270, a2, v21, v26, 0LL, 0LL);
    }
  }
  if ( !v27 && v5 == 1 )
  {
    LOBYTE(v21) = 1;
    LdrpLogError(3221225794LL, 5270LL, v21, 0LL);
  }
  return v27;
}
