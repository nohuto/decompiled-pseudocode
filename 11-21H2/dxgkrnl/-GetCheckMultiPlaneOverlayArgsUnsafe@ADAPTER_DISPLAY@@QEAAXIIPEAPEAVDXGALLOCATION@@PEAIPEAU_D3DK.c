/*
 * XREFs of ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C015F6B0
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATION@@PEAW4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@1@Z @ 0x1C015F978 (-GetPlaneConfigState@@YAXPEAU_DISPLAY_PLANE_CONFIG_STATE@@PEAIPEAUtagRECT@@22PEAW4_D3DDDI_ROTATI.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C01C8E50 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C01E6CCC (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
        struct _KTHREAD **this,
        D3DDDI_VIDEO_PRESENT_SOURCE_ID a2,
        unsigned int a3,
        struct DXGALLOCATION **a4,
        unsigned int *a5,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *a6,
        unsigned int *a7,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *a8)
{
  __int64 v10; // rsi
  unsigned int v11; // r12d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v12; // edi
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v13; // ebp
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  struct _KTHREAD *v17; // rdx
  UINT v18; // ecx
  UINT v19; // r15d
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KTHREAD *v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  struct _DISPLAY_PLANE_CONFIG_STATE *v25; // rcx
  __int64 v26; // rsi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v28; // rax
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v30; // rcx
  RECT v31; // xmm1
  struct _POST_COMPOSITION_CONFIG *LatestPostCompositionConfigInternal; // rax
  __int64 v33; // rdx
  RECT v34; // xmm1
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v35; // [rsp+50h] [rbp-78h]
  UINT v36; // [rsp+58h] [rbp-70h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  int v40; // [rsp+D0h] [rbp+8h]
  unsigned int v41; // [rsp+D8h] [rbp+10h]

  if ( this[79] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 10237LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayStateMutexOwner()", 10237LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 0LL;
  v11 = 0;
  v40 = 0;
  v41 = 0;
  if ( a2 == -1 )
    v12 = *((_DWORD *)this + 24);
  else
    v12 = a2 + 1;
  v13 = 0;
  v35 = v12;
  if ( a2 != -1 )
    v13 = a2;
  if ( v13 < v12 )
  {
    v14 = a8;
    v15 = 4000LL * v13;
    v16 = 50LL * v13;
    v39 = v16;
    while ( 1 )
    {
      v17 = this[16];
      if ( *((_BYTE *)v17 + v15 + 762) )
        break;
LABEL_10:
      v16 += 50LL;
      ++v13;
      v15 += 4000LL;
      v39 = v16;
      if ( v13 >= v12 )
        goto LABEL_11;
    }
    v18 = *(_DWORD *)((char *)v17 + v15 + 3764);
    if ( v18 <= *(_DWORD *)((char *)v17 + v15 + 3760) )
      v18 = *(_DWORD *)((char *)v17 + v15 + 3760);
    v36 = v18;
    if ( !v18 )
    {
LABEL_24:
      if ( *((_BYTE *)v17 + v15 + 3720) )
      {
        if ( !*((_BYTE *)v17 + v15 + 3724) )
          goto LABEL_10;
        v30 = v11;
        v14[v30].PostComposition.Flags.Value = 0;
        v14[v30].VidPnSourceId = v13;
        v14[v30].PostComposition.SrcRect = *(RECT *)((char *)this[16] + v15 + 3728);
        v31 = *(RECT *)((char *)this[16] + v15 + 3744);
        v14[v30].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v14[v30].PostComposition.DstRect = v31;
      }
      else
      {
        LatestPostCompositionConfigInternal = DISPLAY_SOURCE::GetLatestPostCompositionConfigInternal((struct _KTHREAD *)((char *)v17 + 4000 * v13));
        if ( !LatestPostCompositionConfigInternal || !*(_BYTE *)LatestPostCompositionConfigInternal )
          goto LABEL_10;
        v33 = v11;
        v14[v33].PostComposition.Flags.Value = 0;
        v14[v33].VidPnSourceId = v13;
        v14[v33].PostComposition.SrcRect = *(RECT *)((char *)LatestPostCompositionConfigInternal + 4);
        v34 = *(RECT *)((char *)LatestPostCompositionConfigInternal + 20);
        v14[v33].PostComposition.Rotation = D3DDDI_ROTATION_IDENTITY;
        v14[v33].PostComposition.DstRect = v34;
      }
      v41 = ++v11;
      goto LABEL_10;
    }
    v19 = 0;
    v20 = 0LL;
    v21 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      v22 = this[16];
      if ( *((_BYTE *)v22 + v15 + v21 + 2904) )
      {
        if ( (*((_DWORD *)v22 + 20 * v20 + 20 * v16 + 732) & 1) != 0 )
        {
          v23 = 80 * (v21 + 50LL * v13);
          v24 = (struct _KTHREAD *)((char *)v22 + v23 + 2920) == 0LL;
          v25 = (struct _KTHREAD *)((char *)v22 + v23 + 2920);
LABEL_19:
          if ( !v24 && (unsigned int)v10 < a3 )
          {
            a4[v10] = *(struct DXGALLOCATION **)v25;
            v26 = v10;
            pPlaneAttributes = a6[v26].pPlaneAttributes;
            a6[v26].LayerIndex = v19;
            a6[v26].VidPnSourceId = v13;
            GetPlaneConfigState(
              v25,
              &pPlaneAttributes->Flags,
              &pPlaneAttributes->SrcRect,
              &pPlaneAttributes->DstRect,
              &pPlaneAttributes->ClipRect,
              &pPlaneAttributes->Rotation,
              &pPlaneAttributes->Blend,
              &pPlaneAttributes->ColorSpace,
              &pPlaneAttributes->SDRWhiteLevel);
            v16 = v39;
            a6[v26].pPlaneAttributes->DirtyRectCount = 0;
            a6[v26].pPlaneAttributes->pDirtyRects = 0LL;
            v28 = a6[v26].pPlaneAttributes;
            v21 = v37;
            v10 = (unsigned int)++v40;
            v28->StretchQuality = DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH;
          }
        }
      }
      else
      {
        LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(
                                      (struct _KTHREAD *)((char *)v22 + 4000 * v13),
                                      v19);
        v21 = v37;
        v25 = LatestPlaneConfigInternal;
        if ( LatestPlaneConfigInternal )
        {
          v24 = (*((_DWORD *)LatestPlaneConfigInternal + 2) & 1) == 0;
          goto LABEL_19;
        }
      }
      ++v21;
      v20 = v38 + 1;
      v37 = v21;
      ++v19;
      ++v38;
      if ( v19 >= v36 )
      {
        v17 = this[16];
        v14 = a8;
        v11 = v41;
        v12 = v35;
        goto LABEL_24;
      }
    }
  }
LABEL_11:
  *a5 = v10;
  *a7 = v11;
}
