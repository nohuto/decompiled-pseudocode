/*
 * XREFs of ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801EB67C
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801EA384 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180111E98 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801EB378 (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 *     ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801EBB4C (-LockForDraw@CComputeScribbleFramebuffer@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_po.c)
 *     McTemplateU0xxxq_EventWriteTransfer @ 0x1801EBCF8 (McTemplateU0xxxq_EventWriteTransfer.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x1801EC934 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___ @ 0x1801ECEA0 (CComputeScribbleSynchronizer--BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___.c)
 *     ?EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z @ 0x1801ED01C (-EndRenderOperation@CComputeScribbleSynchronizer@@QEAAXPEAUID3D12CommandQueue@@_K@Z.c)
 *     ?WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z @ 0x1801ED290 (-WaitForOperationComplete12@CComputeScribbleSynchronizer@@QEAAJ_K@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1802624BC (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 */

__int64 __fastcall CComputeScribbleFramebuffer::DispatchScribbles(
        CComputeScribbleFramebuffer *this,
        struct ID3D12CommandQueue *a2,
        struct CComputeScribbleStopwatch *a3,
        __int64 a4,
        struct IDCompositionDirectInkSuperWetRenderer *a5,
        struct IUnknown *a6,
        struct ComputeScribbleLatencyData *a7)
{
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rax
  struct ComputeScribbleLatencyData *v14; // r13
  unsigned __int64 v15; // r12
  int v16; // eax
  int v17; // ebp
  __int64 v18; // rcx
  __int64 v20; // rcx
  int v21; // eax
  enum D3D12_RESOURCE_STATES v22; // r8d
  unsigned int v23; // ebp
  __int64 v24; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v26; // rax
  float v27; // xmm0_4
  unsigned __int64 v28; // rbx
  int v29; // ecx
  float v30; // xmm0_4
  struct ID3D12CommandQueue *v31; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v34; // [rsp+70h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0xq_EventWriteTransfer(
      (__int64)this,
      &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start,
      a4,
      *((_DWORD *)this + 61));
  CComputeScribbleFramebuffer::LockForDraw(this, &v34);
  v11 = 0;
  if ( !*((_QWORD *)this + 9) )
    goto LABEL_7;
  v12 = *((_QWORD *)this + 6);
  v31 = a2;
  v13 = CComputeScribbleSynchronizer::BeginRenderInternal__lambda_a6417a357a345f1ca7153e0f2978444f___(v12, &v31);
  v14 = a7;
  v15 = v13;
  v16 = CComputeScribbleFramebuffer::BuildCommandList(this, a3, a5, a6, a7);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v16);
    v11 = v17;
    CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v15);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0xq_EventWriteTransfer(v18, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop, a4, *((_DWORD *)this + 61));
LABEL_7:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v34);
    return v11;
  }
  v32 = *((_QWORD *)this + 5);
  ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(a2, 1LL, &v32);
  CComputeScribbleSynchronizer::EndRenderOperation(*((CComputeScribbleSynchronizer **)this + 6), a2, v15);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v20, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Stop, a4, *((_DWORD *)this + 61));
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v34);
  v21 = CComputeScribbleSynchronizer::WaitForOperationComplete12(*((CComputeScribbleSynchronizer **)this + 6), v15);
  v23 = v21;
  if ( v21 >= 0 )
  {
    if ( g_LockAndReadComputeScribble )
      DebugInspectSurface(a2, *((struct ID3D12Resource **)this + 3), v22);
    v24 = *((_QWORD *)a3 + 6);
    ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(a3);
    v26 = 0LL;
    v27 = (float)(ElapsedTimeMs / 1000.0) * *((float *)a3 + 2);
    if ( v27 >= 9.223372e18 )
    {
      v27 = v27 - 9.223372e18;
      if ( v27 < 9.223372e18 )
        v26 = 0x8000000000000000uLL;
    }
    v28 = *((_QWORD *)a3 + 6) + v26 + (unsigned int)(int)v27;
    *((_QWORD *)v14 + 4) = v28;
    v30 = CComputeScribbleStopwatch::GetElapsedTimeMs(a3) * 1000.0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0xxxq_EventWriteTransfer(
        v29,
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_GPUFINISHED,
        a4,
        v24,
        v28,
        (int)v30);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v21);
    return v23;
  }
}
