/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C03A6880
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C00660C4 (DpiAcpiCallAcpiEventHandler.c)
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, PVOID Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, 3u, 0x77u, 0LL);
}
