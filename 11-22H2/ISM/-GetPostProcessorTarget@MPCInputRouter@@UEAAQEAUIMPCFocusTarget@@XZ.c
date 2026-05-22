/*
 * XREFs of ?GetPostProcessorTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18002D8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::GetPostProcessorTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 5);
}
