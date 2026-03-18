/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1409ACDB8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACAF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD0A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E640 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E680 (CmCleanupThreadInfo.c)
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x14031C840 (PsGetPermanentSiloContext.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CC90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CCB0 (PsAttachSiloToCurrentThread.c)
 *     ExpNlsDeleteSiloState @ 0x1406098D4 (ExpNlsDeleteSiloState.c)
 *     ObCleanupSiloState @ 0x14097ADD0 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x1409B9848 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x1409C8EE0 (SeShutdownServerSilo.c)
 *     EtwShutdown @ 0x1409E2B1C (EtwShutdown.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F8014 (ExpTimeZoneCleanupSiloState.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1BE98 (CmpStopSiloKeyLockTracker.c)
 */

__int64 __fastcall PspDeleteExternalServerSiloState(__int64 a1)
{
  struct _LIST_ENTRY *v2; // rcx
  volatile __int64 *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v4; // rbx
  _QWORD *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  ServerSiloGlobals = (volatile __int64 *)PsGetServerSiloGlobals(a1);
  if ( *((_QWORD *)ServerSiloGlobals + 108) )
  {
    v4 = PsAttachSiloToCurrentThread(v2);
    EtwShutdown(0LL);
    PsDetachSiloFromCurrentThread(v4);
  }
  SeShutdownServerSilo(a1, ServerSiloGlobals + 92);
  v7 = 0LL;
  CmpInitializeThreadInfo((__int64)&v7);
  BugCheckParameter2 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &BugCheckParameter2);
  if ( BugCheckParameter2 )
    CmpStopSiloKeyLockTracker(BugCheckParameter2);
  CmCleanupThreadInfo((__int64 *)&v7);
  ObCleanupSiloState(ServerSiloGlobals);
  v5 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 132);
  if ( v5 )
  {
    ExpNlsDeleteSiloState(v5);
    *((_QWORD *)ServerSiloGlobals + 132) = 0LL;
  }
  RtlNlsDeleteState(ServerSiloGlobals);
  return ExpTimeZoneCleanupSiloState(a1);
}
