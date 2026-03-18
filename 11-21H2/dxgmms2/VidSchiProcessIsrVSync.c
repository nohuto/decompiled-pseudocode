/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000D890
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0017830 (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0035424 (-VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        struct _SLIST_ENTRY *a4)
{
  bool v4; // r12
  DXGK_INTERRUPT_TYPE InterruptType; // eax
  UINT SubmissionFenceId; // edx
  unsigned int v10; // r13d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rcx
  char v17; // al
  PSLIST_ENTRY v18; // rax
  DXGK_INTERRUPT_TYPE v19; // ecx
  PSLIST_ENTRY v20; // rsi
  unsigned int v21; // eax
  DXGK_INTERRUPT_TYPE v22; // ecx
  LARGE_INTEGER PhysicalAddress; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  ULONGLONG Region; // rcx
  int v28; // eax
  __int64 v29; // rcx
  UINT EngineOrdinal; // ecx
  ULONGLONG Alignment; // rax
  unsigned int v32; // r9d
  char v33; // r10
  char v34; // r11
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rcx
  char *v36; // r8
  char *v37; // rcx
  int *v38; // rdx
  int v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  char *v50; // r8
  char *v51; // rcx
  int v52; // ecx
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v61; // r8
  char *v62; // rcx
  int v63; // ecx
  unsigned int Rotation; // eax
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  UINT v72; // [rsp+50h] [rbp-78h]
  int v73; // [rsp+54h] [rbp-74h]
  DWORD LowPart; // [rsp+58h] [rbp-70h]
  __int128 v75; // [rsp+60h] [rbp-68h] BYREF
  __int64 v76; // [rsp+70h] [rbp-58h]
  int v77; // [rsp+78h] [rbp-50h]

  v4 = 0;
  LowPart = 0;
  InterruptType = a2->InterruptType;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v72 = SubmissionFenceId;
  v73 = a3;
  if ( InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
  {
    if ( InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    {
      v4 = (a2->Flags.Value & 2) != 0;
    }
    else if ( InterruptType == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
    {
      v4 = (a2->Flags.Value & 2) != 0;
    }
  }
  v10 = 0;
  v11 = 0;
  v12 = *(_QWORD *)(a1[1].Alignment + 2792);
  v13 = *(_DWORD *)(v12 + 96);
  if ( v13 )
  {
    a3 = *(_QWORD *)(v12 + 128);
    while ( *(_DWORD *)(4000LL * v11 + a3 + 1088) != SubmissionFenceId )
    {
      if ( ++v11 >= v13 )
        goto LABEL_37;
    }
    if ( v11 != -1 && v11 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
    {
      _mm_lfence();
      v14 = *(&a1[200].Alignment + v11);
      if ( !v4 )
      {
        LODWORD(v15) = 1;
        if ( !_InterlockedExchange((volatile __int32 *)(v14 + 44164), 0) )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_13:
          ++*(_DWORD *)(v14 + 44160);
          *(_QWORD *)(v14 + 44064) += (unsigned int)v15;
          if ( *(_DWORD *)(v14 + 44160) < *(_DWORD *)(v14 + 82724) )
          {
            v17 = 1;
          }
          else
          {
            *(_DWORD *)(v14 + 44080) += v15;
            v17 = 0;
            *(_DWORD *)(v14 + 44160) = 0;
            *(LARGE_INTEGER *)(v14 + 44072) = PerformanceCounter;
          }
          *(_BYTE *)(v14 + 44096) = v17;
          *(LARGE_INTEGER *)(v14 + 44056) = PerformanceCounter;
          if ( *(_BYTE *)(v14 + 8) && !*((_BYTE *)&a1[9].HeaderX64 + 12) )
          {
            Region = a1->Region;
            v76 = 0LL;
            v77 = 0;
            v75 = 0LL;
            v28 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int128 *))DxgCoreInterface[61])(
                    Region,
                    0LL,
                    0LL,
                    &v75);
            v29 = 0LL;
            if ( v28 >= 0 )
              v29 = *((_QWORD *)&v75 + 1);
            *(_QWORD *)(v14 + 44088) = v29;
          }
          goto LABEL_16;
        }
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 44176), 0LL, 0LL);
        v26 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 44056);
        if ( !v25 )
          goto LABEL_13;
        if ( v26 <= v25 )
          goto LABEL_13;
        v15 = v26 / v25;
        if ( (unsigned int)(v26 / v25) )
          goto LABEL_13;
      }
LABEL_16:
      v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 44592));
      if ( !v18 )
      {
LABEL_24:
        LOBYTE(SubmissionFenceId) = v72;
        goto LABEL_25;
      }
      v19 = a2->InterruptType;
      v20 = v18 - 1;
      *((_BYTE *)&v18[6].Next + 12) &= ~1u;
      LODWORD(v18->Next) = v19;
      HIDWORD(v18[6].Next) = v73;
      LODWORD(v18[6].Next) = v72;
      v21 = *(_DWORD *)(&v18[6].Next + 1) & 0xFFFFFC00;
      v20[3].Next = (struct _SLIST_ENTRY *)a1;
      *((_DWORD *)&v20[7].Next + 2) = v21;
      *((_DWORD *)&v20[6].Next + 3) = v11;
      v22 = a2->InterruptType;
      if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
      {
        VidSchiProcessIsrVSyncMultiPlaneOverlay2(
          (struct _VIDSCH_GLOBAL *)a1,
          (struct _VIDSCH_PRESENT_INFO *)v14,
          a2,
          (struct _VIDSCH_VSYNC_COOKIE *)v20);
        goto LABEL_21;
      }
      if ( v22 == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
      {
        VidSchiProcessIsrVSyncMultiPlaneOverlay3(
          (struct _VIDSCH_GLOBAL *)a1,
          (struct _VIDSCH_PRESENT_INFO *)v14,
          a2,
          (struct _VIDSCH_VSYNC_COOKIE *)v20);
        goto LABEL_21;
      }
      if ( v22 != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
      {
        *((_DWORD *)&v20[7].Next + 2) = v21 | 1;
        PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
        v20[8].Next = (struct _SLIST_ENTRY *)PhysicalAddress.QuadPart;
        LowPart = PhysicalAddress.LowPart;
        goto LABEL_21;
      }
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      if ( EngineOrdinal >= 0xA )
      {
        WdLogSingleEntry3(1LL, a1, a2->DmaCompleted.SubmissionFenceId, a2->DmaCompleted.EngineOrdinal);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Driver reports out of range layer count: pVidSchGlobal = 0x%I64x, VidPnTargetId = 0x%I64x, Reported Layers = 0x%I64x",
          a1,
          a2->DmaCompleted.SubmissionFenceId,
          a2->DmaCompleted.EngineOrdinal,
          0LL,
          0LL);
        goto LABEL_21;
      }
      Alignment = a1[1].Alignment;
      v32 = 0;
      v33 = *(_BYTE *)(Alignment + 2706);
      v34 = *(_BYTE *)(Alignment + 2707);
      if ( !EngineOrdinal )
      {
LABEL_21:
        if ( !v4 )
        {
          *((_QWORD *)&v20[5].Next + 1) = *(_QWORD *)(v14 + 44064);
          v20[6].Next = (struct _SLIST_ENTRY *)*(unsigned int *)(v14 + 44080);
          *((_BYTE *)&v20[6].Next + 8) = *(_BYTE *)(v14 + 44096);
          *((_QWORD *)&v20[3].Next + 1) = *(_QWORD *)(v14 + 44056);
          v20[4].Next = *(struct _SLIST_ENTRY **)(v14 + 44072);
          *((_QWORD *)&v20[4].Next + 1) = *(_QWORD *)(v14 + 44088);
        }
        v20[5].Next = a4;
        ExpInterlockedPushEntrySList(a1 + 111, v20 + 2);
        goto LABEL_24;
      }
      while ( 1 )
      {
        pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
        if ( v33 )
        {
          v36 = (char *)pMultiPlaneOverlayVsyncInfo + 96 * v10;
          if ( *((_DWORD *)v36 + 1) )
          {
            *((_DWORD *)&v20[7].Next + 2) ^= ((unsigned __int16)*((_DWORD *)&v20[7].Next + 2) ^ (unsigned __int16)(*((_DWORD *)&v20[7].Next + 2) | (1 << *(_DWORD *)v36))) & 0x3FF;
            v37 = (char *)v20 + 40 * v32;
            *((_QWORD *)v37 + 16) = *((_QWORD *)v36 + 1);
            *((_WORD *)v37 + 68) = *((_WORD *)v36 + 10);
            *((_WORD *)v37 + 70) = *((_WORD *)v36 + 12);
            *((_WORD *)v37 + 69) = *((_WORD *)v36 + 14);
            *((_WORD *)v37 + 71) = *((_WORD *)v36 + 16);
            *((_WORD *)v37 + 72) = *((_WORD *)v36 + 18);
            *((_WORD *)v37 + 74) = *((_WORD *)v36 + 20);
            *((_WORD *)v37 + 73) = *((_WORD *)v36 + 22);
            *((_WORD *)v37 + 75) = *((_WORD *)v36 + 24);
            *((_WORD *)v37 + 76) = *((_WORD *)v36 + 18);
            *((_WORD *)v37 + 78) = *((_WORD *)v36 + 20);
            *((_WORD *)v37 + 77) = *((_WORD *)v36 + 22);
            *((_WORD *)v37 + 79) = *((_WORD *)v36 + 24);
            v38 = (int *)&v20[10] + 10 * v32;
            *v38 ^= (*((_DWORD *)v36 + 4) ^ *v38) & 1;
            LODWORD(v37) = *v38 ^ ((unsigned __int8)*v38 ^ (unsigned __int8)*((_DWORD *)v36 + 4)) & 2;
            *v38 = (int)v37;
            v39 = (unsigned int)v37 & 0xFFFFFFE7;
            v40 = *((_DWORD *)v36 + 13);
            if ( v40 > 1 )
              v39 |= 8 * (((_BYTE)v40 - 1) & 3);
            *v38 = v39;
            v41 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(4 * *((_DWORD *)v36 + 14))) & 4;
            *v38 = v41;
            v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(32 * *((_DWORD *)v36 + 18))) & 0x60;
            *v38 = v42;
            v43 = v42 ^ ((unsigned __int8)v42 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v36 + 19) << 7)) & 0x80;
            *v38 = v43;
            v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v36 + 19) << 7)) & 0x100;
            *v38 = v44;
            v45 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v36 + 19) << 7)) & 0x200;
            *v38 = v45;
            v46 = v45 ^ ((unsigned __int16)v45 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v36 + 20) << 10)) & 0x1C00;
            *v38 = v46;
            v47 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v36 + 21) << 13)) & 0x2000;
            *v38 = v47;
            v48 = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v36 + 22) << 14)) & 0x4000;
            *v38 = v48;
            StereoFlipMode = *((_DWORD *)v36 + 23);
