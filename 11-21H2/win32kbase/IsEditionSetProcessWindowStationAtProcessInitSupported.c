/*
 * XREFs of IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00BE17C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C020BBA8 (ApiSetEditionSetProcessWindowStationAtProcessInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetProcessWindowStationAtProcessInitSupported()
{
  if ( qword_1C029BC08 )
    return qword_1C029BC08();
  else
    return 3221225659LL;
}
