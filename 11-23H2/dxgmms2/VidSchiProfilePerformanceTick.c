/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000AA30
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006E60 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007CC0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008770 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00091C0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A430 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C000A7A0 (VidSchiSelectContext.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B640 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSendToExecutionQueue @ 0x1C000C930 (VidSchiSendToExecutionQueue.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C000D1C0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000F230 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C00138CC (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C0013CC4 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C0017644 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0017CD4 (VidSchiNeedToForcePreemptNode.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001CB4C (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C001DB7E (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C003AD5C (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C003B3EC (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0047048 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00AE030 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00B57D8 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C0106EAC (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C0106F70 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001CF4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0005FB8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C0019900 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BBC (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC00 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EE34 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C002EEAC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqPR4PR4_EtwWriteTransfer @ 0x1C0037E38 (McTemplateK0ppqqqPR4PR4_EtwWriteTransfer.c)
 *     McTemplateK0ppqxqpq_EtwWriteTransfer @ 0x1C0038008 (McTemplateK0ppqxqpq_EtwWriteTransfer.c)
 *     McTemplateK0pqqPR2p_EtwWriteTransfer @ 0x1C0038428 (McTemplateK0pqqPR2p_EtwWriteTransfer.c)
 *     McTemplateK0pqqpxp_EtwWriteTransfer @ 0x1C0038984 (McTemplateK0pqqpxp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqPR3XR3p_EtwWriteTransfer @ 0x1C0038B38 (McTemplateK0pqqqPR3XR3p_EtwWriteTransfer.c)
 *     McTemplateK0pqqttp_EtwWriteTransfer @ 0x1C0038E48 (McTemplateK0pqqttp_EtwWriteTransfer.c)
 *     McTemplateK0pqqxqqtppx_EtwWriteTransfer @ 0x1C0039190 (McTemplateK0pqqxqqtppx_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqqxqp_EtwWriteTransfer @ 0x1C0039428 (McTemplateK0pqxqqqxqp_EtwWriteTransfer.c)
 *     McTemplateK0pqxqt_EtwWriteTransfer @ 0x1C003951C (McTemplateK0pqxqt_EtwWriteTransfer.c)
 *     McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer @ 0x1C003980C (McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer.c)
 *     McTemplateK0qtpiixi_EtwWriteTransfer @ 0x1C0039C14 (McTemplateK0qtpiixi_EtwWriteTransfer.c)
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
  __int64 v8; // r13
  int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // r9
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // r10d
  __int16 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 *v26; // r14
  __int64 v27; // r8
  unsigned int *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // ecx
  unsigned __int64 v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // r12
  _BYTE *Pool2; // rcx
  __int64 v39; // r12
  unsigned int v40; // r8d
  unsigned int v41; // edx
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // r12
  __int64 v59; // r13
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  int v70; // r8d
  __int64 v71; // r9
  int v72; // ecx
  __int64 v73; // rdx
  __int64 v74; // r9
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 *v79; // r14
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 *v85; // r14
  __int64 v86; // rdx
  __int64 v87; // r9
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 *v99; // r14
  __int64 v100; // rax
  __int64 v101; // r10
  int v102; // eax
  __int64 v103; // r11
  __int64 v104; // rdx
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r9
  int v110; // r9d
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // r8
  __int64 v118; // rcx
  __int64 v119; // r9
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rcx
  __int64 *v123; // r14
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // rcx
  int v129; // [rsp+20h] [rbp-B9h]
  _BYTE *v131; // [rsp+98h] [rbp-41h]
  _BYTE v132[16]; // [rsp+A0h] [rbp-39h] BYREF
  int v133; // [rsp+B0h] [rbp-29h]
  PVOID P; // [rsp+B8h] [rbp-21h]
  _BYTE v135[16]; // [rsp+C0h] [rbp-19h] BYREF
  int v136; // [rsp+D0h] [rbp-9h]

  v8 = a7;
  v9 = a8;
  v10 = 0LL;
  v11 = a3;
  v13 = a1;
  if ( !bTracingEnabled )
    goto LABEL_16;
  if ( (_DWORD)a1 == 2 )
  {
    v15 = *(_QWORD *)(a2 + 504);
    if ( a5 )
    {
      v17 = *(_QWORD *)(a5 + 96);
      v18 = *(_QWORD *)(a5 + 56);
      v19 = *(_DWORD *)(v17 + 1768);
      v20 = *(_WORD *)(v17 + 4);
      if ( !v18 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LOBYTE(v18) = a5;
    }
    else
    {
      LOBYTE(v19) = 0;
      LOBYTE(v20) = 0;
      LOBYTE(v18) = 0;
    }
    if ( (byte_1C0076981 & 2) != 0 )
    {
      v16 = ((unsigned __int64)*(unsigned int *)(a2 + 84) + 63) >> 6;
      McTemplateK0ppqqqPR4PR4_EtwWriteTransfer(
        v16,
        v15,
        *(_QWORD *)(a2 + 456),
        *(_QWORD *)(a2 + 16),
        v18,
        v20,
        v19,
        v16,
        *(_QWORD *)(a2 + 456),
        v15);
    }
    goto LABEL_15;
  }
  if ( (_DWORD)a1 == 9 )
  {
LABEL_30:
    if ( a7 )
    {
      v73 = *(_QWORD *)(a7 + 48);
      v74 = *(_QWORD *)(v73 + 56);
      if ( !v74 || (LODWORD(a1) = *(_DWORD *)(v73 + 112), (a1 & 0x40) != 0) )
        v74 = *(_QWORD *)(a7 + 48);
      if ( (byte_1C0076981 & 1) != 0 )
        McTemplateK0pqxqt_EtwWriteTransfer(
          a1,
          v73,
          v13 == 11,
          v74,
          *(_DWORD *)(a7 + 88),
          *(_QWORD *)(a7 + 104),
          *(_DWORD *)(a7 + 96),
          v13 == 11);
      goto LABEL_15;
    }
    if ( !a6 )
      goto LABEL_16;
    v27 = *(unsigned int *)(a6 + 48);
    if ( (_DWORD)a1 == 9 )
    {
      if ( (_DWORD)v27 == 4 )
      {
        v28 = (unsigned int *)(a6 + 112);
        v29 = *(_QWORD *)(a6 + 88);
        v27 = *(unsigned int *)(a6 + 112);
        v30 = (*(_DWORD *)(a6 + 272) >> 1) & 1;
        if ( v29 )
        {
          v31 = *(_QWORD *)(v29 + 56);
          if ( !v31 || (*(_DWORD *)(v29 + 112) & 0x40) != 0 )
            v31 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v31 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v31 )
            v31 = *(_QWORD *)(a6 + 96);
        }
        if ( (byte_1C0076981 & 1) != 0 )
          McTemplateK0pqqttp_EtwWriteTransfer(v30, v29, v27, v31, 4, v27, v30);
        goto LABEL_84;
      }
    }
    else if ( (_DWORD)a1 == 11 )
    {
      v30 = 1LL;
      goto LABEL_79;
    }
    v30 = 0LL;
LABEL_79:
    v52 = *(_QWORD *)(a6 + 88);
    v28 = (unsigned int *)(a6 + 112);
    if ( v52 )
    {
      v53 = *(_QWORD *)(v52 + 56);
      if ( !v53 || (*(_DWORD *)(v52 + 112) & 0x40) != 0 )
        v53 = *(_QWORD *)(a6 + 88);
    }
    else
    {
      v53 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
      if ( !v53 )
        v53 = *(_QWORD *)(a6 + 96);
    }
    if ( (byte_1C0076981 & 1) != 0 )
      McTemplateK0pqqttp_EtwWriteTransfer(v30, v52, v27, v53, v27, *(_DWORD *)(a6 + 112), v30);
LABEL_84:
    v54 = *(_DWORD *)(a6 + 48);
    if ( v54 )
    {
      if ( ((v54 - 3) & 0xFFFFFFFB) != 0 )
      {
LABEL_86:
        v9 = a8;
        goto LABEL_15;
      }
    }
    else if ( (*(_DWORD *)(a6 + 72) & 0x4000) == 0 )
    {
      goto LABEL_86;
    }
    if ( (byte_1C0076983 & 0x20) != 0 )
    {
      McTemplateK0q_EtwWriteTransfer(v30, &EventPresentQueueComplete, v27, *v28);
      v9 = a8;
      goto LABEL_15;
    }
    goto LABEL_86;
  }
  if ( (_DWORD)a1 != 20 )
  {
    if ( (_DWORD)a1 == 5 )
    {
      v32 = *(_QWORD *)(a6 + 88);
      v33 = *(_QWORD *)(v32 + 56);
      if ( !v33 || (*(_DWORD *)(v32 + 112) & 0x40) != 0 )
        v33 = *(_QWORD *)(a6 + 88);
      if ( (byte_1C0076981 & 1) != 0 )
        McTemplateK0pqq_EtwWriteTransfer(
          v32,
          (unsigned int)&EventQueueSelect,
          *(_DWORD *)(a6 + 48),
          v33,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112));
      goto LABEL_15;
    }
    if ( (_DWORD)a1 != 4 )
    {
      switch ( (int)a1 )
      {
        case 1:
          v63 = *(_QWORD *)(a5 + 56);
          if ( !v63 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            v63 = a5;
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventAttemptPreemption, a3, v63, a8);
          goto LABEL_15;
        case 7:
          v58 = 0LL;
          if ( *(_DWORD *)(a7 + 88) == 1 )
          {
            v100 = *(_QWORD *)(a7 + 56);
            if ( v100 )
            {
              if ( *(_DWORD *)(v100 + 48) == 8 )
                v58 = *(_QWORD *)(v100 + 88);
            }
          }
          v59 = *(_QWORD *)(a7 + 48);
          if ( *(_DWORD *)(v59 + 984) >= 0x80u )
            VidSchiFlushGpuWorkEntries(*(struct _VIDSCH_CONTEXT **)(a7 + 48), a2, a3);
          if ( *(_QWORD *)(v59 + 992)
            || (v94 = operator new[](1024LL, 0x61616956u, 64LL), (*(_QWORD *)(v59 + 992) = v94) != 0LL) )
          {
            *(LARGE_INTEGER *)(*(_QWORD *)(v59 + 992) + 8LL * (unsigned int)(*(_DWORD *)(v59 + 984))++) = KeQueryPerformanceCounter(0LL);
          }
          else
          {
            WdLogSingleEntry0(1LL);
            ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
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
          v8 = a7;
          v60 = *(_QWORD *)(a7 + 48);
          if ( v58 )
          {
            v61 = *(_QWORD *)(v58 + 56);
            if ( !v61 || (*(_DWORD *)(v58 + 112) & 0x40) != 0 )
              LODWORD(v61) = v58;
          }
          else
          {
            LODWORD(v61) = 0;
          }
          v62 = *(_QWORD *)(v60 + 56);
          if ( !v62 || (*(_DWORD *)(v60 + 112) & 0x40) != 0 )
            LODWORD(v62) = *(_QWORD *)(a7 + 48);
          if ( (byte_1C0076981 & 1) != 0 )
            McTemplateK0ppqxqpq_EtwWriteTransfer(
              *(_QWORD *)(a7 + 64),
              v60,
              v61,
              v62,
              v61,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              *(_QWORD *)(a7 + 64),
              *(_DWORD *)(v60 + 436));
          goto LABEL_111;
        case 8:
        case 10:
        case 12:
          LODWORD(v69) = 0;
          v70 = 0;
          LOBYTE(v71) = 0;
          v72 = 0;
          switch ( v13 )
          {
            case 8:
              v72 = 1;
              break;
            case 10:
              v72 = 2;
              break;
            case 12:
              v69 = *(_QWORD *)(a8 + 40);
              v72 = 9;
              v70 = *(_DWORD *)(a8 + 32);
              v71 = *(_QWORD *)(a8 + 64);
              break;
          }
          if ( (byte_1C0076981 & 1) != 0 )
          {
            v101 = *(_QWORD *)(a7 + 48);
            v102 = *(_DWORD *)(a7 + 96);
            v103 = *(_QWORD *)(v101 + 56);
            if ( !v103 || (*(_DWORD *)(v101 + 112) & 0x40) != 0 )
              LODWORD(v103) = *(_QWORD *)(a7 + 48);
            McTemplateK0pqxqqqxqp_EtwWriteTransfer(
              v72,
              v69,
              v70,
              v103,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              v102,
              v72,
              *(_DWORD *)(v101 + 436),
              v69,
              v70,
              v71);
            v9 = a8;
          }
          goto LABEL_15;
        case 11:
        case 13:
          goto LABEL_30;
        case 14:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          v129 = 1;
          goto LABEL_188;
        case 15:
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
          goto LABEL_15;
        case 16:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          v129 = 3;
          goto LABEL_188;
        case 17:
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          McTemplateK0pq_EtwWriteTransfer(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
          goto LABEL_15;
        case 18:
          v14 = *(_QWORD *)(a2 + 16);
          if ( (byte_1C0076981 & 1) == 0 )
            goto LABEL_9;
          a1 = 2LL;
          v129 = 2;
LABEL_188:
          McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterWorkerThread, a3, v14, v129);
          goto LABEL_15;
        case 19:
          if ( (byte_1C0076981 & 1) == 0 )
          {
LABEL_9:
            v11 = a3;
            goto LABEL_16;
          }
          McTemplateK0pq_EtwWriteTransfer(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
          break;
        default:
          goto LABEL_16;
      }
      goto LABEL_15;
    }
    v34 = *(_DWORD *)(a6 + 48);
    if ( v34 == 5 )
    {
      v35 = *(unsigned int *)(a6 + 276);
      v131 = 0LL;
      v133 = 0;
      if ( (unsigned int)v35 > 2 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v35 < 8 )
        {
          v36 = 0LL;
LABEL_50:
          v37 = *(unsigned int *)(a6 + 276);
          Pool2 = 0LL;
          P = 0LL;
          v136 = 0;
          if ( (unsigned int)v37 > 2 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / v37 < 8 )
            {
              v39 = 0LL;
LABEL_54:
              if ( v36 && v39 )
              {
                v40 = *(_DWORD *)(a6 + 276);
                v41 = 0;
                if ( v40 )
                {
                  do
                  {
                    *(_QWORD *)(8LL * v41 + v36) = *(_QWORD *)(a6 + 8LL * v41 + 280);
                    v42 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v41 + 280) + 48LL);
                    if ( v42 == 4 || v42 == 2 || (v43 = 0LL, v42 == 5) )
                      v43 = *(_QWORD *)(a6 + 8LL * v41 + 536);
                    *(_QWORD *)(8LL * v41++ + v39) = v43;
                    v40 = *(_DWORD *)(a6 + 276);
                  }
                  while ( v41 < v40 );
                  Pool2 = P;
                }
                if ( (byte_1C0076983 & 0x20) != 0 )
                {
                  v110 = *(_DWORD *)(a6 + 272);
                  if ( (v110 & 0x10) != 0 )
                  {
                    v111 = *(_QWORD *)(a6 + 88);
                    if ( v111 )
                    {
                      v112 = *(_QWORD *)(v111 + 56);
                      if ( !v112 || (*(_DWORD *)(v111 + 112) & 0x40) != 0 )
                        v112 = *(_QWORD *)(a6 + 88);
                    }
                    else
                    {
                      v112 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                      if ( !v112 )
                        v112 = *(_QWORD *)(a6 + 96);
                    }
                    McTemplateK0qpqdqPR4XR4p_EtwWriteTransfer(
                      v112,
                      v111,
                      v40,
                      0,
                      v112,
                      *(_DWORD *)(a6 + 112),
                      v110,
                      v40,
                      v36,
                      v39,
                      a6);
                    Pool2 = P;
                  }
                }
                v44 = *(_QWORD *)(a6 + 88);
                if ( v44 )
                {
                  v45 = *(_QWORD *)(v44 + 56);
                  if ( !v45 || (*(_DWORD *)(v44 + 112) & 0x40) != 0 )
                    v45 = *(_QWORD *)(a6 + 88);
                }
                else
                {
                  v45 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
                  if ( !v45 )
                    v45 = *(_QWORD *)(a6 + 96);
                }
                if ( (byte_1C0076981 & 1) != 0 )
                {
                  McTemplateK0pqqqPR3XR3p_EtwWriteTransfer(
                    (_DWORD)Pool2,
                    v44,
                    *(_DWORD *)(a6 + 276),
                    v45,
                    *(_DWORD *)(a6 + 112),
                    *(_DWORD *)(a6 + 272),
                    *(_DWORD *)(a6 + 276),
                    v36,
                    v39,
                    a6);
                  Pool2 = P;
                }
              }
              if ( Pool2 != v135 && Pool2 )
                ExFreePoolWithTag(Pool2, 0);
              P = 0LL;
              v136 = 0;
              if ( v131 != v132 && v131 )
                ExFreePoolWithTag(v131, 0);
              v8 = a7;
              v9 = a8;
              goto LABEL_15;
            }
            Pool2 = (_BYTE *)ExAllocatePool2(64LL, 8 * v37, 945908054LL);
            P = Pool2;
          }
          else
          {
            Pool2 = v135;
            P = v135;
            if ( (_DWORD)v37 )
            {
              memset(v135, 0, 8LL * (unsigned int)v37);
              Pool2 = P;
            }
          }
          v136 = v37;
          v39 = (__int64)Pool2;
          goto LABEL_54;
        }
        v131 = (_BYTE *)ExAllocatePool2(64LL, 8 * v35, 945908054LL);
      }
      else
      {
        v131 = v132;
        if ( (_DWORD)v35 )
          memset(v132, 0, 8LL * (unsigned int)v35);
      }
      v36 = (__int64)v131;
      v133 = v35;
      goto LABEL_50;
    }
    if ( v34 )
    {
      switch ( v34 )
      {
        case 3:
          goto LABEL_146;
        case 4:
          v92 = *(_QWORD *)(a6 + 88);
          if ( v92 )
          {
            v93 = *(_QWORD *)(v92 + 56);
            if ( !v93 || (*(_DWORD *)(v92 + 112) & 0x40) != 0 )
              v93 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v93 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
            if ( !v93 )
              v93 = *(_QWORD *)(a6 + 96);
          }
          if ( (byte_1C0076981 & 1) != 0 )
            McTemplateK0pqqpxp_EtwWriteTransfer(
              v92,
              *(_QWORD *)(a6 + 304),
              *(_QWORD *)(a6 + 280),
              v93,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 272),
              *(_QWORD *)(a6 + 280),
              *(_QWORD *)(a6 + 304),
              a6);
          goto LABEL_15;
        case 7:
LABEL_146:
          if ( (byte_1C0076983 & 0x20) != 0 )
          {
            v104 = *(_QWORD *)(a6 + 88);
            if ( v104 )
            {
              v105 = *(_QWORD *)(v104 + 56);
              if ( !v105 || (*(_DWORD *)(v104 + 112) & 0x40) != 0 )
                v105 = *(_QWORD *)(a6 + 88);
            }
            else
            {
              v105 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
              if ( !v105 )
                v105 = *(_QWORD *)(a6 + 96);
            }
            McTemplateK0pqq_EtwWriteTransfer(
              v34,
              (unsigned int)&EventPresentQueueSubmit,
              *(_DWORD *)(a6 + 112),
              v105,
              v34,
              *(_DWORD *)(a6 + 112));
          }
          break;
      }
      v86 = *(_QWORD *)(a6 + 88);
      if ( v86 )
      {
        v87 = *(_QWORD *)(v86 + 56);
        if ( !v87 || (*(_DWORD *)(v86 + 112) & 0x40) != 0 )
          v87 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v87 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v87 )
          v87 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C0076981 & 1) != 0 )
      {
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          v86,
          *(_QWORD *)(a6 + 768),
          v87,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112),
          0,
          0,
          0,
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 280),
          a6,
          *(_QWORD *)(a6 + 768));
        v9 = a8;
        goto LABEL_15;
      }
    }
    else
    {
      if ( (*(_DWORD *)(a6 + 72) & 0x4000) != 0 && (byte_1C0076983 & 0x20) != 0 )
      {
        v106 = *(_QWORD *)(a6 + 88);
        if ( v106 )
        {
          v107 = *(_QWORD *)(v106 + 56);
          if ( !v107 || (*(_DWORD *)(v106 + 112) & 0x40) != 0 )
            v107 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v107 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v107 )
            v107 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqq_EtwWriteTransfer(
          0,
          (unsigned int)&EventPresentQueueSubmit,
          *(_DWORD *)(a6 + 112),
          v107,
          0,
          *(_DWORD *)(a6 + 112));
      }
      v55 = *(_QWORD *)(a6 + 88);
      if ( v55 )
      {
        v56 = *(_QWORD *)(v55 + 56);
        if ( !v56 || (*(_DWORD *)(v55 + 112) & 0x40) != 0 )
          LODWORD(v56) = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v56 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
        if ( !v56 )
          v56 = *(_QWORD *)(a6 + 96);
      }
      if ( (byte_1C0076981 & 1) != 0 )
        McTemplateK0pqqxqqtppx_EtwWriteTransfer(
          v55,
          (*(_DWORD *)(a6 + 72) >> 14) & 1,
          *(_QWORD *)(a6 + 768),
          v56,
          *(_DWORD *)(a6 + 48),
          *(_DWORD *)(a6 + 112),
          *(_DWORD *)(a6 + 324),
          *(_DWORD *)(a6 + 332),
          *(_DWORD *)(a6 + 340),
          (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
          *(_QWORD *)(a6 + 280),
          a6,
          *(_QWORD *)(a6 + 768));
      v57 = *(_DWORD *)(a6 + 472);
      if ( v57 && (byte_1C0076981 & 0x10) != 0 )
      {
        v108 = *(_QWORD *)(a6 + 88);
        if ( v108 )
        {
          v109 = *(_QWORD *)(v108 + 56);
          if ( !v109 || (*(_DWORD *)(v108 + 112) & 0x40) != 0 )
            v109 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v109 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 48LL);
          if ( !v109 )
            v109 = *(_QWORD *)(a6 + 96);
        }
        McTemplateK0pqqPR2p_EtwWriteTransfer(v57, v108, a6 + 480, v109, *(_DWORD *)(a6 + 112), v57, a6 + 480, a6);
        v9 = a8;
        goto LABEL_15;
      }
    }
LABEL_111:
    v9 = a8;
LABEL_15:
    v11 = a3;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(a2 + 2536) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
  {
    v113 = *(_QWORD *)(a5 + 440);
    if ( v113 <= 0 && (byte_1C0076981 & 1) != 0 )
    {
      v114 = *(_QWORD *)(a5 + 56);
      if ( !v114 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
        LODWORD(v114) = a5;
      McTemplateK0qtpiixi_EtwWriteTransfer(
        v114,
        v113,
        *(_QWORD *)(a5 + 448),
        *(unsigned __int16 *)(a3 + 4),
        a8 != 0,
        v114,
        *(_QWORD *)(a5 + 472),
        v113,
        *(_QWORD *)(a5 + 464),
        *(_QWORD *)(a5 + 448));
      goto LABEL_15;
    }
  }
LABEL_16:
  if ( *(int *)(a2 + 6472) >= 1 )
  {
    if ( v13 == 1 )
    {
      if ( v9 < 0 )
      {
        v9 = -v9;
      }
      else if ( v9 >= 16 )
      {
        v9 = 1;
      }
      ++*(_DWORD *)(v11 + 2660);
      ++*(_DWORD *)(v11 + 4LL * v9 + 2660);
      v64 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v64 + 12) & 0x40) != 0 )
      {
        v68 = 0LL;
      }
      else
      {
        v65 = *(unsigned __int16 *)(v64 + 4);
        v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v64 + 24) + 4LL));
        v67 = *(__int64 **)(v66 + 8);
        if ( (unsigned int)v65 < *(_DWORD *)(v66 + 80) )
          v67 += v65;
        v68 = *v67;
        v11 = a3;
      }
      ++*(_DWORD *)(v68 + 12);
      ++*(_DWORD *)(v68 + 4LL * v9 + 12);
    }
    else if ( v13 == 3 )
    {
      ++*(_DWORD *)(v11 + 2656);
      v88 = *(_QWORD *)(a5 + 96);
      if ( (*(_DWORD *)(v88 + 12) & 0x40) == 0 )
      {
        v89 = *(unsigned __int16 *)(v88 + 4);
        v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 32LL)
                        + 8LL * *(unsigned int *)(*(_QWORD *)(v88 + 24) + 4LL));
        v91 = *(_QWORD *)(v90 + 8);
        if ( (unsigned int)v89 < *(_DWORD *)(v90 + 80) )
          v91 += 8 * v89;
        if ( *(_QWORD *)v91 )
          ++*(_DWORD *)(*(_QWORD *)v91 + 8LL);
      }
    }
  }
  if ( *(int *)(a2 + 6472) >= 2 )
  {
    switch ( v13 )
    {
      case 4:
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2724);
        v46 = *(_QWORD *)(a6 + 96);
        if ( v46 )
        {
          v115 = *(_QWORD *)(v46 + 40);
          v116 = *(_QWORD *)(v115 + 16);
          v117 = *(unsigned __int16 *)(v116 + 4);
          v118 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v115 + 8) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v116 + 24) + 4LL));
          if ( !v118 )
          {
LABEL_75:
            if ( v10 )
              ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 76);
            return;
          }
          v51 = *(__int64 **)(v118 + 8);
          if ( (unsigned int)v117 < *(_DWORD *)(v118 + 80) )
            v51 += v117;
        }
        else
        {
          v47 = *(_QWORD *)(a6 + 88);
          v48 = *(_QWORD *)(v47 + 96);
          if ( (*(_DWORD *)(v48 + 12) & 0x40) != 0 )
            goto LABEL_75;
          v49 = *(unsigned __int16 *)(v48 + 4);
          v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v48 + 24) + 4LL));
          v51 = *(__int64 **)(v50 + 8);
          if ( (unsigned int)v49 < *(_DWORD *)(v50 + 80) )
            v51 += v49;
        }
        v10 = *v51;
        goto LABEL_75;
      case 7:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2796);
        v75 = *(_QWORD *)(v8 + 48);
        v76 = *(_QWORD *)(v75 + 96);
        if ( (*(_DWORD *)(v76 + 12) & 0x40) == 0 )
        {
          v77 = *(unsigned __int16 *)(v76 + 4);
          v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v76 + 24) + 4LL));
          v79 = *(__int64 **)(v78 + 8);
          if ( (unsigned int)v77 < *(_DWORD *)(v78 + 80) )
            v79 += v77;
          v10 = *v79;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 148);
        return;
      case 8:
        v80 = 2 * (*(int *)(v8 + 88) + 175LL);
        ++*(_DWORD *)(v11 + 8 * v80);
        v81 = *(_QWORD *)(v8 + 48);
        v82 = *(_QWORD *)(v81 + 96);
        if ( (*(_DWORD *)(v82 + 12) & 0x40) == 0 )
        {
          v83 = *(unsigned __int16 *)(v82 + 4);
          v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v82 + 24) + 4LL));
          v85 = *(__int64 **)(v84 + 8);
          if ( (unsigned int)v83 < *(_DWORD *)(v84 + 80) )
            v85 += v83;
          v10 = *v85;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 152);
        return;
      case 9:
      case 11:
      case 13:
        if ( !a6 )
          return;
        ++*(_DWORD *)(v11 + 8LL * *(int *)(a6 + 48) + 2728);
        v21 = *(_QWORD *)(a6 + 96);
        if ( v21 )
        {
          v125 = *(_QWORD *)(v21 + 40);
          v126 = *(_QWORD *)(v125 + 16);
          v127 = *(unsigned __int16 *)(v126 + 4);
          v128 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v125 + 8) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v126 + 24) + 4LL));
          if ( !v128 )
          {
LABEL_28:
            if ( v10 )
              ++*(_DWORD *)(v10 + 8LL * *(int *)(a6 + 48) + 80);
            return;
          }
          v26 = *(__int64 **)(v128 + 8);
          if ( (unsigned int)v127 < *(_DWORD *)(v128 + 80) )
            v26 += v127;
        }
        else
        {
          v22 = *(_QWORD *)(a6 + 88);
          v23 = *(_QWORD *)(v22 + 96);
          if ( (*(_DWORD *)(v23 + 12) & 0x40) != 0 )
            goto LABEL_28;
          v24 = *(unsigned __int16 *)(v23 + 4);
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v23 + 24) + 4LL));
          v26 = *(__int64 **)(v25 + 8);
          if ( (unsigned int)v24 < *(_DWORD *)(v25 + 80) )
            v26 += v24;
        }
        v10 = *v26;
        goto LABEL_28;
      case 10:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2804);
        v95 = *(_QWORD *)(v8 + 48);
        v96 = *(_QWORD *)(v95 + 96);
        if ( (*(_DWORD *)(v96 + 12) & 0x40) == 0 )
        {
          v97 = *(unsigned __int16 *)(v96 + 4);
          v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v95 + 104) + 40LL) + 32LL)
                          + 8LL * *(unsigned int *)(*(_QWORD *)(v96 + 24) + 4LL));
          v99 = *(__int64 **)(v98 + 8);
          if ( (unsigned int)v97 < *(_DWORD *)(v98 + 80) )
            v99 += v97;
          v10 = *v99;
        }
        ++*(_DWORD *)(v10 + 16LL * *(int *)(v8 + 88) + 156);
        return;
      case 12:
        ++*(_DWORD *)(v11 + 16LL * *(int *)(v8 + 88) + 2808);
        v119 = *(_QWORD *)(v8 + 48);
        v120 = *(_QWORD *)(v119 + 96);
        if ( (*(_DWORD *)(v120 + 12) & 0x40) == 0 )
        {
          v121 = *(unsigned __int16 *)(v120 + 4);
          v122 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 + 104) + 40LL) + 32LL)
                           + 8LL * *(unsigned int *)(*(_QWORD *)(v120 + 24) + 4LL));
          v123 = *(__int64 **)(v122 + 8);
          if ( (unsigned int)v121 < *(_DWORD *)(v122 + 80) )
            v123 += v121;
          v10 = *v123;
        }
        v124 = 2 * (*(int *)(v8 + 88) + 10LL);
        ++*(_DWORD *)(v10 + 8 * v124);
        return;
      default:
        return;
    }
  }
}
