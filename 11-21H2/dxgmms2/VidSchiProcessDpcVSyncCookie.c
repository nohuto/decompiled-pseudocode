/*
 * XREFs of VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00054C0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C0038574 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C00038E0 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP.c)
 *     ?SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z @ 0x1C00048C0 (-SmoothenFrame@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0I@Z.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00097D0 (VidSchiCheckPendingDeviceCommand.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C0009A80 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000F520 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C00151AC (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C0017910 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C001D620 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z @ 0x1C0034D3C (-VidSchiIndependentVidPnAdaptiveVSync@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@I_N2@Z.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035528 (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@IIK@Z @ 0x1C00362B0 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_VSYNC_COOKIE@@IIK@Z.c)
 *     McTemplateK0pqXR1qqqXR5_EtwWriteTransfer @ 0x1C0036BE4 (McTemplateK0pqXR1qqqXR5_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer @ 0x1C0036CB8 (McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C0037ADC (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0038224 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ?VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C0046370 (-VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEA.c)
 */

void __fastcall VidSchiProcessDpcVSyncCookie(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v5; // r13
  unsigned __int64 v6; // rdx
  struct _VIDSCH_GLOBAL *v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rbx
  unsigned int CurrentVSyncPeriodQpc; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int128 v15; // rax
  unsigned __int128 v16; // rtt
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r10
  unsigned __int128 v20; // rax
  unsigned __int128 v21; // rtt
  unsigned __int128 v22; // rax
  unsigned __int128 v23; // rtt
  unsigned int v24; // r9d
  int v25; // r12d
  __int64 v26; // r15
  struct VIDSCH_FLIP_QUEUE *v27; // r15
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // esi
  __int64 v31; // r12
  unsigned int v32; // eax
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned __int64 v35; // rbx
  unsigned int v36; // r8d
  int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rax
  unsigned int i; // ebx
  __int64 v41; // r9
  bool v42; // zf
  int v43; // eax
  char j; // r9
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // rsi
  bool v51; // r12
  unsigned int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // rbx
  char v55; // al
  int v56; // r8d
  unsigned int v57; // ecx
  void (__fastcall *v58)(_QWORD, _QWORD); // rax
  bool v59; // [rsp+28h] [rbp-E0h]
  bool v60[4]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v61; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v62; // [rsp+80h] [rbp-88h]
  int v63; // [rsp+84h] [rbp-84h] BYREF
  int v64; // [rsp+88h] [rbp-80h] BYREF
  int v65; // [rsp+8Ch] [rbp-7Ch]
  int v66; // [rsp+90h] [rbp-78h]
  unsigned __int64 v67; // [rsp+98h] [rbp-70h]
  int v68; // [rsp+A0h] [rbp-68h]
  int v69; // [rsp+A4h] [rbp-64h]
  _QWORD v70[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  __int64 v73; // [rsp+C8h] [rbp-40h]
  __int64 v74; // [rsp+D0h] [rbp-38h]
  __int64 v75; // [rsp+D8h] [rbp-30h]
  _QWORD v76[2]; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v77; // [rsp+F8h] [rbp-10h]
  int v78; // [rsp+FCh] [rbp-Ch]
  struct VIDSCH_FLIP_QUEUE *v79; // [rsp+100h] [rbp-8h]
  unsigned int v80; // [rsp+108h] [rbp+0h]
  int v81; // [rsp+10Ch] [rbp+4h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  __int64 v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  struct _KLOCK_QUEUE_HANDLE v85; // [rsp+128h] [rbp+20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v87[4]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v88; // [rsp+168h] [rbp+60h]
  __int64 v89; // [rsp+178h] [rbp+70h]
  _OWORD v90[5]; // [rsp+188h] [rbp+80h] BYREF
  _OWORD v91[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v92; // [rsp+1F8h] [rbp+F0h]
  int v93; // [rsp+200h] [rbp+F8h]
  _OWORD v94[5]; // [rsp+208h] [rbp+100h] BYREF

  v1 = *((unsigned int *)a1 + 27);
  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  v64 = 0;
  v92 = 0LL;
  v93 = 0;
  v62 = 0;
  v89 = 0LL;
  v61 = v1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v94, 0, sizeof(v94));
  memset(v91, 0, sizeof(v91));
  *(_OWORD *)v87 = 0LL;
  v88 = 0LL;
  if ( (_DWORD)v1 == -1 || (unsigned int)v1 >= *(_DWORD *)(v2 + 40) )
    return;
  _mm_lfence();
  v5 = *(_QWORD *)(v2 + 8 * v1 + 3200);
  v60[0] = 0;
  v75 = v1;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1728), &LockHandle);
  v71 = 0;
  v70[1] = v70;
  v70[0] = v70;
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    goto LABEL_36;
  v9 = *((_QWORD *)a1 + 11) - *(_QWORD *)(v5 + 44104);
  if ( *(_BYTE *)(v2 + 6610) && v9 > *(unsigned int *)(*(_QWORD *)(v2 + 16) + 4096LL) )
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc((struct _VIDSCH_GLOBAL *)v2, v1, 0);
    VIDSCH_VSYNC_SMOOTHER::ResetSmoother(
      *(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44152),
      CurrentVSyncPeriodQpc,
      CurrentVSyncPeriodQpc);
  }
  v7 = *(struct _VIDSCH_GLOBAL **)(v5 + 44168);
  if ( !v7 )
  {
    *(_QWORD *)(v5 + 44168) = 1LL;
    *(_QWORD *)(v5 + 44184) = 0LL;
    goto LABEL_19;
  }
  v8 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v5 + 44120);
  if ( v9 )
  {
    if ( (unsigned __int64)v7 > 3 )
    {
      v17 = *(_QWORD *)(v5 + 44176);
      *(_QWORD *)(v5 + 44208) = v8 / v9;
      v18 = v8 / v9;
      v19 = *(_QWORD *)(v2 + 2624);
      if ( v8 / v9 < 2 * v17 )
      {
        v22 = v8 * (unsigned __int128)0x3E8uLL;
        v74 = *((_QWORD *)&v22 + 1);
        if ( is_mul_ok(v8, 0x3E8uLL) )
        {
          v23 = v22;
          v6 = v22 % v19;
          v8 = v23 / v19;
        }
        else
        {
          v6 = 1000 * (v8 % v19) % v19;
          v8 = 1000 * (v8 / v19) + 1000 * (v8 % v19) / v19;
        }
        *(_QWORD *)(v5 + 44216) += v8;
      }
      else
      {
        v20 = v8 * (unsigned __int128)0x3E8uLL;
        v73 = *((_QWORD *)&v20 + 1);
        if ( is_mul_ok(v8, 0x3E8uLL) )
        {
          v21 = v20;
          v6 = v20 % v19;
          *(_QWORD *)(v5 + 44224) += v21 / v19;
          v8 = v21 / v19;
        }
        else
        {
          v6 = 1000 * (v8 % v19) % v19;
          v8 = 1000 * (v8 / v19) + 1000 * (v8 % v19) / v19;
          *(_QWORD *)(v5 + 44224) += v8;
        }
      }
      v7 = *(struct _VIDSCH_GLOBAL **)(v5 + 44192);
      if ( v18 <= (unsigned __int64)v7 + v17 && v18 >= v17 - (__int64)v7 )
        goto LABEL_33;
      ++*(_QWORD *)(v5 + 44200);
      *(_QWORD *)(v5 + 44168) = 0LL;
      goto LABEL_19;
    }
    v7 = (struct _VIDSCH_GLOBAL *)((char *)v7 + v9);
    v11 = v8 + *(_QWORD *)(v5 + 44184);
    *(_QWORD *)(v5 + 44168) = v7;
    *(_QWORD *)(v5 + 44184) = v11;
    if ( (unsigned __int64)v7 <= 3 )
    {
LABEL_19:
      if ( *(_BYTE *)(v2 + 2212) )
        _InterlockedExchange((volatile __int32 *)(v2 + 4 * v1 + 2272), 1);
      else
        _InterlockedExchange((volatile __int32 *)(v2 + 2272), 1);
      goto LABEL_33;
    }
    v12 = v11 / ((unsigned __int64)v7 - 1);
    *(_QWORD *)(v5 + 44192) = v12 / 0xA;
    _m_prefetchw((const void *)(v5 + 44176));
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 44176), v12, *(_QWORD *)(v5 + 44176)) != v12 )
      ;
    v13 = *(_QWORD *)(v5 + 44184);
    v14 = *(_QWORD *)(v2 + 2624);
    v15 = v13 * (unsigned __int128)0x3E8uLL;
    v72 = *((_QWORD *)&v15 + 1);
    if ( is_mul_ok(v13, 0x3E8uLL) )
    {
      v16 = v15;
      v6 = v15 % v14;
      v8 = v16 / v14;
    }
    else
    {
      v6 = 1000 * (v13 % v14) % v14;
      v8 = 1000 * (v13 / v14) + 1000 * (v13 % v14) / v14;
    }
    *(_QWORD *)(v5 + 44216) += v8;
    v7 = *(struct _VIDSCH_GLOBAL **)(v5 + 44168);
  }
  if ( (unsigned __int64)v7 <= 3 )
    goto LABEL_19;
