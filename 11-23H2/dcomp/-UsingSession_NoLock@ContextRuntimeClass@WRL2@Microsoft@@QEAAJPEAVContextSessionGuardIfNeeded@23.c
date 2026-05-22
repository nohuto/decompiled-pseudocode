/*
 * XREFs of ?UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23@@Z @ 0x180087388
 * Callers:
 *     ?Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@PEAUVector3@674@1@Z @ 0x180087300 (-Message_ContextUpdated@Visual@Composition@UI@Windows@@QEAAJMPEAUVector2@Numerics@Foundation@4@P.c)
 *     ?AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019CF70 (-AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSIT.c)
 *     ?AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D1A0 (-AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$sp.c)
 *     ?DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D400 (-DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 *     ?PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019DCD0 (-PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextRuntimeClass::UsingSession_NoLock(
        Microsoft::WRL2::ContextRuntimeClass *this,
        struct Microsoft::WRL2::ContextSessionGuardIfNeeded *a2)
{
  int v4; // ebx

  if ( *(_QWORD *)a2 )
    Microsoft::WRL2::FailFast::Unexpected("UsingSession_NoLock preconditions");
  v4 = *(_DWORD *)(*((_QWORD *)this + 3) + 56LL);
  if ( v4 == GetCurrentThreadId() )
    return 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(*((struct _RTL_CRITICAL_SECTION **)this + 3));
  if ( (*((_BYTE *)this + 32) & 2) != 0 )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 3);
    return 0LL;
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(*((struct _RTL_CRITICAL_SECTION **)this + 3));
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  return 2147483667LL;
}
