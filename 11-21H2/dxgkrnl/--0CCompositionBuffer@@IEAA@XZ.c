/*
 * XREFs of ??0CCompositionBuffer@@IEAA@XZ @ 0x1C0007D60
 * Callers:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0007C70 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0078694 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 35) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  *((_BYTE *)this + 42) = 0;
  memset((char *)this + 48, 0, 0xD0uLL);
  *((_DWORD *)this + 72) = 0;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  return this;
}
