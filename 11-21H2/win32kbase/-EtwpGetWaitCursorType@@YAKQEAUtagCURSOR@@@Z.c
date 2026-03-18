/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C014C358
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C00B0AB0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0291CC8 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0293030 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0293AF8 )
    return 116LL;
  return result;
}
