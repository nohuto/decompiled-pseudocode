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
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // r8
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // r9d
  char v16; // [rsp+48h] [rbp-38h]

  v8 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v10 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v14 = 2147353477LL;
    if ( (*(_BYTE *)v14 & 0x20) != 0 )
    {
      LOBYTE(v13) = a3;
      LdrpLogEtwEvent(5283, a2, 0, v13, 0LL, 0LL);
    }
  }
  else
  {
    v10 = 2147353477LL;
  }
  v16 = a1(a2, a3, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v15) = -1;
      LOBYTE(v11) = -1;
      LdrpLogEtwEvent(5270, a2, v11, v15, 0LL, 0LL);
    }
  }
  if ( !v16 && a3 == 1 )
  {
    LOBYTE(v11) = 1;
    LdrpLogError(3221225794LL, 5270LL, v11, 0LL);
  }
  return v16;
}