LABEL_60:
            *v38 = v48 ^ (v48 ^ (StereoFlipMode << 15)) & 0x18000;
            ++v32;
          }
        }
        else if ( v34 )
        {
          v50 = (char *)pMultiPlaneOverlayVsyncInfo + 112 * v10;
          if ( *((_DWORD *)v50 + 1) )
          {
            *((_DWORD *)&v20[7].Next + 2) ^= ((unsigned __int16)*((_DWORD *)&v20[7].Next + 2) ^ (unsigned __int16)(*((_DWORD *)&v20[7].Next + 2) | (1 << *(_DWORD *)v50))) & 0x3FF;
            v51 = (char *)v20 + 40 * v32;
            *((_QWORD *)v51 + 16) = *((_QWORD *)v50 + 1);
            *((_WORD *)v51 + 68) = *((_WORD *)v50 + 10);
            *((_WORD *)v51 + 70) = *((_WORD *)v50 + 12);
            *((_WORD *)v51 + 69) = *((_WORD *)v50 + 14);
            *((_WORD *)v51 + 71) = *((_WORD *)v50 + 16);
            *((_WORD *)v51 + 72) = *((_WORD *)v50 + 18);
            *((_WORD *)v51 + 74) = *((_WORD *)v50 + 20);
            *((_WORD *)v51 + 73) = *((_WORD *)v50 + 22);
            *((_WORD *)v51 + 75) = *((_WORD *)v50 + 24);
            *((_WORD *)v51 + 76) = *((_WORD *)v50 + 26);
            *((_WORD *)v51 + 78) = *((_WORD *)v50 + 28);
            *((_WORD *)v51 + 77) = *((_WORD *)v50 + 30);
            *((_WORD *)v51 + 79) = *((_WORD *)v50 + 32);
            v38 = (int *)&v20[10] + 10 * v32;
            *v38 ^= (*((_DWORD *)v50 + 4) ^ *v38) & 1;
            LODWORD(v51) = *v38 ^ (*((_DWORD *)v50 + 4) ^ *v38) & 2;
            *v38 = (int)v51;
            v52 = (unsigned int)v51 & 0xFFFFFFE7;
            v53 = *((_DWORD *)v50 + 17);
            if ( v53 > 1 )
              v52 |= 8 * (((_BYTE)v53 - 1) & 3);
            *v38 = v52;
            v54 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(4 * *((_DWORD *)v50 + 18))) & 4;
            *v38 = v54;
            v55 = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(32 * *((_DWORD *)v50 + 22))) & 0x60;
            *v38 = v55;
            v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v50 + 23) << 7)) & 0x80;
            *v38 = v56;
            v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 23) << 7)) & 0x100;
            *v38 = v57;
            v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 23) << 7)) & 0x200;
            *v38 = v58;
            v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 24) << 10)) & 0x1C00;
            *v38 = v59;
            v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 25) << 13)) & 0x2000;
            *v38 = v60;
            v48 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v50 + 26) << 14)) & 0x4000;
            *v38 = v48;
            StereoFlipMode = *((_DWORD *)v50 + 27);
            goto LABEL_60;
          }
        }
        else
        {
          v61 = &pMultiPlaneOverlayVsyncInfo[v10];
          if ( v61->Enabled )
          {
            *((_DWORD *)&v20[7].Next + 2) ^= ((unsigned __int16)*((_DWORD *)&v20[7].Next + 2) ^ (unsigned __int16)(*((_DWORD *)&v20[7].Next + 2) | (1 << v61->LayerIndex))) & 0x3FF;
            v62 = (char *)v20 + 40 * v32;
            *((_QWORD *)v62 + 16) = v61->PhysicalAddress.QuadPart;
            *((_WORD *)v62 + 68) = v61->PlaneAttributes.SrcRect.left;
            *((_WORD *)v62 + 70) = v61->PlaneAttributes.SrcRect.top;
            *((_WORD *)v62 + 69) = v61->PlaneAttributes.SrcRect.right;
            *((_WORD *)v62 + 71) = v61->PlaneAttributes.SrcRect.bottom;
            *((_WORD *)v62 + 72) = v61->PlaneAttributes.DstRect.left;
            *((_WORD *)v62 + 74) = v61->PlaneAttributes.DstRect.top;
            *((_WORD *)v62 + 73) = v61->PlaneAttributes.DstRect.right;
            *((_WORD *)v62 + 75) = v61->PlaneAttributes.DstRect.bottom;
            *((_WORD *)v62 + 76) = v61->PlaneAttributes.ClipRect.left;
            *((_WORD *)v62 + 78) = v61->PlaneAttributes.ClipRect.top;
            *((_WORD *)v62 + 77) = v61->PlaneAttributes.ClipRect.right;
            *((_WORD *)v62 + 79) = v61->PlaneAttributes.ClipRect.bottom;
            v38 = (int *)&v20[10] + 10 * v32;
            *v38 ^= (v61->PlaneAttributes.Flags.Value ^ *v38) & 1;
            LODWORD(v62) = *v38 ^ (v61->PlaneAttributes.Flags.Value ^ *v38) & 2;
            *v38 = (int)v62;
            v63 = (unsigned int)v62 & 0xFFFFFFE7;
            Rotation = v61->PlaneAttributes.Rotation;
            if ( Rotation > 1 )
              v63 |= 8 * (((_BYTE)Rotation - 1) & 3);
            *v38 = v63;
            v65 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)(4 * v61->PlaneAttributes.Blend.Value)) & 4;
            *v38 = v65;
            v66 = v65 ^ ((unsigned __int8)v65 ^ (unsigned __int8)(32 * v61->PlaneAttributes.VideoFrameFormat)) & 0x60;
            *v38 = v66;
            v67 = v66 ^ ((unsigned __int8)v66 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80;
            *v38 = v67;
            v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100;
            *v38 = v68;
            v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200;
            *v38 = v69;
            v70 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)((unsigned __int16)v61->PlaneAttributes.StereoFormat << 10)) & 0x1C00;
            *v38 = v70;
            v71 = v70 ^ ((unsigned __int16)v70 ^ (v61->PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000;
            *v38 = v71;
            v48 = v71 ^ ((unsigned __int16)v71 ^ (v61->PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000;
            *v38 = v48;
            StereoFlipMode = v61->PlaneAttributes.StereoFlipMode;
            goto LABEL_60;
          }
        }
        if ( ++v10 >= a2->DmaCompleted.EngineOrdinal )
          goto LABEL_21;
      }
    }
  }
  else
  {
LABEL_37:
    v11 = -1;
  }
LABEL_25:
  if ( bTracingEnabled )
  {
    if ( v4 )
    {
      if ( (byte_1C006E941 & 1) != 0 )
        McTemplateK0pqx_EtwWriteTransfer(
          LowPart,
          (unsigned int)&EventHSyncInterrupt,
          a3,
          a1[1].Alignment,
          SubmissionFenceId,
          LowPart);
    }
    else if ( (byte_1C006E941 & 1) != 0 )
    {
      McTemplateK0pqx_EtwWriteTransfer(
        v12,
        (unsigned int)&EventVSyncInterrupt,
        a3,
        a1[1].Alignment,
        SubmissionFenceId,
        LowPart);
    }
  }
  return v11;
}
