/*
 * XREFs of ??0CDisplayExtendAnimatedVisual@@IEAA@XZ @ 0x1800B71D0
 * Callers:
 *     ?Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800B99C0 (-Create@CDisplayExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x18005AE64 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendAnimatedVisual *__fastcall CDisplayExtendAnimatedVisual::CDisplayExtendAnimatedVisual(
        CDisplayExtendAnimatedVisual *this)
{
  CDisplayExtendAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = -1;
  *((_DWORD *)this + 123) = -1;
  *((_DWORD *)this + 124) = -1;
  *((_DWORD *)this + 125) = -1;
  *((_DWORD *)this + 126) = -1;
  result = this;
  *((_BYTE *)this + 508) = 0;
  return result;
}
