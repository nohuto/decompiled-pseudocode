/*
 * XREFs of PspDeleteExternalServerSiloState @ 0x1409ACFB8
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x1409ACCF0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspInitializeServerSiloDeferred @ 0x1409AD2A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     PsGetPermanentSiloContext @ 0x14031CAD0 (PsGetPermanentSiloContext.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CF20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CF40 (PsAttachSiloToCurrentThread.c)
 *     ExpNlsDeleteSiloState @ 0x140609E24 (ExpNlsDeleteSiloState.c)
 *     ObCleanupSiloState @ 0x14097AFD0 (ObCleanupSiloState.c)
 *     RtlNlsDeleteState @ 0x1409B9A48 (RtlNlsDeleteState.c)
 *     SeShutdownServerSilo @ 0x1409C90E0 (SeShutdownServerSilo.c)
 *     EtwShutdown @ 0x1409E2DAC (EtwShutdown.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1409F82A4 (ExpTimeZoneCleanupSiloState.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A1C148 (CmpStopSiloKeyLockTracker.c)
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
