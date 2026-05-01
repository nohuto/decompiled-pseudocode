/*
 * XREFs of GetTickCount_0 @ 0x18004A3F2
 * Callers:
 *     ReportHangInternal @ 0x180052C14 (ReportHangInternal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount_0()
{
  return GetTickCount();
}
