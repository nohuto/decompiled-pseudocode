/*
 * XREFs of IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C00BE1A8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C020BD10 (ApiSetEditionSetThreadDesktopAtThreadInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsEditionSetThreadDesktopAtThreadInitSupported()
{
  if ( qword_1C029BCB8 )
    return qword_1C029BCB8();
  else
    return 3221225659LL;
}
