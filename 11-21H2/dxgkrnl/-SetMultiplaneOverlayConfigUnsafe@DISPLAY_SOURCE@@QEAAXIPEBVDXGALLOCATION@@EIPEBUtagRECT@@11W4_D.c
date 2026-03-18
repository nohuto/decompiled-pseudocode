/*
 * XREFs of ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01965F0
 * Callers:
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C01963A0 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0319174 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0319F98 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01DB908 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 */

void __fastcall DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
        DISPLAY_SOURCE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        unsigned __int8 a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        const struct tagRECT *a8,
        enum _D3DDDI_ROTATION a9,
        enum D3DKMT_MULTIPLANE_OVERLAY_BLEND a10,
        enum D3DDDI_COLOR_SPACE_TYPE a11,
        unsigned int a12,
        enum _D3DDDIFORMAT a13,
        unsigned __int8 a14)
{
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rcx
  char *v20; // r15
  unsigned int v21; // r11d
  unsigned int *v22; // rdi
  unsigned int v23; // r10d
  const struct tagRECT *v24; // r9
  const struct tagRECT *v25; // r8
  unsigned int v26; // ecx
  enum _D3DDDIFORMAT v27; // ecx

  v17 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9323LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9323LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a4 && !a3 )
  {
    WdLogSingleEntry1(1LL, 9324LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!Enabled || pAllocation != NULL", 9324LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v17 >= *((_DWORD *)this + 940)
    || (v18 = 168 * v17, *((_DWORD *)this + 42 * v17 + 286) == -1)
    && (*(_DWORD *)((char *)this + v18 + 1148) == -1
     || (WdLogSingleEntry1(1LL, 9067LL),
         DxgkLogInternalTriageEvent(
           0LL,
           262146,
           -1,
           (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
           9067LL,
           0LL,
           0LL,
           0LL,
           0LL),
         *(_DWORD *)((char *)this + v18 + 1144) == -1)) )
  {
    v20 = 0LL;
    goto LABEL_33;
  }
  _mm_lfence();
  v19 = v18 + 80LL * *(int *)((char *)this + v18 + 1144);
  v20 = (char *)this + v19 + 1152;
  if ( !v20 )
  {
LABEL_33:
    v21 = a5;
LABEL_34:
    v24 = a6;
LABEL_35:
    v25 = a7;
    goto LABEL_36;
  }
  if ( !a4 )
  {
    v22 = (unsigned int *)(v20 + 8);
    if ( (*((_DWORD *)v20 + 2) & 1) == 0 )
      goto LABEL_28;
    goto LABEL_33;
  }
  v21 = a5;
  v22 = (unsigned int *)((char *)this + v19 + 1160);
  v23 = *v22;
  if ( ((*v22 >> 4) & 1) != ((a5 & 1) != 0) || ((v23 >> 5) & 1) != ((a5 & 2) != 0) )
    goto LABEL_34;
  v24 = a6;
  if ( *(_DWORD *)((char *)this + v19 + 1164) != a6->left
    || *(_DWORD *)((char *)this + v19 + 1172) != a6->right
    || *(_DWORD *)((char *)this + v19 + 1168) != a6->top
    || *(_DWORD *)((char *)this + v19 + 1176) != a6->bottom )
  {
    goto LABEL_35;
  }
  v25 = a7;
  if ( *(_DWORD *)((char *)this + v19 + 1180) == a7->left
    && *(_DWORD *)((char *)this + v19 + 1188) == a7->right
    && *(_DWORD *)((char *)this + v19 + 1184) == a7->top
    && *(_DWORD *)((char *)this + v19 + 1192) == a7->bottom
    && *(_DWORD *)((char *)this + v19 + 1196) == a8->left
    && *(_DWORD *)((char *)this + v19 + 1204) == a8->right
    && *(_DWORD *)((char *)this + v19 + 1200) == a8->top
    && *(_DWORD *)((char *)this + v19 + 1208) == a8->bottom
    && *(_DWORD *)((char *)this + v19 + 1212) == a9
    && ((v23 >> 2) & 1) == (a10 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
    && *(_DWORD *)((char *)this + v19 + 1216) == a11
    && *(_DWORD *)((char *)this + v19 + 1220) == a12 )
  {
LABEL_28:
    if ( *((_DWORD *)this + 940) <= (unsigned int)v17 )
    {
      WdLogSingleEntry1(1LL, 9332LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaxPlanesUsed > PlaneIndex", 9332LL, 0LL, 0LL, 0LL, 0LL);
    }
    v26 = *v22;
    *(_QWORD *)v20 = a3;
    *v22 = (2 * (a4 & 1)) | a4 & 1 | v26 & 0xFFFFFFFC;
    return;
  }
LABEL_36:
  v27 = a13;
  if ( a13 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v20 )
    v27 = *((_DWORD *)v20 + 18);
  DISPLAY_SOURCE::CreateNewPlaneConfig(this, v17, a3, a4, v21, v24, v25, a8, a9, a10, a11, a12, v27, a14);
  if ( (unsigned int)v17 >= *((_DWORD *)this + 940) )
    *((_DWORD *)this + 940) = v17 + 1;
  if ( (_DWORD)v17 && a4 )
    *((_BYTE *)this + 3768) = 1;
}
