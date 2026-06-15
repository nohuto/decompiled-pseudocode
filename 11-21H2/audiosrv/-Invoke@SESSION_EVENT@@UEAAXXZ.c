/*
 * XREFs of ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180042050
 * Callers:
 *     <none>
 * Callees:
 *     VADServerUserSessionChanged @ 0x1800420A8 (VADServerUserSessionChanged.c)
 */

void __fastcall SESSION_EVENT::Invoke(SESSION_EVENT *this)
{
  VADServerUserSessionChanged(*((unsigned int *)this + 2), *((_QWORD *)this + 2));
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
  _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
  RtlReleaseResource(&PnpInfoResource);
}
