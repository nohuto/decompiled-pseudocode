/*
 * XREFs of ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C007D0A4
 * Callers:
 *     PowerConnectionEvent @ 0x1C007AD94 (PowerConnectionEvent.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1C007CFEC (-UpdateAdaptiveSessionState@@YAXXZ.c)
 * Callees:
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C007D100 (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ApplyAdaptiveSessionState(struct _PO_ADAPTIVE_SESSION_STATE *a1, __int64 a2, __int64 a3)
{
  if ( *((_BYTE *)a1 + 8) && *((_DWORD *)a1 + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  giPowerOffTimeOutMs = 1000 * *(_DWORD *)a1;
  giPowerSessionActivityTimeOutMs = 1000 * *((_DWORD *)a1 + 1);
  gPowerAdaptiveState = *((unsigned __int8 *)a1 + 8);
  if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
  {
    if ( qword_1C029C398 )
      qword_1C029C398();
  }
}
