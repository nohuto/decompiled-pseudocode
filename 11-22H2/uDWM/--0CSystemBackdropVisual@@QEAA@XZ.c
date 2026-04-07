/*
 * XREFs of ??0CSystemBackdropVisual@@QEAA@XZ @ 0x18001919C
 * Callers:
 *     ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180019068 (-Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x1800191E0 (--0CSpriteVisual@@QEAA@XZ.c)
 */

CSystemBackdropVisual *__fastcall CSystemBackdropVisual::CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  __int64 v1; // rcx
  CSystemBackdropVisual *result; // rax

  CSpriteVisual::CSpriteVisual(this);
  *(_QWORD *)v1 = &CSystemBackdropVisual::`vftable';
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_BYTE *)(v1 + 280) = 0;
  *(_QWORD *)(v1 + 284) = 0LL;
  result = (CSystemBackdropVisual *)v1;
  *(_OWORD *)(v1 + 292) = 0LL;
  return result;
}
