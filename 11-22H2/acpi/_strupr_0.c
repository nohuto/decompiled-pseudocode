/*
 * XREFs of _strupr_0 @ 0x1C0001A8B
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C004B314 (FindNSObjMainNoLock.c)
 *     DebugExpr @ 0x1C004D850 (DebugExpr.c)
 *     DebugNotify @ 0x1C004DB30 (DebugNotify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__cdecl strupr_0(char *String)
{
  return _strupr(String);
}
