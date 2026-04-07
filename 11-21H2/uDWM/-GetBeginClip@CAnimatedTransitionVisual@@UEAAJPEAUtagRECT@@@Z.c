/*
 * XREFs of ?GetBeginClip@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x1800491C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetBeginClip(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 888);
  return result;
}
