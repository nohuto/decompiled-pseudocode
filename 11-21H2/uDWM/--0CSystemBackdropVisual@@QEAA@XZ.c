/*
 * XREFs of ??0CSystemBackdropVisual@@QEAA@XZ @ 0x1800E0DF8
 * Callers:
 *     ?Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z @ 0x1800E0FF0 (-Create@CSystemBackdropVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CSystemBackdropVisual::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_OWORD *)(v1 + 288) = 0LL;
  *(_BYTE *)(v1 + 304) = 0;
  return (CSystemBackdropVisual *)v1;
}
