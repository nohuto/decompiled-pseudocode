/*
 * XREFs of IszzzCalcStartCursorHideSupported @ 0x1C0099B48
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     xxxSetProcessInitState @ 0x1C0099980 (xxxSetProcessInitState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IszzzCalcStartCursorHideSupported()
{
  if ( qword_1C029BCE8 )
    return qword_1C029BCE8();
  else
    return 3221225659LL;
}
