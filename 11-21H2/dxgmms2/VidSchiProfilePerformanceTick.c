/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000A180
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006F90 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007350 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00087D0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C0009E90 (VidSchiSelectContext.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000AEB0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000CC60 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E468 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000F070 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000FA04 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C001773C (VidSchiNeedToForcePreemptNode.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001EAF0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001F79E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C0038D50 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C00393C0 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C00447E8 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0097530 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00AA188 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00F3D78 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00F3E3C (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0017B68 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EB8C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqPR4PR4_EtwWriteTransfer @ 0x1C0036810 (McTemplateK0ppqqqPR4PR4_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqpq_EtwWriteTransfer @ 0x1C00369E0 (McTemplateK0ppqxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pqqPR2p_EtwWriteTransfer @ 0x1C0036DC8 (McTemplateK0pqqPR2p_EtwWriteTransfer.c)
 *     McTemplateK0pqqpxp_EtwWriteTransfer @ 0x1C00372B0 (McTemplateK0pqqpxp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqPR3XR3p_EtwWriteTransfer @ 0x1C0037464 (McTemplateK0pqqqPR3XR3p_EtwWriteTransfer.c)
 *     McTemplateK0pqqttp_EtwWriteTransfer @ 0x1C00375F0 (McTemplateK0pqqttp_EtwWriteTransfer.c)
 *     McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x1C0037938 (McTemplateK0pqqxqqtppx_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqqxqp_EtwWriteTransfer @ 0x1C0037BD0 (McTemplateK0pqxqqqxqp_EtwWriteTransfer.c)
 *     McTemplateK0pqxqt_EtwWriteTransfer @ 0x1C0037CC4 (McTemplateK0pqxqt_EtwWriteTransfer.c)
 *     McTemplateK0qtpiixi_EtwWriteTransfer @ 0x1C00382CC (McTemplateK0qtpiixi_EtwWriteTransfer.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r9
  int v12; // r13d
  int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int16 v22; // r9
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 *v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // ecx
  int v37; // r8d
  unsigned int v38; // ecx
  int v39; // r8d
  __int64 v40; // rdx
  __int64 v41; // r11
  __int64 v42; // r15
  int v43; // r12d
  int v44; // r13d
  int v45; // ecx
  __int64 v46; // r9
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 *v53; // r14
  unsigned __int64 v54; // r15
  unsigned int v55; // r12d
  _BYTE *v56; // rcx
  _BYTE *v57; // rax
  __int64 v58; // r11
  unsigned int v59; // r8d
  unsigned int v60; // edx
  int v61; // r10d
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // r13
  __int64 v71; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  int v78; // r8d
  __int64 v79; // r9
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // r9
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 *v87; // r14
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rcx
  __int64 *v93; // r14
  __int64 v94; // rcx
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // r9
  __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 *v109; // r14
  __int64 v110; // rax
  void *v111; // rdx
  __int64 v112; // r10
  __int64 v113; // r11
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // r9
  __int64 v119; // rdx
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // r8
  __int64 v126; // rcx
  __int64 v127; // r9
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rcx
  __int64 *v131; // r14
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // r8
  __int64 v136; // rcx
  int v137; // [rsp+20h] [rbp-C9h]
  __int64 v139; // [rsp+80h] [rbp-69h]
  _BYTE *Pool2; // [rsp+98h] [rbp-51h]
  _BYTE v141[16]; // [rsp+A0h] [rbp-49h] BYREF
  int v142; // [rsp+B0h] [rbp-39h]
  __int64 v143; // [rsp+B8h] [rbp-31h]
  PVOID P; // [rsp+C0h] [rbp-29h]
  _BYTE v145[16]; // [rsp+C8h] [rbp-21h] BYREF
  int v146; // [rsp+D8h] [rbp-11h]

  v8 = a5;
  v9 = a7;
  v10 = 0LL;
  v11 = a3;
  v12 = a8;
  v14 = a1;
  if ( !bTracingEnabled )
    goto LABEL_18;
  if ( (_DWORD)a1 == 2 )
  {
    v16 = *(_QWORD *)(a2 + 504);
    v17 = *(_QWORD *)(a2 + 456);
    v18 = ((unsigned __int64)*(unsigned int *)(a2 + 84) + 63) >> 6;
    if ( a5 )
    {
      v19 = *(_QWORD *)(a5 + 96);
      v20 = *(_QWORD *)(a5 + 56);
      v21 = *(_DWORD *)(v19 + 1768);
      v22 = *(_WORD *)(v19 + 4);
      if ( !v20 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v20) = a5;
    }
    else
    {
      v21 = 0;
      LOBYTE(v22) = 0;
      LODWORD(v20) = 0;
    }
    if ( (byte_1C006E941 & 2) != 0 )
    {
      McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(v18, v20, v21, *(_QWORD *)(a2 + 16), v20, v22, v21, v18, v17, v16);
      v8 = a5;
    }
    goto LABEL_17;
  }
  if ( (_DWORD)a1 == 9 )
  {
LABEL_24:
    if ( a7 )
    {
      v81 = *(_QWORD *)(a7 + 48);
      v82 = *(_QWORD *)(v81 + 56);
      if ( !v82 || (LODWORD(a1) = *(_DWORD *)(v81 + 112), (a1 & 0x40) != 0) )
        v82 = *(_QWORD *)(a7 + 48);
      if ( (byte_1C006E941 & 1) != 0 )
      {
        McTemplateK0pqxqt_EtwWriteTransfer(
          a1,
          v81,
          v14 == 11,
          v82,
          *(_DWORD *)(a7 + 88),
          *(_QWORD *)(a7 + 104),
          *(_DWORD *)(a7 + 96),
          v14 == 11);
        v8 = a5;
      }
      goto LABEL_17;
    }
    if ( !a6 )
      goto LABEL_18;
    v23 = *(_DWORD *)(a6 + 48);
    if ( (_DWORD)a1 == 9 )
    {
      if ( v23 == 4 )
      {
        v103 = *(_QWORD *)(a6 + 88);
        v25 = (*(_DWORD *)(a6 + 272) >> 1) & 1;
        if ( v103 )
        {
          v104 = *(_QWORD *)(v103 + 56);
          if ( !v104 || (*(_DWORD *)(v103 + 112) & 0x40) != 0 )
            v104 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v104 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v104 )
            v104 = *(_QWORD *)(a6 + 96);
        }
        if ( (byte_1C006E941 & 1) == 0 )
        {
LABEL_33:
          v27 = *(_DWORD *)(a6 + 48);
          if ( v27 )
          {
            if ( ((v27 - 3) & 0xFFFFFFFB) != 0 )
              goto LABEL_17;
          }
          else if ( (*(_DWORD *)(a6 + 72) & 0x4000) == 0 )
          {
            goto LABEL_17;
          }
          if ( (byte_1C006E943 & 0x20) != 0 )
          {
            McTemplateK0q_EtwWriteTransfer(v25, &EventPresentQueueComplete);
LABEL_204:
            v8 = a5;
          }
LABEL_17:
          v11 = a3;
          goto LABEL_18;
        }
        McTemplateK0pqqttp_EtwWriteTransfer(v25, v103, *(_DWORD *)(a6 + 112), v104, 4, *(_DWORD *)(a6 + 112), v25);
LABEL_274:
        v8 = a5;
        goto LABEL_33;
      }
    }
    else
    {
      v24 = 1;
      if ( (_DWORD)a1 == 11 )
        goto LABEL_29;
    }
    v24 = 0;
LABEL_29:
    v25 = *(_QWORD *)(a6 + 88);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 56);
      if ( !v26 || (*(_DWORD *)(v25 + 112) & 0x40) != 0 )
        v26 = *(_QWORD *)(a6 + 88);
    }
    else
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
      if ( !v26 )
        v26 = *(_QWORD *)(a6 + 96);
    }
    if ( (byte_1C006E941 & 1) == 0 )
      goto LABEL_33;
    McTemplateK0pqqttp_EtwWriteTransfer(v25, v23, v24, v26, v23, *(_DWORD *)(a6 + 112), v24);
    goto LABEL_274;
  }
  if ( (_DWORD)a1 != 20 )
  {
    if ( (_DWORD)a1 == 5 )
    {
      v34 = *(_QWORD *)(a6 + 88);
      v35 = *(_QWORD *)(v34 + 56);
      if ( !v35 || (*(_DWORD *)(v34 + 112) & 0x40) != 0 )
        v35 = *(_QWORD *)(a6 + 88);
      if ( (byte_1C006E941 & 1) == 0 )
        goto LABEL_17;
      McTemplateK0pqq_EtwWriteTransfer(
        v34,
        (unsigned int)&EventQueueSelect,
        *(_DWORD *)(a6 + 48),
        v35,
        *(_DWORD *)(a6 + 48),
        *(_DWORD *)(a6 + 112));
      goto LABEL_204;
    }
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (int)a1 )
      {
        case 1:
          v15 = *(_QWORD *)(a5 + 56);
          if ( !v15 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            v15 = a5;
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          v137 = a8;
          v111 = &EventAttemptPreemption;
          goto LABEL_203;
        case 7:
          v70 = 0LL;
          if ( *(_DWORD *)(a7 + 88) == 1 )
          {
            v100 = *(_QWORD *)(a7 + 56);
            if ( v100 )
            {
              if ( *(_DWORD *)(v100 + 48) == 8 )
                v70 = *(_QWORD *)(v100 + 88);
            }
          }
          v71 = *(_QWORD *)(a7 + 48);
          if ( *(_DWORD *)(v71 + 984) >= 0x80u )
            VidSchiFlushGpuWorkEntries(*(struct _VIDSCH_CONTEXT **)(a7 + 48));
          if ( *(_QWORD *)(v71 + 992)
            || (v110 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v71 + 992) = v110) != 0LL) )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v73 = *(_QWORD *)(v71 + 992);
            *(LARGE_INTEGER *)(v73 + 8LL * (unsigned int)(*(_DWORD *)(v71 + 984))++) = PerformanceCounter;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            DxgCoreInterface[85](
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Failed to allocate GpuWorkRecords for long haul logging",
              458LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v74 = *(_QWORD *)(a7 + 48);
          if ( v70 )
          {
            v75 = *(_QWORD *)(v70 + 56);
            if ( !v75 || (LODWORD(v73) = *(_DWORD *)(v70 + 112), (v73 & 0x40) != 0) )
              LODWORD(v75) = v70;
          }
          else
          {
            LODWORD(v75) = 0;
          }
          v76 = *(_QWORD *)(v74 + 56);
          if ( !v76 || (LODWORD(v73) = *(_DWORD *)(v74 + 112), (v73 & 0x40) != 0) )
            LODWORD(v76) = *(_QWORD *)(a7 + 48);
          if ( (byte_1C006E941 & 1) != 0 )
            McTemplateK0ppqxqpq_EtwWriteTransfer(
              v73,
              v74,
              v75,
              v76,
              v75,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              *(_QWORD *)(a7 + 64),
              *(_DWORD *)(v74 + 436));
          goto LABEL_90;
        case 8:
        case 10:
        case 12:
          LODWORD(v77) = 0;
          v78 = 0;
          LOBYTE(v79) = 0;
          v80 = 0;
          switch ( v14 )
          {
            case 8:
              v80 = 1;
              break;
            case 10:
              v80 = 2;
              break;
            case 12:
              v77 = *(_QWORD *)(a8 + 40);
              v80 = 9;
              v78 = *(_DWORD *)(a8 + 32);
              v79 = *(_QWORD *)(a8 + 64);
              break;
          }
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_17;
          v112 = *(_QWORD *)(a7 + 48);
          v113 = *(_QWORD *)(v112 + 56);
          v114 = *(_DWORD *)(a7 + 88);
          if ( !v113 || (*(_DWORD *)(v112 + 112) & 0x40) != 0 )
            LODWORD(v113) = *(_QWORD *)(a7 + 48);
          McTemplateK0pqxqqqxqp_EtwWriteTransfer(
            v80,
            v77,
            v78,
            v113,
            v114,
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v80,
            *(_DWORD *)(v112 + 436),
            v77,
            v78,
            v79);
          goto LABEL_90;
        case 11:
        case 13:
          goto LABEL_24;
        case 14:
          v15 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          v137 = 1;
          goto LABEL_201;
        case 15:
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
          v8 = a5;
          goto LABEL_17;
        case 16:
          v15 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          v137 = 3;
          goto LABEL_201;
        case 17:
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
          goto LABEL_204;
        case 18:
          v15 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_11;
          a1 = 2LL;
          v137 = 2;
LABEL_201:
          v111 = &EventEnterWorkerThread;
LABEL_203:
          McTemplateK0pq_EtwWriteTransfer(a1, v111, a3, v15, v137);
          goto LABEL_204;
        case 19:
          if ( (byte_1C006E941 & 1) == 0 )
          {
LABEL_11:
            v11 = a3;
            goto LABEL_18;
          }
          McTemplateK0pq_EtwWriteTransfer(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
          break;
        default:
          goto LABEL_18;
      }
      goto LABEL_204;
    }
    v36 = *(_DWORD *)(a6 + 48);
    if ( v36 != 5 )
    {
      v37 = *(_DWORD *)(a6 + 48);
      if ( v36 )
      {
        switch ( v36 )
        {
          case 3:
            goto LABEL_140;
          case 4:
            v101 = *(_QWORD *)(a6 + 88);
            if ( v101 )
            {
              v102 = *(_QWORD *)(v101 + 56);
              if ( !v102 || (*(_DWORD *)(v101 + 112) & 0x40) != 0 )
                v102 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v102 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v102 )
                v102 = *(_QWORD *)(a6 + 96);
            }
            if ( (byte_1C006E941 & 1) != 0 )
            {
              McTemplateK0pqqpxp_EtwWriteTransfer(
                v101,
                *(_QWORD *)(a6 + 304),
                *(_QWORD *)(a6 + 280),
                v102,
                *(_DWORD *)(a6 + 112),
                *(_DWORD *)(a6 + 272),
                *(_QWORD *)(a6 + 280),
                *(_QWORD *)(a6 + 304),
                a6);
              v8 = a5;
            }
            goto LABEL_17;
          case 7:
LABEL_140:
            if ( (byte_1C006E943 & 0x20) != 0 )
            {
              v115 = *(_QWORD *)(a6 + 88);
              if ( v115 )
              {
                v116 = *(_QWORD *)(v115 + 56);
                if ( !v116 || (*(_DWORD *)(v115 + 112) & 0x40) != 0 )
                  v116 = *(_QWORD *)(a6 + 88);
              }
              else
              {
                v116 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                if ( !v116 )
                  v116 = *(_QWORD *)(a6 + 96);
              }
              McTemplateK0pqq_EtwWriteTransfer(
                v36,
                (unsigned int)&EventPresentQueueSubmit,
                *(_DWORD *)(a6 + 112),
                v116,
                v36,
                *(_DWORD *)(a6 + 112));
              v37 = *(_DWORD *)(a6 + 48);
              v8 = a5;
            }
            break;
        }
        v94 = *(_QWORD *)(a6 + 88);
        if ( v94 )
        {
          v95 = *(_QWORD *)(v94 + 56);
          if ( !v95 || (*(_DWORD *)(v94 + 112) & 0x40) != 0 )
            v95 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v95 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v95 )
            v95 = *(_QWORD *)(a6 + 96);
        }
        if ( (byte_1C006E941 & 1) != 0 )
        {
          McTemplateK0pqqxqqtppx_EtwWriteTransfer(
            v94,
            (*(_DWORD *)(a6 + 72) >> 14) & 1,
            v37,
            v95,
            v37,
            *(_DWORD *)(a6 + 112),
            0,
            0,
            0,
            (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
            *(_QWORD *)(a6 + 280),
            a6,
            *(_QWORD *)(a6 + 768));
          v8 = a5;
        }
        goto LABEL_92;
      }
      v38 = *(_DWORD *)(a6 + 72);
      v39 = 0;
      if ( (v38 & 0x4000) != 0 && (byte_1C006E943 & 0x20) != 0 )
      {
        v117 = *(_QWORD *)(a6 + 88);
        if ( v117 )
        {
          v118 = *(_QWORD *)(v117 + 56);
          if ( !v118 || (*(_DWORD *)(v117 + 112) & 0x40) != 0 )
            v118 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v118 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v118 )
            v118 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqq_EtwWriteTransfer(
          v117,
          (unsigned int)&EventPresentQueueSubmit,
          0,
          v118,
          0,
          *(_DWORD *)(a6 + 112));
        v38 = *(_DWORD *)(a6 + 72);
        v39 = *(_DWORD *)(a6 + 48);
        v8 = a5;
      }
      v40 = *(_QWORD *)(a6 + 88);
      v41 = *(_QWORD *)(a6 + 768);
      v42 = *(_QWORD *)(a6 + 280);
      v43 = *(_DWORD *)(a6 + 340);
      v44 = *(_DWORD *)(a6 + 332);
      v45 = (v38 >> 14) & 1;
      v143 = *(unsigned int *)(a6 + 324);
      if ( v40 )
      {
        v46 = *(_QWORD *)(v40 + 56);
        if ( !v46 || (*(_DWORD *)(v40 + 112) & 0x40) != 0 )
          LODWORD(v46) = v40;
      }
      else
      {
        v46 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v46 )
          v46 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C006E941 & 1) != 0 )
      {
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          v45,
          v40,
          v39,
          v46,
          v39,
          *(_DWORD *)(a6 + 112),
          v143,
          v44,
          v43,
          v45,
          v42,
          a6,
          v41);
        v8 = a5;
      }
      v47 = *(_DWORD *)(a6 + 472);
      if ( !v47 || (byte_1C006E941 & 0x10) == 0 )
      {
LABEL_91:
        v12 = a8;
LABEL_92:
        v9 = a7;
        goto LABEL_17;
      }
      v119 = *(_QWORD *)(a6 + 88);
      if ( v119 )
      {
        v120 = *(_QWORD *)(v119 + 56);
        if ( !v120 || (*(_DWORD *)(v119 + 112) & 0x40) != 0 )
          v120 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v120 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v120 )
          v120 = *(_QWORD *)(a6 + 96);
      }
      McTemplateK0pqqPR2p_EtwWriteTransfer(v47, v119, a6 + 480, v120, *(_DWORD *)(a6 + 112), v47, a6 + 480, a6);