LABEL_33:
  *(_QWORD *)(v5 + 44104) = *((_QWORD *)a1 + 11);
  *(_QWORD *)(v5 + 44120) = *((_QWORD *)a1 + 7);
  *(_QWORD *)(v5 + 44112) = *((_QWORD *)a1 + 12);
  *(_QWORD *)(v5 + 44128) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v5 + 44136) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v5 + 44144) = *((_QWORD *)a1 + 10);
  if ( *(_BYTE *)(v2 + 6610) )
  {
    VidSchiGetCurrentVSyncPeriodQpc((struct _VIDSCH_GLOBAL *)v2, v1, 0);
    VIDSCH_VSYNC_SMOOTHER::SmoothenFrame(
      *(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44152),
      *(_QWORD *)(v5 + 44104),
      *(_QWORD *)(v5 + 44120),
      v24);
  }
  v3 = v62;
LABEL_36:
  if ( *(int *)(v5 + 4) >= 4 || *(_BYTE *)(v2 + 156) )
  {
    if ( *(_BYTE *)(v2 + 59) )
      VidSchiUpdateLastPresentIdFromVSyncCookie(v7, (struct _VIDSCH_PRESENT_INFO *)v5, a1, v87);
    v25 = -1;
    v8 = 4673LL;
    while ( 1 )
    {
      v66 = v25;
      if ( v25 == *(_DWORD *)(v2 + 152) )
        break;
      v60[1] = 0;
      v26 = *(_QWORD *)(v2 + 8LL * (unsigned int)v1 + 3200);
      if ( v25 == -1 )
        v27 = *(struct VIDSCH_FLIP_QUEUE **)(v26 + 24);
      else
        v27 = *(struct VIDSCH_FLIP_QUEUE **)(v26 + 8LL * v25 + 32);
      if ( v27 )
      {
        LODWORD(v7) = *((_DWORD *)v27 + 28);
        if ( (_DWORD)v7 )
        {
          LODWORD(v7) = (_DWORD)v7 - 1;
          *((_DWORD *)v27 + 28) = (_DWORD)v7;
        }
        v6 = 0LL;
        v67 = 0LL;
        v62 = v3 + 1;
        *((_DWORD *)v91 + v3) = (_DWORD)v7;
        v28 = *((_DWORD *)v27 + 17);
        v65 = 0;
        v63 = 0;
        v29 = *((_DWORD *)v27 + 18);
        if ( *(_BYTE *)(v2 + 59) )
        {
          v30 = 0;
          if ( v28 != (((_BYTE)v29 + 1) & 0x3F) )
          {
            while ( 1 )
            {
              v31 = 1376LL * v28;
              v32 = *(_DWORD *)((char *)v27 + v31 + 1172);
              if ( v32 > 0xC || !_bittest((const int *)&v8, v32) )
              {
                if ( v32 != 5 && v32 != 15
                  || !(unsigned int)VidSchiIsExpectedVSyncCookie(
                                      (struct _VIDSCH_GLOBAL *)v2,
                                      (struct _VIDSCH_PRESENT_INFO *)v5,
                                      (struct VIDSCH_FLIP_QUEUE *)((char *)v27 + v31 + 120),
                                      a1,
                                      v87) )
                {
LABEL_57:
                  v6 = v67;
                  v25 = v66;
                  break;
                }
                v30 = v28;
                v67 = *(_QWORD *)((char *)v27 + v31 + 1160);
                v8 = 4673LL;
              }
              v28 = ((_BYTE)v28 + 1) & 0x3F;
              if ( v28 == (((unsigned __int8)*((_DWORD *)v27 + 18) + 1) & 0x3F) )
                goto LABEL_57;
            }
          }
          if ( !v6 )
            v30 = v28;
LABEL_74:
          if ( v6 )
          {
            v76[1] = v6;
            v78 = 0;
            v81 = 0;
            v82 = *(_QWORD *)(v5 + 44104);
            v83 = *(_QWORD *)(v5 + 44120);
            v84 = *(_QWORD *)(v5 + 44136);
            v77 = v61;
            v76[0] = v2;
            v79 = v27;
            v80 = v30;
            VidSchiProcessVsyncCompletedFlipEntry(
              (unsigned int)v70,
              (unsigned int)v76,
              (unsigned int)v94,
              (unsigned int)&v64,
              (__int64)&v63,
              (__int64)v60);
            v65 = v63;
          }
        }
        else
        {
          v30 = *((_DWORD *)v27 + 18);
          if ( v29 != (((_BYTE)v28 - 1) & 0x3F) )
          {
            do
            {
              v33 = 1376LL * v30;
              v34 = *(_DWORD *)((char *)v27 + v33 + 1172);
              if ( v34 > 0xC || !_bittest((const int *)&v8, v34) )
              {
                if ( v34 != 5 && v34 != 15 )
                  break;
                if ( !*(_BYTE *)(v2 + 156) && !*((_QWORD *)a1 + 16) )
                  VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v5, (struct _VIDSCH_GLOBAL *)v2);
                if ( (unsigned int)VidSchiIsExpectedVSyncCookie(
                                     (struct _VIDSCH_GLOBAL *)v2,
                                     (struct _VIDSCH_PRESENT_INFO *)v5,
                                     (struct VIDSCH_FLIP_QUEUE *)((char *)v27 + v33 + 120),
                                     a1,
                                     v87) )
                {
                  v6 = *(_QWORD *)((char *)v27 + v33 + 1160);
                  v67 = v6;
                  goto LABEL_74;
                }
                v8 = 4673LL;
              }
              v30 = ((_BYTE)v30 - 1) & 0x3F;
            }
            while ( v30 != (((unsigned __int8)*((_DWORD *)v27 + 17) - 1) & 0x3F) );
          }
        }
        LODWORD(v1) = v61;
        if ( *(_DWORD *)(v5 + 2988) && *(_BYTE *)(v5 + 78580) )
          VidSchiExecuteNextFlipQueueEntry(
            (struct HwQueueStagingList *)v70,
            (struct _VIDSCH_GLOBAL *)v2,
            &v60[1],
            v61,
            v27);
        v35 = v67;
        if ( v67 )
        {
          VidSchiCheckPendingDeviceCommand(v67, v6, v8);
          v36 = -v65;
          v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 40) + 32LL)
                                     + 8LL * *(unsigned int *)(*(_QWORD *)(v35 + 32) + 4LL))
                         + 8LL * (unsigned int)v1
                         + 88);
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(v2 + 8LL * (unsigned int)v1 + 6456) + 8LL),
            -v65);
          v7 = *(struct _VIDSCH_GLOBAL **)(v2 + 8LL * (unsigned int)v1 + 6456);
          *(_DWORD *)v7 += v63;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v36);
          *(_DWORD *)v6 += v63;
        }
        if ( v60[1] )
          VidSchiCompletePendingFlipOnPlane((unsigned int)v70, v2, v1, (_DWORD)v27, 9);
        v8 = 4673LL;
      }
      v3 = v62;
      ++v25;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 && Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0pqxqqipqx_EtwWriteTransfer(
        (_DWORD)v7,
        v6,
        v8,
        *(_QWORD *)(v2 + 16),
        *((_DWORD *)a1 + 28),
        *((_QWORD *)a1 + 16),
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 22),
        *((_QWORD *)a1 + 7),
        0,
        0,
        v94[0]);
    v37 = *((_DWORD *)a1 + 4);
    memset(v90, 0, sizeof(v90));
    switch ( v37 )
    {
      case 10:
        v38 = *(_DWORD *)(v2 + 152);
        if ( v38 )
        {
          v7 = (struct _VIDSCH_GLOBAL *)v90;
          v8 = v38;
          v6 = (unsigned __int64)a1 + 128;
          do
          {
            v39 = *(_QWORD *)v6;
            v6 += 16LL;
            *(_QWORD *)v7 = v39;
            v7 = (struct _VIDSCH_GLOBAL *)((char *)v7 + 8);
            --v8;
          }
          while ( v8 );
        }
        break;
      case 18:
        for ( i = 0; i < *((_DWORD *)a1 + 32); ++i )
        {
          v41 = *((unsigned int *)a1 + i + 33);
          v42 = (byte_1C006E944 & 1) == 0;
          v7 = *(struct _VIDSCH_GLOBAL **)(280 * v41 + v5 + 384);
          *((_QWORD *)v90 + v41) = v7;
          if ( !v42 && v87[v41] != -1 )
            VidSchiTraceHwFlipQueueLogUpdate((struct _VIDSCH_GLOBAL *)v2, a1, v1, v41, v87[v41]);
        }
        break;
      case 3:
        *(_QWORD *)&v90[0] = *((_QWORD *)a1 + 16);
        break;
      case 7:
        LODWORD(v8) = -1;
        LODWORD(v6) = *((_DWORD *)a1 + 30) & 0x3FF;
        v42 = !_BitScanForward((unsigned int *)&v43, v6);
        v68 = v43;
        if ( !v42 )
          LODWORD(v8) = (unsigned __int8)v43;
        for ( j = 0; (_DWORD)v6; ++j )
        {
          *((_QWORD *)v90 + (char)v8) = *((_QWORD *)a1 + 5 * j + 16);
          LODWORD(v7) = (unsigned __int8)v8;
          LODWORD(v8) = -1;
          LODWORD(v6) = ~(1 << (char)v7) & v6;
          v42 = !_BitScanForward((unsigned int *)&v45, v6);
          v69 = v45;
          if ( !v42 )
            LODWORD(v8) = (unsigned __int8)v45;
        }
        break;
    }
    if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    {
      if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        McTemplateK0pqXR1qqqXR5_EtwWriteTransfer(
          (_DWORD)v7,
          v6,
          v8,
          *(_QWORD *)(v2 + 16),
          *(_DWORD *)(v2 + 152),
          (__int64)v90,
          *((_DWORD *)a1 + 27),
          *((_DWORD *)a1 + 22),
          v64,
          (__int64)v94);
    }
    else if ( (byte_1C006E941 & 1) != 0 )
    {
      McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer(
        *((unsigned __int8 *)a1 + 104),
        v6,
        v8,
        *(_QWORD *)(v2 + 16),
        *(_DWORD *)(v2 + 152),
        (__int64)v90,
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 22),
        v64,
        (__int64)v94,
        v62,
        (__int64)v91,
        *((_BYTE *)a1 + 104) == 0);
    }
  }
  if ( *(_BYTE *)(v2 + 2212) )
  {
    VidSchiIndependentVidPnAdaptiveVSync((struct _VIDSCH_GLOBAL *)v2, a1, v1, v60[0], v59);
    goto LABEL_136;
  }
  if ( v60[0] )
    goto LABEL_134;
  if ( *(_BYTE *)(v2 + 45) != 1 || !*(_DWORD *)(v2 + 2404) )
    goto LABEL_136;
  if ( _InterlockedExchange((volatile __int32 *)(v2 + 2272), 0)
    || *(_DWORD *)(*(_QWORD *)(v2 + 16) + 2824LL)
    || *(_DWORD *)(v2 + 740)
    || *(_DWORD *)(v2 + 812)
    || *(_DWORD *)(v2 + 1900) )
  {
LABEL_134:
    *(_DWORD *)(v2 + 2400) = -1;
    *(_DWORD *)(v2 + 2336) = 0;
    goto LABEL_136;
  }
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    goto LABEL_153;
  v46 = *(_DWORD *)(v2 + 2400);
  if ( v46 == -1 )
  {
    *(_DWORD *)(v2 + 2400) = v1;
  }
  else if ( v46 != (_DWORD)v1 )
  {
    goto LABEL_136;
  }
  v47 = *(_DWORD *)(v2 + 2336);
  if ( v47 != -1 )
  {
    v48 = *(_DWORD *)(v2 + 2404);
    v49 = v47 + 1;
    *(_DWORD *)(v2 + 2336) = v49;
    if ( v49 == v48 )
    {
      if ( !_InterlockedExchange((volatile __int32 *)(v2 + 2264), 1) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 2232), CriticalWorkQueue);
    }
    else if ( v49 > v48 )
    {
      *(_DWORD *)(v2 + 2336) = v48 + 1;
    }
  }
