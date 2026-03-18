/*
 * XREFs of ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801E4460
 * Callers:
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801E431C (-Create@CComputeScribbleRenderer@@SAJPEAVCLegacySwapChain@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801E9360 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIDCompositionDirectInkCommunicationPartner@@PEAVCLegacySwapChain@@PEAPEAV1@@Z @ 0x1801E97E0 (-Create@CComputeScribbleScheduler@@SAJPEAUIDXGIOutputDWM@@PEAUID3D12CommandQueue@@PEAUIDComposit.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180278D30 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 *     ?GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRenderer@@@Z @ 0x18027E684 (-GetDirectInkSuperWetRendererNoRef@CD3DDevice@@QEAAJPEAPEAUIDCompositionDirectInkSuperWetRendere.c)
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x18027E704 (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?GetDXGIOutputDWM@CLegacySwapChain@@QEBAJPEAPEAUIDXGIOutputDWM@@@Z @ 0x18028B410 (-GetDXGIOutputDWM@CLegacySwapChain@@QEBAJPEAPEAUIDXGIOutputDWM@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Initialize(CComputeScribbleRenderer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  int HighPriorityComputeCommandQueueNoRef; // ebx
  __int64 v5; // rdx
  CLegacySwapChain *v6; // rbx
  int DXGIOutputDWM; // eax
  int DirectInkFactory; // eax
  __int64 v9; // rax
  int v10; // eax
  CComputeScribbleScheduler *v11; // rdi
  int v13; // [rsp+20h] [rbp-38h]
  struct CLegacySwapChain *v14; // [rsp+20h] [rbp-38h]
  struct ID3D12CommandQueue *v15; // [rsp+30h] [rbp-28h] BYREF
  CComputeScribbleScheduler **v16; // [rsp+38h] [rbp-20h]
  struct CComputeScribbleScheduler *v17; // [rsp+40h] [rbp-18h] BYREF
  char v18; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  struct IDXGIOutputDWM *v20; // [rsp+80h] [rbp+28h] BYREF
  struct IDCompositionDirectInkCommunicationPartner *v21; // [rsp+88h] [rbp+30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v22; // [rsp+90h] [rbp+38h] BYREF
  struct IDCompositionDirectInkSuperWetRenderer *v23; // [rsp+98h] [rbp+40h] BYREF

  v2 = *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 8LL) + *((_QWORD *)this + 2) + 24LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetHighPriorityComputeCommandQueueNoRef((CD3DDevice *)v3, &v15);
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v5 = 88LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
    return (unsigned int)HighPriorityComputeCommandQueueNoRef;
  }
  HighPriorityComputeCommandQueueNoRef = CD3DDevice::GetDirectInkSuperWetRendererNoRef((CD3DDevice *)v3, &v23);
  if ( HighPriorityComputeCommandQueueNoRef < 0 )
  {
    v5 = 91LL;
    goto LABEL_3;
  }
  v20 = 0LL;
  v6 = (CLegacySwapChain *)*((_QWORD *)this + 2);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v20);
  DXGIOutputDWM = CLegacySwapChain::GetDXGIOutputDWM(v6, &v20);
  HighPriorityComputeCommandQueueNoRef = DXGIOutputDWM;
  if ( DXGIOutputDWM >= 0 )
  {
    v22 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory((CD2DContext *)(v3 + 16), &v22);
    if ( DirectInkFactory < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        101LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)DirectInkFactory,
        v13);
    v9 = *(_QWORD *)v22;
    v21 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkCommunicationPartner **))(v9 + 64))(
            v22,
            &v21);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        104LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v10,
        v13);
    v17 = 0LL;
    v16 = (CComputeScribbleScheduler **)((char *)this + 32);
    v14 = (struct CLegacySwapChain *)*((_QWORD *)this + 2);
    v18 = 1;
    HighPriorityComputeCommandQueueNoRef = CComputeScribbleScheduler::Create(v20, v15, v23, v21, v14, &v17);
    if ( v18 )
    {
      v11 = *v16;
      *v16 = v17;
      if ( v11 )
      {
        CComputeScribbleScheduler::~CComputeScribbleScheduler(v11);
        operator delete(v11);
      }
    }
    if ( HighPriorityComputeCommandQueueNoRef >= 0 )
      HighPriorityComputeCommandQueueNoRef = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)HighPriorityComputeCommandQueueNoRef);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
      (const char *)(unsigned int)DXGIOutputDWM);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v20);
  return (unsigned int)HighPriorityComputeCommandQueueNoRef;
}
