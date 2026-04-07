/*
 * XREFs of ??0CDisplayDuplicateToExtendAnimatedVisual@@IEAA@XZ @ 0x1800B9A4C
 * Callers:
 *     ?Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BD0E4 (-Create@CDisplayDuplicateToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180047A10 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayDuplicateToExtendAnimatedVisual *__fastcall CDisplayDuplicateToExtendAnimatedVisual::CDisplayDuplicateToExtendAnimatedVisual(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayDuplicateToExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 128) = -1;
  *((_DWORD *)this + 129) = -1;
  *((_DWORD *)this + 130) = -1;
  *((_DWORD *)this + 131) = -1;
  *((_DWORD *)this + 132) = -1;
  *((_DWORD *)this + 133) = -1;
  return this;
}
