/*
 * XREFs of ?GetCount@CompositionAnimationGroup@Composition@UI@Windows@@QEAAHXZ @ 0x1800A3560
 * Callers:
 *     ?StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAUIAnimationObject@234@PEAV?$vector@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@V?$allocator@PEAVCompositionPropertyAnimator@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180152110 (-StartAnimationGroupWithIAnimationObject@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationGroup::GetCount(
        Windows::UI::Composition::CompositionAnimationGroup *this)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)*((_QWORD *)this + 21);
  result = 0LL;
  while ( v1 )
  {
    v1 = (_QWORD *)*v1;
    result = (unsigned int)(result + 1);
  }
  return result;
}
