/*
 * XREFs of ??0CText@@AEAA@XZ @ 0x1800470AC
 * Callers:
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180046FCC (-Create@CText@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 */

CText *__fastcall CText::CText(CText *this)
{
  CRenderDataVisual::CRenderDataVisual(this);
  *((_QWORD *)this + 37) = 0LL;
  *(_QWORD *)this = &CText::`vftable';
  memset_0((char *)this + 304, 0, 0x5CuLL);
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_DWORD *)this + 104) = -1;
  *((_DWORD *)this + 105) = -1;
  *((_QWORD *)this + 53) = 0x3FF0000000000000LL;
  return this;
}
