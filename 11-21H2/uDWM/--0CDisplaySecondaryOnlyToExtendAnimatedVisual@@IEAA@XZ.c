/*
 * XREFs of ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800BABD0
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B9E30 (-Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18005AE64 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyToExtendAnimatedVisual *__fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::CDisplaySecondaryOnlyToExtendAnimatedVisual(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyToExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = -1;
  *((_DWORD *)this + 119) = -1;
  *((_DWORD *)this + 120) = -1;
  return this;
}
