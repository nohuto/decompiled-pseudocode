/*
 * XREFs of IsEditionGetProcessWindowStationEntryPointSupported @ 0x1C009B49C
 * Callers:
 *     ApiSetEditionCreateWindowStationEntryPoint @ 0x1C009B230 (ApiSetEditionCreateWindowStationEntryPoint.c)
 *     ApiSetEditionGetProcessWindowStationEntryPoint @ 0x1C009B3A8 (ApiSetEditionGetProcessWindowStationEntryPoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionGetProcessWindowStationEntryPointSupported()
{
  if ( qword_1C029BC48 )
    return qword_1C029BC48();
  else
    return 3221225659LL;
}
