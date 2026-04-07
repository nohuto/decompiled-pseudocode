/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x180045F40
 * Callers:
 *     ?Create@CAccent@@SAJPEAPEAV1@@Z @ 0x180045E70 (-Create@CAccent@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx
  CAccent *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 364) = 0xFFFFFF;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_WORD *)(v1 + 381) = 0;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_BYTE *)(v1 + 380) = 0;
  *(_QWORD *)(v1 + 384) = 0LL;
  result = (CAccent *)v1;
  *(_QWORD *)v1 = &CAccent::`vftable';
  return result;
}
