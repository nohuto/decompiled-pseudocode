/*
 * XREFs of ??0CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800BE600
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD670 (-Create@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180047A10 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyToDuplicateAnimatedVisual *__fastcall CDisplaySecondaryOnlyToDuplicateAnimatedVisual::CDisplaySecondaryOnlyToDuplicateAnimatedVisual(
        CDisplaySecondaryOnlyToDuplicateAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyToDuplicateAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 114) = -1;
  *((_DWORD *)this + 115) = -1;
  return this;
}
