/*
 * XREFs of LdrpCallTlsInitializers @ 0x1800297D4
 * Callers:
 *     LdrpInitializeThread @ 0x180028888 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006B9F4 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     LdrpCallInitRoutine @ 0x180028BA4 (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x1800298BC (LdrpFindTlsEntry.c)
 *     RtlReportException @ 0x1800E8040 (RtlReportException.c)
 */

char __fastcall LdrpCallTlsInitializers(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 TlsEntry; // rbx
  char result; // al
  __int64 *v8; // rbx
  __int64 v9; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
  TlsEntry = LdrpFindTlsEntry(a2);
  result = RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v8 = *(__int64 **)(TlsEntry + 40);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        ++v8;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          1180LL,
          (__int64)"LdrpCallTlsInitializers",
          2LL,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v9,
          a2 + 72,
          *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(
                   (__int64 (__fastcall *)(__int64, _QWORD, __int64))ImageTlsCallbackCaller,
                   *(_QWORD *)(a2 + 48),
                   a1,
                   v9);
      }
    }
  }
  return result;
}
