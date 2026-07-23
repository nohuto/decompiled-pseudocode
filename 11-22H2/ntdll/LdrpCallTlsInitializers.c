/*
 * XREFs of LdrpCallTlsInitializers @ 0x1800299A4
 * Callers:
 *     LdrpInitializeThread @ 0x180028A58 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x1800294B0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180051600 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006B9F8 (LdrpProcessDetachNode.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     RtlReleaseSRWLockShared @ 0x180026E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     LdrpCallInitRoutine @ 0x180028D74 (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x180029A8C (LdrpFindTlsEntry.c)
 *     RtlReportException @ 0x1800E6D10 (RtlReportException.c)
 */

void __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v5 = *(__int64 **)(TlsEntry + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrtls.c",
          1180,
          (__int64)"LdrpCallTlsInitializers",
          2u,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v6,
          a2 + 72,
          *(_QWORD *)(a2 + 48));
        LdrpCallInitRoutine(
          (__int64 (__fastcall *)(__int64, _QWORD, __int64))ImageTlsCallbackCaller,
          *(_QWORD *)(a2 + 48),
          a1,
          v6);
      }
    }
  }
}
