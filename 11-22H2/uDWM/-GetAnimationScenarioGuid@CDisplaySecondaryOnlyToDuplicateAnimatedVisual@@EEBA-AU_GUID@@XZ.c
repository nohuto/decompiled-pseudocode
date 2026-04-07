/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180058F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_180121098;
  return result;
}
