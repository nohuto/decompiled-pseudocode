/*
 * XREFs of ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800BA0BC
 * Callers:
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B966C (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18005AE64 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayBlackCurtainAnimatedVisual *__fastcall CDisplayBlackCurtainAnimatedVisual::CDisplayBlackCurtainAnimatedVisual(
        CDisplayBlackCurtainAnimatedVisual *this)
{
  CDisplayBlackCurtainAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayBlackCurtainAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  result = this;
  *((_QWORD *)this + 55) = 0LL;
  *((_BYTE *)this + 448) = 0;
  *((_WORD *)this + 156) = 257;
  return result;
}
