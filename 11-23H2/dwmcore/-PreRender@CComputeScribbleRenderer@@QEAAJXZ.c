/*
 * XREFs of ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801FB7DC
 * Callers:
 *     ?AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCDirtyRegion@@@Z @ 0x1800CC3A0 (-AddComputeScribbleInvalidRects@CLegacySwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRectU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E0C0C (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18012DBFE (McTemplateU0x_EventWriteTransfer.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18013171C (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     McTemplateU0xqqqqt_EventWriteTransfer @ 0x1801FBB20 (McTemplateU0xqqqqt_EventWriteTransfer.c)
 *     ?SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z @ 0x180203AE0 (-SetScannedOutBuffer@CComputeScribbleScheduler@@QEAAXII@Z.c)
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1802044CC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::PreRender(CComputeScribbleRenderer *this)
{
  __int64 v1; // r8
  char v3; // r12
  unsigned int v4; // r15d
  __int64 v5; // rcx
  CComputeScribbleFramebuffer *v6; // r14
  void *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v14[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *((_QWORD *)this + 2);
  v3 = *((_BYTE *)this + 48);
  ++*((_QWORD *)this + 3);
  v4 = *(_DWORD *)(v1 + 272);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 248) + 8LL * (v4 % *(_DWORD *)(v1 + 316)));
  v6 = *(CComputeScribbleFramebuffer **)(v5 + 96);
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 49) )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v7 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop;
LABEL_8:
        McTemplateU0x_EventWriteTransfer(v5, (__int64)v7);
      }
    }
  }
  else if ( *((_BYTE *)this + 49) )
  {
    *((_BYTE *)this + 48) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v7 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start;
      goto LABEL_8;
    }
  }
  if ( *((_BYTE *)this + 48) )
  {
    wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 5);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 8LL))(*((_QWORD *)this + 2));
    v9 = *((_QWORD *)this + 2);
    *(_OWORD *)v14 = 0LL;
    v10 = v8;
    v15 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 32LL))(v9, v14);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblerenderer.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    CComputeScribbleFramebuffer::AcquireForRender(v6, *((_QWORD *)this + 3));
    if ( !v3 )
      CComputeScribbleScheduler::SetScannedOutBuffer(
        *((CComputeScribbleScheduler **)this + 4),
        (*(_DWORD *)(*((_QWORD *)this + 2) + 316LL) - (v10 - v14[0]) % 3 + v4 - 1) % 3,
        v14[0]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xqqqqt_EventWriteTransfer(
        v14[0],
        (unsigned int)&EVTDESC_COMPUTESCRIBBLE_PRERENDER,
        *((_QWORD *)this + 3),
        v4,
        v10,
        v14[0],
        v14[2],
        v10 > v14[0]);
  }
  else
  {
    CComputeScribbleFramebuffer::SaveDirtyForPreRender((int **)v6);
  }
  return 0LL;
}
