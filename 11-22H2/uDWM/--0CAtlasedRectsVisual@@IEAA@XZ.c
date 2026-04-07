/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180012C3C
 * Callers:
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180012B6C (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800221E0 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 280) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
