/*
 * XREFs of CloseHandle_0 @ 0x18004A36E
 * Callers:
 *     ReportHangInternal @ 0x180052A14 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall CloseHandle_0(HANDLE hObject)
{
  return CloseHandle(hObject);
}
