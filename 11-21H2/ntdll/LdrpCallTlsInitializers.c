/*
 * XREFs of LdrpCallTlsInitializers @ 0x180042C6C
 * Callers:
 *     LdrpInitializeThread @ 0x18003FC80 (LdrpInitializeThread.c)
 *     LdrShutdownThread @ 0x180041790 (LdrShutdownThread.c)
 *     LdrpProcessDetachNode @ 0x180052C04 (LdrpProcessDetachNode.c)
 *     LdrShutdownProcess @ 0x180054420 (LdrShutdownProcess.c)
 *     LdrpInitializeNode @ 0x1800732F4 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003AB90 (RtlReleaseSRWLockShared.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpCallInitRoutine @ 0x18003FFAC (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x180042D54 (LdrpFindTlsEntry.c)
 *     RtlReportException @ 0x1800E7EA0 (RtlReportException.c)
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
          1159,
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
