/*
 * XREFs of IsModerncoreUserPowerInfoCalloutSupported @ 0x1C007D100
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x1C007D0A4 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsModerncoreUserPowerInfoCalloutSupported()
{
  if ( qword_1C029C390 )
    return qword_1C029C390();
  else
    return 3221225659LL;
}
