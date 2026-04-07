/*
 * XREFs of ??0CButton@@IEAA@XZ @ 0x180036570
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800364B4 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180026FFC (--0CVisual@@IEAA@XZ.c)
 */

CButton *__fastcall CButton::CButton(CButton *this)
{
  __int64 v1; // rcx
  CButton *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)v1 = &CButton::`vftable';
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_DWORD *)(v1 + 336) = 0;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_DWORD *)(v1 + 368) = 0;
  *(_BYTE *)(v1 + 288) |= 1u;
  *(_DWORD *)(v1 + 384) = 1065353216;
  *(_DWORD *)(v1 + 400) = 1065353216;
  *(_DWORD *)(v1 + 404) = 1065353216;
  result = (CButton *)v1;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_DWORD *)(v1 + 408) = 2;
  return result;
}
