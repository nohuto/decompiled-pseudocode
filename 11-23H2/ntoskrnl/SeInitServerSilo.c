/*
 * XREFs of SeInitServerSilo @ 0x1409C8DF0
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AD0A0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140297694 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x1402AF900 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14031CC90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14031CCB0 (PsAttachSiloToCurrentThread.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D33C (SepDeleteLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x1407BD4AC (SepCreateLogonSessionTrack.c)
 *     SepReferenceLogonSessionSilo @ 0x1407C334C (SepReferenceLogonSessionSilo.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 */

__int64 __fastcall SeInitServerSilo(__int64 a1)
{
  __int64 *ServerSiloGlobals; // rsi
  struct _LIST_ENTRY *v3; // rcx
  struct _LIST_ENTRY *v4; // rbp
  signed int LogonSessionTrack; // ebx

  if ( PsIsHostSilo(a1) )
    KeBugCheckEx(0x33u, 0LL, 0LL, 0LL, 0LL);
  ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(a1);
  v4 = PsAttachSiloToCurrentThread(v3);
  LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeSystemAuthenticationId);
  if ( LogonSessionTrack >= 0 )
  {
    LogonSessionTrack = SepReferenceLogonSessionSilo(&SeSystemAuthenticationId, a1, ServerSiloGlobals + 92);
    if ( LogonSessionTrack >= 0 )
    {
      LogonSessionTrack = SepCreateLogonSessionTrack((__int64)&SeAnonymousAuthenticationId);
      if ( LogonSessionTrack < 0 )
        goto LABEL_9;
      LogonSessionTrack = SepReferenceLogonSessionSilo(&SeAnonymousAuthenticationId, a1, ServerSiloGlobals + 93);
      if ( LogonSessionTrack >= 0 )
      {
        LogonSessionTrack = SepInitializationPhase1() == 0 ? 0xC0000001 : 0;
        goto LABEL_9;
      }
    }
    SepDeleteLogonSessionTrack(&SeSystemAuthenticationId, 0);
  }
LABEL_9:
  PsDetachSiloFromCurrentThread(v4);
  return (unsigned int)LogonSessionTrack;
}
