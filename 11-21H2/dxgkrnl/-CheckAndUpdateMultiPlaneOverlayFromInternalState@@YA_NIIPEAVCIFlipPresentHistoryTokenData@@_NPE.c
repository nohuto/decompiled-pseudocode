/*
 * XREFs of ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0319174
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C015E714 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01965F0 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C02BF394 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C02BF424 (-ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@0@Z @ 0x1C02C1104 (-GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE@@QEAAXIPEAIPEAUtagRECT@@11PEAW4_D3DDDI_ROTATION@@.c)
 *     ?GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C02C1278 (-GetPlaneAllocationUnsafe@DISPLAY_SOURCE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C02C2904 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C02C29E8 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 */

char __fastcall CheckAndUpdateMultiPlaneOverlayFromInternalState(
        unsigned int a1,
        unsigned int a2,
        struct CIFlipPresentHistoryTokenData *a3,
        char a4,
        struct ADAPTER_RENDER *a5,
        struct ADAPTER_DISPLAY *a6,
        struct tagRECT *a7)
{
  struct ADAPTER_DISPLAY *v7; // r13
  __int64 v9; // r12
  __int64 v10; // rsi
  struct tagRECT *v11; // rbx
  const struct DXGALLOCATION *PlaneAllocationUnsafe; // r15
  __int128 v14; // xmm6
  __int64 v15; // rax
  enum D3DDDI_COLOR_SPACE_TYPE v16; // edi
  const struct tagRECT *v17; // r14
  const struct tagRECT *v18; // r8
  char v19; // di
  unsigned int v20[28]; // [rsp+78h] [rbp-61h] BYREF
  int v21; // [rsp+128h] [rbp+4Fh] BYREF
  char v22; // [rsp+140h] [rbp+67h]

  v22 = a4;
  v7 = a6;
  v9 = a1;
  v10 = a2;
  v11 = (struct tagRECT *)(*((_QWORD *)a6 + 16) + 4000LL * a1);
  PlaneAllocationUnsafe = DISPLAY_SOURCE::GetPlaneAllocationUnsafe((DISPLAY_SOURCE *)v11, a2);
  if ( PlaneAllocationUnsafe )
  {
    memset(v20, 0, 0x58uLL);
    DISPLAY_SOURCE::GetLatestPlaneAttributesUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      v20,
      (struct tagRECT *)&v20[1],
      (struct tagRECT *)&v20[5],
      (struct tagRECT *)&v20[9],
      (enum _D3DDDI_ROTATION *)&v20[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND *)&v20[14],
      (enum D3DDDI_COLOR_SPACE_TYPE *)&v20[18],
      &v20[20]);
    v14 = *(_OWORD *)(*(__int64 (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 8LL))(a3);
    v15 = *(_QWORD *)a3;
    *(_OWORD *)&v20[1] = v14;
    v16 = (*(unsigned int (__fastcall **)(struct CIFlipPresentHistoryTokenData *))(v15 + 112))(a3);
    v17 = a7;
    v20[18] = v16;
    if ( v22 )
    {
      v18 = a7;
      *a7 = v11[43];
      *(_OWORD *)&v20[5] = v14;
      *(_OWORD *)&v20[9] = v14;
      DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe((DISPLAY_SOURCE *)v11, (const struct tagRECT *)&v20[1], v18);
    }
    DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
      (DISPLAY_SOURCE *)v11,
      v10,
      PlaneAllocationUnsafe,
      v20[0],
      (const struct tagRECT *)&v20[1],
      (const struct tagRECT *)&v20[5],
      (const struct tagRECT *)&v20[9],
      (enum _D3DDDI_ROTATION)v20[13],
      (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v20[14],
      v16,
      v20[20]);
    v19 = 0;
    v21 = 0;
    LODWORD(a6) = 0;
    CheckMultiPlaneOverlayInternal3(v9, a5, v7, &v21, (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)&a6);
    DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe((DISPLAY_SOURCE *)v11, v10);
    if ( v21 )
    {
      v19 = 1;
      DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        (DISPLAY_SOURCE *)v11,
        v10,
        PlaneAllocationUnsafe,
        1u,
        v20[0],
        (const struct tagRECT *)&v20[1],
        (const struct tagRECT *)&v20[5],
        (const struct tagRECT *)&v20[9],
        (enum _D3DDDI_ROTATION)v20[13],
        (enum D3DKMT_MULTIPLANE_OVERLAY_BLEND)v20[14],
        (enum D3DDDI_COLOR_SPACE_TYPE)v20[18],
        v20[20],
        D3DDDIFMT_FORCE_UINT|0x80000000,
        1u);
      if ( v22 )
      {
        DISPLAY_SOURCE::ClearQueryStateForPostCompositionUnsafe((DISPLAY_SOURCE *)v11);
        DISPLAY_SOURCE::SetPostCompositionConfigUnsafe((DISPLAY_SOURCE *)v11, 1, (const struct tagRECT *)&v20[1], v17);
      }
    }
    return v19;
  }
  else
  {
    WdLogSingleEntry2(2LL, (unsigned int)v9, (unsigned int)v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failing CheckAndUpdateMultiPlaneOverlayFromInternalState because allocation is NULL, VidPnSourceId: (0x%I"
                "64x), Plane: (0x%I64x)",
      v9,
      v10,
      0LL,
      0LL,
      0LL);
    return 0;
  }
}
