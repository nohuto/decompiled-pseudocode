/*
 * XREFs of IsGreIsCurrentProcessSystemCriticalSupported @ 0x1C003800C
 * Callers:
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C003772C (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     GdiProcessCallout @ 0x1C0037960 (GdiProcessCallout.c)
 *     DereferenceW32Thread @ 0x1C0037F20 (DereferenceW32Thread.c)
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreIsCurrentProcessSystemCriticalSupported()
{
  if ( qword_1C0294E58 )
    return qword_1C0294E58();
  else
    return 3221225659LL;
}
