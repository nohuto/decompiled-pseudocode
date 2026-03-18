/*
 * XREFs of ??1?$unique_ptr@VCComputeScribbleScheduler@@U?$default_delete@VCComputeScribbleScheduler@@@std@@@std@@QEAA@XZ @ 0x1801FB368
 * Callers:
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x18020289C (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1802023A8 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CComputeScribbleScheduler>::~unique_ptr<CComputeScribbleScheduler>(
        CComputeScribbleScheduler **a1)
{
  CComputeScribbleScheduler *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(*a1);
    operator delete(v1);
  }
}