LABEL_90:
      v8 = a5;
      goto LABEL_91;
    }
    v54 = *(unsigned int *)(a6 + 276);
    Pool2 = 0LL;
    v142 = 0;
    if ( (unsigned int)v54 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v54 < 8 )
      {
        v56 = 0LL;
        v139 = 0LL;
        P = 0LL;
        v146 = 0;
        goto LABEL_188;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v54, 945908054LL);
    }
    else
    {
      Pool2 = v141;
      if ( (_DWORD)v54 )
        memset(v141, 0, 8LL * (unsigned int)v54);
    }
    v55 = *(_DWORD *)(a6 + 276);
    v56 = 0LL;
    v142 = v54;
    LODWORD(v54) = v55;
    P = 0LL;
    v146 = 0;
    v139 = (__int64)Pool2;
    if ( v55 <= 2 )
    {
      v56 = v145;
      v57 = Pool2;
      P = v145;
      v139 = (__int64)Pool2;
      if ( v55 )
      {
        memset(v145, 0, 8LL * v55);
        v56 = P;
        v57 = Pool2;
        v139 = (__int64)Pool2;
      }
      goto LABEL_75;
    }
LABEL_188:
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v54 < 8 )
    {
      v57 = (_BYTE *)v139;
      v58 = 0LL;
      goto LABEL_76;
    }
    v56 = (_BYTE *)ExAllocatePool2(64LL, 8LL * (unsigned int)v54, 945908054LL);
    P = v56;
    v57 = (_BYTE *)v139;
