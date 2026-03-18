/*
 * XREFs of CmpCallbackFatalFilter @ 0x140A0F590
 * Callers:
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     CmpFireCleanupNotifications @ 0x1407DBB44 (CmpFireCleanupNotifications.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpCallbackFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
