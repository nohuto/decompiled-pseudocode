/*
 * XREFs of CmpCallbackFatalFilter @ 0x140A0F640
 * Callers:
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1407DC0C4 (CmpFireCleanupNotifications.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