LABEL_75:
    v146 = v54;
    v58 = (__int64)v56;
LABEL_76:
    if ( v57 && v58 )
    {
      v59 = *(_DWORD *)(a6 + 276);
      v60 = 0;
      if ( v59 )
      {
        do
        {
          *(_QWORD *)(8LL * v60 + v139) = *(_QWORD *)(a6 + 8LL * v60 + 280);
          v61 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v60 + 280) + 48LL);
          if ( v61 == 4 || v61 == 2 || v61 == 5 )
            v62 = *(_QWORD *)(a6 + 8LL * v60 + 536);
          else
            v62 = 0LL;
          *(_QWORD *)(8LL * v60++ + v58) = v62;
          v59 = *(_DWORD *)(a6 + 276);
        }
        while ( v60 < v59 );
        v56 = P;
      }
      v63 = *(_QWORD *)(a6 + 88);
      if ( v63 )
      {
        v64 = *(_QWORD *)(v63 + 56);
        if ( !v64 || (*(_DWORD *)(v63 + 112) & 0x40) != 0 )
          v64 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v64 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v64 )
          v64 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C006E941 & 1) != 0 )
      {
        McTemplateK0pqqqPR3XR3p_EtwWriteTransfer(
          (_DWORD)v56,
          v63,
          v59,
          v64,
          *(_DWORD *)(a6 + 112),
          *(_DWORD *)(a6 + 272),
          v59,
          v139,
          v58,
          a6);
        v56 = P;
      }
    }
    if ( v56 != v145 && v56 )
      ExFreePoolWithTag(v56, 0);
    P = 0LL;
    v146 = 0;
    if ( Pool2 != v141 && Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      v8 = a5;
      v12 = a8;
      v9 = a7;
      goto LABEL_17;
    }
    goto LABEL_90;
  }
  if ( (*(_DWORD *)(a2 + 2536) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
  {
    v121 = *(_QWORD *)(a5 + 440);
    if ( v121 <= 0 && (byte_1C006E941 & 1) != 0 )
    {
      v122 = *(_QWORD *)(a5 + 56);
      if ( !v122 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v122) = a5;
      McTemplateK0qtpiixi_EtwWriteTransfer(
        v122,
        v121,
        *(_QWORD *)(a5 + 448),
        *(unsigned __int16 *)(a3 + 4),
        a8 != 0,
        v122,
        *(_QWORD *)(a5 + 472),
        v121,
        *(_QWORD *)(a5 + 464),
        *(_QWORD *)(a5 + 448));
      v8 = a5;
      goto LABEL_17;
    }
  }
LABEL_18:
  if ( *(int *)(a2 + 6448) >= 1 )
  {
    if ( v14 == 1 )
    {
      if ( v12 < 0 )
      {
        v12 = -v12;
      }
      else if ( v12 >= 16 )
      {
        v12 = 1;
      }
      ++*(_DWORD *)(v11 + 2660);
      ++*(_DWORD *)(v11 + 4LL * v12 + 2660);
      v65 = *(_QWORD *)(v8 + 96);
      if ( (*(_DWORD *)(v65 + 12) & 0x10) != 0 )
      {
        v69 = 0LL;
      }
      else
      {
        v66 = *(unsigned __int16 *)(v65 + 4);
        v67 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v65 + 24) + 4LL));
        v68 = *(__int64 **)(v67 + 8);
        if ( (unsigned int)v66 < *(_DWORD *)(v67 + 80) )
          v68 += v66;
        v69 = *v68;
        v11 = a3;
      }
      ++*(_DWORD *)(v69 + 12);
      ++*(_DWORD *)(v69 + 4LL * v12 + 12);
    }
    else if ( v14 == 3 )
    {
      ++*(_DWORD *)(v11 + 2656);
      v96 = *(_QWORD *)(v8 + 96);
      if ( (*(_DWORD *)(v96 + 12) & 0x10) == 0 )
      {
        v97 = *(unsigned __int16 *)(v96 + 4);
        v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v96 + 24) + 4LL));
        v99 = *(_QWORD *)(v98 + 8);
        if ( (unsigned int)v97 < *(_DWORD *)(v98 + 80) )
          v99 += 8 * v97;
        if ( *(_QWORD *)v99 )
          ++*(_DWORD *)(*(_QWORD *)v99 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6448) >= 2 )
  {
    switch ( v14 )
    {
      case 4:
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2724);
        v48 = *(_QWORD *)(a6 + 96);
        if ( !v48 )
        {
          v49 = *(_QWORD *)(a6 + 88);
          v50 = *(_QWORD *)(v49 + 96);
          if ( (*(_DWORD *)(v50 + 12) & 0x10) != 0 )
            goto LABEL_67;
          v51 = *(unsigned __int16 *)(v50 + 4);
          v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v50 + 24) + 4LL));
          v53 = *(__int64 **)(v52 + 8);
          if ( (unsigned int)v51 < *(_DWORD *)(v52 + 80) )
            v53 += v51;
          goto LABEL_66;
        }
        v123 = *(_QWORD *)(v48 + 40);
        v124 = *(_QWORD *)(v123 + 16);
        v125 = *(unsigned __int16 *)(v124 + 4);
        v126 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 + 8) + 40LL) + 32LL)
                         + 8LL * *(unsigned int *)(*(_QWORD *)(v124 + 24) + 4LL));
        if ( v126 )
        {
          v53 = *(__int64 **)(v126 + 8);
          if ( (unsigned int)v125 < *(_DWORD *)(v126 + 80) )
            v53 += v125;
LABEL_66:
          v10 = *v53;
        }