LABEL_136:
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    goto LABEL_153;
  v50 = *(_QWORD *)(v2 + 16);
  v51 = *((_BYTE *)a1 + 104) == 0;
  v52 = *(_DWORD *)(v5 + 44104);
  v53 = *(_QWORD *)(v50 + 2792);
  if ( v61 < *(_DWORD *)(v53 + 96) )
  {
    memset(&v85, 0, sizeof(v85));
    v54 = *(_QWORD *)(v53 + 128) + 4000 * v75;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v54 + 952), &v85);
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
    {
      v55 = DXGADAPTER::NumberOfVSyncWaiter((DXGADAPTER *)v50, v61);
      McTemplateK0qqqqq_EtwWriteTransfer(
        *(unsigned __int8 *)(v54 + 944),
        (unsigned int)&EventDWMVsyncSignal,
        v56,
        *(_DWORD *)(v54 + 936),
        v52,
        *(_BYTE *)(v54 + 944),
        v55,
        4);
    }
    *(_BYTE *)(v54 + 960) = v51;
    KePulseEvent((PRKEVENT)(v54 + 904), 0, 0);
    if ( !*(_QWORD *)(v54 + 928) )
      goto LABEL_151;
    *(_DWORD *)(v54 + 940) = v52;
    if ( *(_DWORD *)(v54 + 936) > v52 )
      goto LABEL_151;
    if ( *(_BYTE *)(v54 + 944) )
    {
      *(_BYTE *)(v54 + 944) = 0;
      if ( *(_QWORD *)(v50 + 2800) )
      {
        v57 = v61;
        if ( (*(_DWORD *)(v50 + 2664) & 0x10) == 0 )
        {
          v57 = 0;
          goto LABEL_148;
        }
        if ( v61 < 0x10 )
        {
LABEL_148:
          if ( _InterlockedDecrement((volatile signed __int32 *)(v50 + 4LL * v57 + 2824)) < 0 )
            WdLogSingleEntry5(0LL, 275LL, 37LL, v50, *(unsigned int *)(v50 + 4LL * v57 + 2824), 0LL);
        }
      }
    }
    KeSetEvent(*(PRKEVENT *)(v54 + 928), 0, 0);
LABEL_151:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v85);
  }
  ((void (*)(void))DxgCoreInterface[3])();
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[82])(
    *(_QWORD *)(*(_QWORD *)(v2 + 16) + 404LL),
    *((unsigned int *)a1 + 28),
    *(unsigned int *)(v5 + 44104),
    *(_QWORD *)(v5 + 44120));
  LODWORD(v1) = v61;
LABEL_153:
  HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v70);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
  {
    v58 = *(void (__fastcall **)(_QWORD, _QWORD))(v2 + 3104);
    if ( v58 )
      v58(*(_QWORD *)(v2 + 3120), (unsigned int)v1);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v70);
}
