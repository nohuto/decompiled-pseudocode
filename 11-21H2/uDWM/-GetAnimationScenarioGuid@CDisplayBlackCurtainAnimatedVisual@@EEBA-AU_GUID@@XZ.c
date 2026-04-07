/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayBlackCurtainAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x1800496C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayBlackCurtainAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayBlackCurtainAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_18011B330;
  return result;
}