LABEL_67:
        if ( v10 )
          ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 76);
        return;
      case 7:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v9 + 88) + 2796);
        v83 = *(_QWORD *)(v9 + 48);
        v84 = *(_QWORD *)(v83 + 96);
        if ( (*(_DWORD *)(v84 + 12) & 0x10) == 0 )
        {
          v85 = *(unsigned __int16 *)(v84 + 4);
          v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v84 + 24) + 4LL));
          v87 = *(__int64 **)(v86 + 8);
          if ( (unsigned int)v85 < *(_DWORD *)(v86 + 80) )
            v87 += v85;
          v10 = *v87;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v9 + 88) + 148);
        return;
      case 8:
        v88 = 2 * (*(int *)(v9 + 88) + 175LL);
        ++*(_DWORD *)(v11 + 8 * v88);
        v89 = *(_QWORD *)(v9 + 48);
        v90 = *(_QWORD *)(v89 + 96);
        if ( (*(_DWORD *)(v90 + 12) & 0x10) == 0 )
        {
          v91 = *(unsigned __int16 *)(v90 + 4);
          v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v89 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v90 + 24) + 4LL));
          v93 = *(__int64 **)(v92 + 8);
          if ( (unsigned int)v91 < *(_DWORD *)(v92 + 80) )
            v93 += v91;
          v10 = *v93;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v9 + 88) + 152);
        return;
      case 9:
      case 11:
      case 13:
        if ( !a6 )
          return;
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2728);
        v28 = *(_QWORD *)(a6 + 96);
        if ( !v28 )
        {
          v29 = *(_QWORD *)(a6 + 88);
          v30 = *(_QWORD *)(v29 + 96);
          if ( (*(_DWORD *)(v30 + 12) & 0x10) != 0 )
            goto LABEL_43;
          v31 = *(unsigned __int16 *)(v30 + 4);
          v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v30 + 24) + 4LL));
          v33 = *(__int64 **)(v32 + 8);
          if ( (unsigned int)v31 < *(_DWORD *)(v32 + 80) )
            v33 += v31;
          goto LABEL_42;
        }
        v133 = *(_QWORD *)(v28 + 40);
        v134 = *(_QWORD *)(v133 + 16);
        v135 = *(unsigned __int16 *)(v134 + 4);
        v136 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v133 + 8) + 40LL) + 32LL)
                         + 8LL * *(unsigned int *)(*(_QWORD *)(v134 + 24) + 4LL));
        if ( v136 )
        {
          v33 = *(__int64 **)(v136 + 8);
          if ( (unsigned int)v135 < *(_DWORD *)(v136 + 80) )
            v33 += v135;
LABEL_42:
          v10 = *v33;
        }
