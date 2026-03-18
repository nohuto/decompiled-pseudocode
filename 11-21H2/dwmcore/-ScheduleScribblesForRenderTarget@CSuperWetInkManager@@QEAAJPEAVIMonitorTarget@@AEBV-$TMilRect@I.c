/*
 * XREFs of ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801A73B8 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribble@@@Z @ 0x1801A7478 (-EnqueueSuperWetScribbleLocally@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEAVCComputeScribb.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801A87F0 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1801A8838 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 *     ?UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAUD2D_RECT_U@@@Z @ 0x1801A8E30 (-UpdateRenderStateClip@CSuperWetInkManager@@CA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z @ 0x1801E48D8 (-ScheduleScribble@CComputeScribbleRenderer@@QEAAJPEA_N@Z.c)
 */

__int64 __fastcall CSuperWetInkManager::ScheduleScribblesForRenderTarget(
        CSuperWetInkManager *this,
        struct IMonitorTarget *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r14d
  struct CSuperWetSource *v6; // rdx
  struct CSuperWetInkManager::SuperWetStroke *v10; // rax
  __int64 v11; // rcx
  struct CSuperWetInkManager::SuperWetStroke *v12; // r13
  __int64 v13; // rcx
  bool v14; // al
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int (__fastcall *v22)(__int64, __int64, char *, struct CComputeScribble **); // rbx
  CSuperWetInkManager *v23; // rcx
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rdx
  CComputeScribbleRenderer *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // [rsp+30h] [rbp-10h] BYREF
  struct CComputeScribble *v35; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  bool v37; // [rsp+80h] [rbp+40h] BYREF
  bool *v38; // [rsp+98h] [rbp+58h]

  v38 = a4;
  v4 = 0;
  v6 = (struct CSuperWetSource *)*((_QWORD *)this + 1);
  *a4 = 0;
  if ( !v6 )
    return 0LL;
  v10 = CSuperWetInkManager::TryLookupDataForSource(this, v6);
  v12 = v10;
  if ( *((struct IMonitorTarget **)v10 + 1) != a2 )
    return 0LL;
  if ( *(_QWORD *)(*(_QWORD *)v11 + 496LL) - *((_QWORD *)v10 + 11) >= 0xAuLL )
  {
    CSuperWetInkManager::DeactivateCurrentSource(this);
    return 0LL;
  }
  if ( !*((_BYTE *)v10 + 96) )
  {
    v37 = 0;
    if ( (int)CSuperWetInkManager::TryReadyForCurrentFrame(this, v10, &v37) >= 0 )
    {
      v14 = v37;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
        McTemplateU0q_EventWriteTransfer(v13, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 18LL);
      CSuperWetInkManager::DeactivateCurrentSource(this);
      v14 = 0;
    }
    if ( !v14 )
      return 0LL;
  }
  *((_BYTE *)v12 + 96) = 0;
  v15 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( !(unsigned __int8)CSuperWetInkManager::UpdateRenderStateClip((char *)v12 + 72, a3, v15, (char *)v12 + 44) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0q_EventWriteTransfer(v16, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 17LL);
    return 0LL;
  }
  v17 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)a2 + 152LL))(a2);
  v18 = *(int *)(*(_QWORD *)(v17 + 8) + 12LL) + v17 + 8;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  v20 = *((_QWORD *)this + 1);
  v35 = 0LL;
  v21 = v19;
  v22 = *(int (__fastcall **)(__int64, __int64, char *, struct CComputeScribble **))(*(_QWORD *)v20 + 296LL);
  wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset(&v35);
  if ( v22(v20, v21, (char *)v12 + 16, &v35) >= 0 )
  {
    v24 = CSuperWetInkManager::EnqueueSuperWetScribbleLocally(v23, a2, v35);
    v25 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
        (const char *)(unsigned int)v24);
      v4 = v25;
      goto LABEL_20;
    }
    v27 = *(_QWORD *)a2;
    v34 = 0LL;
    v28 = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(v27 + 152))(a2);
    v29 = v28 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v34);
    v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD **))(v29 + 8))(
            v29 + 8,
            &GUID_d1f4aa89_764d_40c8_b46d_5c9e9777fb37,
            &v34);
    v26 = v30;
    if ( v30 >= 0 )
    {
      v32 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(_QWORD *))(*v34 + 264LL))(v34);
      v30 = CComputeScribbleRenderer::ScheduleScribble(v32, v38);
      v26 = v30;
      if ( v30 >= 0 )
      {
        v26 = 0;
LABEL_27:
        if ( v34 )
        {
          v33 = (__int64)v34 + *(int *)(v34[1] + 4LL) + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_29;
      }
      v31 = 265LL;
    }
    else
    {
      v31 = 260LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_27;
  }
  CSuperWetInkManager::DeactivateCurrentSource(this);
LABEL_20:
  v26 = v4;
LABEL_29:
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v35);
  return v26;
}
