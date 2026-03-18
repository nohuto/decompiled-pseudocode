/*
 * XREFs of ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C005D5D8
 * Callers:
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C005AF60 (-zzzShowCursor@@YAH_N@Z.c)
 *     CheckCursorClipAccess @ 0x1C005D510 (CheckCursorClipAccess.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00AA3A4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C01A8AB8 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     ?_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z @ 0x1C01C0B70 (-_CreateEmptyCursorObject@@YAPEAUHICON__@@_N@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagTHREADINFO *_GetCurrentLogicalCursorThread(void)
{
  struct tagTHREADINFO *result; // rax

  result = PtiCurrentShared();
  if ( (*((_DWORD *)result + 318) & 0x8000000) != 0 )
    return (struct tagTHREADINFO *)*((_QWORD *)result + 190);
  return result;
}