LABEL_43:
        if ( v10 )
          ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 80);
        break;
      case 10:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v9 + 88) + 2804);
        v105 = *(_QWORD *)(v9 + 48);
        v106 = *(_QWORD *)(v105 + 96);
        if ( (*(_DWORD *)(v106 + 12) & 0x10) == 0 )
        {
          v107 = *(unsigned __int16 *)(v106 + 4);
          v108 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 104) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v106 + 24) + 4LL));
          v109 = *(__int64 **)(v108 + 8);
          if ( (unsigned int)v107 < *(_DWORD *)(v108 + 80) )
            v109 += v107;
          v10 = *v109;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v9 + 88) + 156);
        return;
      case 12:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v9 + 88) + 2808);
        v127 = *(_QWORD *)(v9 + 48);
        v128 = *(_QWORD *)(v127 + 96);
        if ( (*(_DWORD *)(v128 + 12) & 0x10) == 0 )
        {
          v129 = *(unsigned __int16 *)(v128 + 4);
          v130 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 104) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v128 + 24) + 4LL));
          v131 = *(__int64 **)(v130 + 8);
          if ( (unsigned int)v129 < *(_DWORD *)(v130 + 80) )
            v131 += v129;
          v10 = *v131;
        }
        v132 = 2 * (*(int *)(v9 + 88) + 10LL);
        ++*(_DWORD *)(v10 + 8 * v132);
        return;
      default:
        return;
    }
  }
}
