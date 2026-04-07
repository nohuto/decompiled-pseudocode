/*
 * XREFs of ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800AB92C
 * Callers:
 *     ?GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B9550 (-GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B9F30 (-GetTotalDuration@CDisplayDuplicateToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BAE50 (-GetTotalDuration@CDisplayExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BB5A0 (-GetTotalDuration@CDisplayExtendToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BC3F0 (-GetTotalDuration@CDisplayMixedModeAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BE160 (-GetTotalDuration@CDisplaySecondaryOnlyAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BE760 (-GetTotalDuration@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEBAJPEAI@Z.c)
 *     ?GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z @ 0x1800BEE60 (-GetTotalDuration@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEBAJPEAI@Z.c)
 * Callees:
 *     ?GetAnimationDuration@@YAJHHPEAK@Z @ 0x18000EAFC (-GetAnimationDuration@@YAJHHPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
    (__int64)"clientcore\\windows\\dwm\\udwm\\animationhelpers.cpp",
    (const char *)(unsigned int)AnimationDuration);
  return v8;
}
