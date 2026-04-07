/*
 * XREFs of ?GetTotalDuration@CDisplayDuplicateAnimatedVisual@@EEBAJPEAI@Z @ 0x1800B5DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z @ 0x1800A66A0 (-GetAnimationsDuration@@YAJPEBUAnimationIdInfo@@_KPEAI@Z.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::GetTotalDuration(
        CDisplayDuplicateAnimatedVisual *this,
        unsigned int *a2)
{
  int v3; // eax
  int v4; // eax
  int AnimationsDuration; // eax
  unsigned int v6; // edi
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0;
  v3 = *((_DWORD *)this + 95);
  v8[0] = *((_DWORD *)this + 93);
  v8[1] = v3;
  v4 = *((_DWORD *)this + 94);
  v8[2] = v8[0];
  v8[3] = v4;
  AnimationsDuration = GetAnimationsDuration((const struct AnimationIdInfo *)v8, 2uLL, a2);
  v6 = AnimationsDuration;
  if ( AnimationsDuration >= 0 )
  {
    *a2 += 67;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (int)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)AnimationsDuration);
    return v6;
  }
}
