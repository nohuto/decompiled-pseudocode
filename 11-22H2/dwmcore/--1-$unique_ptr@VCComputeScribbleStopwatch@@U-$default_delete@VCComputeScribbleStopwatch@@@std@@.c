/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x1802027D8
 * Callers:
 *     ?Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z @ 0x180209AFC (-Create@CComputeScribbleStopwatch@@SAJPEAUID3D12CommandQueue@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1802029DC (--1CComputeScribbleStopwatch@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleStopwatch>::~unique_ptr<CComputeScribbleStopwatch>(
        CComputeScribbleStopwatch **a1)
{
  CComputeScribbleStopwatch *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleStopwatch::~CComputeScribbleStopwatch(*a1);
    operator delete(v1);
  }
}
