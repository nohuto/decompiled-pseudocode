/*
 * XREFs of ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A66A0
 * Callers:
 *     ?GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B5DF0 (-GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B67D0 (-GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B76D0 (-GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B7E00 (-GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B8BD0 (-GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BA4B0 (-GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BA6C0 (-GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BADA0 (-GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x1800A64DC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 */

__int64 __fastcall GetAnimationsDuration(const struct AnimationIdInfo *a1, unsigned __int64 a2, unsigned int *a3)
{
  unsigned __int64 v3; // rbx
  int AnimationDuration; // eax
  unsigned int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  v3 = 0LL;
  if ( !a2 )
    return 0LL;
  while ( 1 )
  {
    AnimationDuration = GetAnimationDuration(*((_DWORD *)a1 + 2 * v3), *((_DWORD *)a1 + 2 * v3 + 1), &v11);
    v8 = AnimationDuration;
    if ( AnimationDuration < 0 )
      break;
    ++v3;
    *a3 += v11;
    if ( v3 >= a2 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (int)"clientcore\\windows\\dwm\\udwm\\animationhelpers.cpp",
    (const char *)(unsigned int)AnimationDuration);
  return v8;
}
