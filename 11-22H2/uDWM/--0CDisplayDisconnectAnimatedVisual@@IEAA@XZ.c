/*
 * XREFs of ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x1800479BC
 * Callers:
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800478EC (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180047A10 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::CDisplayDisconnectAnimatedVisual(
        CDisplayDisconnectAnimatedVisual *this)
{
  CDisplayDisconnectAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayDisconnectAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayDisconnectAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_BYTE *)this + 456) = 0;
  result = this;
  *((_BYTE *)this + 312) = 1;
  return result;
}
