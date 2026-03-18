/*
 * XREFs of ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x18020485C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1802034A4 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x18012DEAC (McTemplateU0xq_EventWriteTransfer.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x180204578 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180204D08 (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x180204E6C (McTemplateU0xxxq_EventWriteTransfer.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1802096D0 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x180209C40 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z @ 0x180209DB0 (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z.c)
 *     ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x18020A024 (-WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x180272338 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::DispatchScribbles(
        CComputeScribbleFramebuffer *this,
        struct ID3D12CommandQueue *a2,
        struct CComputeScribbleStopwatch *a3,
        int a4,
        struct IDCompositionDirectInkSuperWetRenderer *a5,
        struct IUnknown *a6,
        struct ComputeScribbleLatencyData *a7)
{
  __int64 v11; // rax
  struct ComputeScribbleLatencyData *v12; // r13
  unsigned __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // eax
  enum D3D12_RESOURCE_STATES v20; // r8d
  unsigned int v21; // edi
  __int64 v22; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v24; // rax
  float v25; // xmm0_4
  unsigned __int64 v26; // rbx
  int v27; // ecx
  float v28; // xmm0_4
  __int64 v29; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer((__int64)this, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start);
  CComputeScribbleFramebuffer::LockForDraw(this, &SRWLock);
  if ( !*((_QWORD *)this + 9) )
  {
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return 0LL;
  }
  v11 = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___(*((PSRWLOCK *)this + 6));
  v12 = a7;
  v13 = v11;
  v14 = CComputeScribbleFramebuffer::BuildCommandList(this, a3, a5, a6, a7);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v29 = *((_QWORD *)this + 5);
    ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(
      a2,
      1LL,
      &v29);
    CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v13);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xq_EventWriteTransfer(v18, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    v19 = CComputeScribbleSynchronizer::WaitForOperationComplete12(*((CComputeScribbleSynchronizer **)this + 6), v13);
    v21 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
        (const char *)(unsigned int)v19);
      return v21;
    }
    if ( g_LockAndReadComputeScribble )
      DebugInspectSurface(a2, *((struct ID3D12Resource **)this + 3), v20);
    v22 = *((_QWORD *)a3 + 6);
    ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
    v24 = 0LL;
    v25 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
    if ( v25 >= 9.223372e18 )
    {
      v25 = v25 - 9.223372e18;
      if ( v25 < 9.223372e18 )
        v24 = 0x8000000000000000uLL;
    }
    v26 = *((_QWORD *)a3 + 6) + v24 + (unsigned int)(int)v25;
    *((_QWORD *)v12 + 4) = v26;
    v28 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xxxq_EventWriteTransfer(
        v27,
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_GPUFINISHED,
        a4,
        v22,
        v26,
        (int)v28);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
    (const char *)(unsigned int)v14);
  CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v13);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v16, (__int64)&EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v15;
}
