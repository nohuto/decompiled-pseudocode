/*
 * XREFs of CloseHandle_0 @ 0x18004A3FE
 * Callers:
 *     ReportHangInternal @ 0x180052C14 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}
