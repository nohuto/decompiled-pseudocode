/*
 * XREFs of ?GetAnimationScenarioGuid@CDisplayExtendToDuplicateAnimatedVisual@@EEBA?AU_GUID@@XZ @ 0x180049680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CDisplayExtendToDuplicateAnimatedVisual::GetAnimationScenarioGuid(
        CDisplayExtendToDuplicateAnimatedVisual *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = (struct _GUID)xmmword_18011B310;
  return result;
}
