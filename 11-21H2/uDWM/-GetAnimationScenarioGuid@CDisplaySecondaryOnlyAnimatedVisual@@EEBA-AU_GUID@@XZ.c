/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180049700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplaySecondaryOnlyAnimatedVisual::GetAnimationScenarioGuid(
        CDisplaySecondaryOnlyAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_18011B340;
  return result;
}
