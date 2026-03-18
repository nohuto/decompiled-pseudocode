/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000BDB0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000B960 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C001C228 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00344AC (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035940 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C003F638 (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0042100 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C250 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000E394 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F38 (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0015F9C (-UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VI.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C001AE48 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003A160 (VidSchiRestartQueuedFlip.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r11
  __int64 v5; // r10
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // r8d
  unsigned int v14; // r13d
  __int64 v15; // r14
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  bool v31; // al
  unsigned int v32; // r10d
  unsigned __int64 v33; // r11
  unsigned __int64 *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // [rsp+20h] [rbp-68h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  unsigned int v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  char v43; // [rsp+98h] [rbp+10h] BYREF
  int v44; // [rsp+A0h] [rbp+18h]
  LARGE_INTEGER *v45; // [rsp+A8h] [rbp+20h]

  result = (__int64)&retaddr;
  v3 = 0LL;
  v5 = a1;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 40) )
  {
    v7 = 16404LL;
    while ( 1 )
    {
      result = v6;
      v8 = a2 + 8LL * v6;
      v9 = *(_QWORD *)(v8 + 3200);
      if ( *(_BYTE *)(v9 + 78580) )
        break;
LABEL_19:
      if ( ++v6 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v10 = -1;
    while ( 2 )
    {
      if ( v10 == *(_DWORD *)(a2 + 152) )
        goto LABEL_19;
      v11 = *(_QWORD *)(v8 + 3200);
      if ( v10 == -1 )
      {
        v12 = *(_QWORD *)(v11 + 24);
      }
      else
      {
        result = v10;
        v12 = *(_QWORD *)(v11 + 8LL * v10 + 32);
      }
      if ( !v12 )
        goto LABEL_9;
      v13 = 1;
      v43 = 0;
      v14 = *(_DWORD *)(v12 + 60);
      v44 = 1;
      while ( 1 )
      {
        v15 = v12 + 1376LL * v14;
        result = *(unsigned int *)(v15 + 1172);
        v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
        if ( (_DWORD)result == 1 || (_DWORD)result == 16 )
          break;
        if ( (unsigned int)result <= 0xE && _bittest((const int *)&v7, result) )
        {
          v29 = *(_DWORD *)(v9 + 4);
          if ( v29 == 3
            || v29 == 5
            && (*(_DWORD *)(v15 + 1256) & 0x100) != 0
            && (v30 = *(_DWORD *)(1376LL * *(unsigned int *)(v12 + 68) + v12 + 1172), v30 != 5)
            && v30 != 15 )
          {
            if ( v14 == *(_DWORD *)(v12 + 64) )
            {
              if ( !*(_BYTE *)(a2 + 156)
                || (v31 = VidSchiCheckPendingFlipsForThisEntry(
                            (struct _VIDSCH_GLOBAL *)a2,
                            (struct _VIDSCH_PRESENT_INFO *)v9,
                            (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120),
                            (struct VIDSCH_FLIP_QUEUE *)0x4014),
                    v5 = a1,
                    !v31) )
              {
                *(_DWORD *)(v15 + 1172) = 4;
                LODWORD(v36) = v14;
                VidSchiExecuteMmIoFlip(v5, a2, v6, v12, v36, &v43);
                goto LABEL_48;
              }
LABEL_49:
              v13 = v44;
              v3 = 0LL;
              v7 = 16404LL;
            }
          }
        }
        else if ( (_DWORD)result != 3 )
        {
          goto LABEL_16;
        }
        v14 = ((_BYTE)v14 + 1) & 0x3F;
        *(_DWORD *)(v12 + 60) = v14;
      }
      v17 = *(_QWORD *)(v15 + 1160);
      v39 = v17;
      if ( !*(_BYTE *)(v17 + 204) && !_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 200), 0, 0) )
      {
        v7 = *(unsigned int *)(v15 + 1212);
        if ( (*(_DWORD *)(v15 + 1256) & 0x4000) != 0 )
        {
          v32 = 0;
          if ( (_DWORD)v7 )
          {
            do
            {
              v7 = *((_QWORD *)v16 + v32);
              v33 = *((_QWORD *)v16 + v32 + 64);
              if ( !*(_BYTE *)(v7 + 28) )
              {
                v34 = *(unsigned __int64 **)(v7 + 64);
                if ( *(_BYTE *)(v7 + 29) )
                {
                  if ( *v34 < v33 )
                    goto LABEL_51;
                }
                else if ( *(_DWORD *)v34 - (int)v33 < 0 )
                {
                  goto LABEL_51;
                }
              }
              ++v32;
            }
            while ( v32 < *(_DWORD *)(v15 + 1212) );
          }
        }
        else if ( (_DWORD)v7 )
        {
          v18 = *(_QWORD *)(v15 + 8LL * (unsigned int)(v7 - 1) + 120);
          while ( 1 )
          {
            v19 = *((_QWORD *)v16 + v3);
            if ( v19 )
            {
              v20 = *(_DWORD *)(v15 + 8 * v3 + 644) == *(_DWORD *)(v19 + 164);
              v38 = *(_DWORD *)(v15 + 8 * v3 + 644);
              v13 = v44;
              LODWORD(v45) = *(_DWORD *)(v19 + 164);
              v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
              if ( v20 && *((_DWORD *)v16 + 2 * v3 + 130) > *(_DWORD *)(v19 + 160) )
                break;
              if ( v38 > (unsigned int)v45 )
                break;
            }
            v3 = (unsigned int)(v3 + 1);
            if ( (unsigned int)v3 >= (unsigned int)v7 )
            {
              if ( v18 )
              {
                LOBYTE(v16) = 1;
                VidSchiUpdateLastCompletedPresentTimestamp(v18, v16, 0LL);
                v13 = v44;
                v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
              }
              v17 = v39;
              goto LABEL_34;
            }
          }
LABEL_51:
          v27 = *(_QWORD *)(v8 + 3200);
          HIDWORD(v36) = HIDWORD(v12);
          v28 = *(unsigned int *)(v27 + 136);
          *(_DWORD *)(v27 + 136) = (v28 + 1) & (*(_DWORD *)(v27 + 120) - 1);
          result = VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(*(_QWORD *)(v27 + 128) + 112 * v28, 0LL, a2);
          v5 = a1;
          v3 = 0LL;
          v7 = 16404LL;
LABEL_16:
          if ( v43 )
          {
            result = VidSchiCompletePendingFlipOnPlane(v5, a2, v6, v12, 9);
            v5 = a1;
            v3 = 0LL;
            v7 = 16404LL;
          }
LABEL_9:
          ++v10;
          continue;
        }
LABEL_34:
        if ( (*(_DWORD *)(v15 + 1256) & 0x8000) != 0 )
        {
          v35 = *(_QWORD *)(v17 + 32);
          if ( *(_BYTE *)(v35 + 56) )
          {
            ((void (__fastcall *)(_QWORD, struct _VIDSCH_FLIP_QUEUE_ENTRY *))DxgCoreInterface[23])(
              *(_QWORD *)(v35 + 8),
              v16);
            v13 = v44;
            v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
          }
        }
      }
      break;
    }
    v21 = *(_DWORD *)(v9 + 4);
    if ( v21 == 3 )
    {
      if ( v14 == *(_DWORD *)(v12 + 64)
        && (!*(_BYTE *)(a2 + 156)
         || !VidSchiCheckPendingFlipsForThisEntry(
               (struct _VIDSCH_GLOBAL *)a2,
               (struct _VIDSCH_PRESENT_INFO *)v9,
               v16,
               (struct VIDSCH_FLIP_QUEUE *)v7)) )
      {
        *(_DWORD *)(v15 + 1172) = 4;
        LODWORD(v36) = v14;
        VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v12, v36);
        LODWORD(v37) = v14;
        VidSchiExecuteMmIoFlip(a1, a2, v6, v12, v37, &v43);
LABEL_48:
        v5 = a1;
        goto LABEL_49;
      }
      *(_DWORD *)(v15 + 1172) = 2;
      if ( !*(_BYTE *)(a2 + 59) )
        *(_QWORD *)(v15 + 1224) = MEMORY[0xFFFFF78000000320];
    }
    else if ( v21 == 5 )
    {
      *(_DWORD *)(v15 + 1172) = 2;
      if ( v13 )
      {
        v44 = 0;
        if ( v14 == *(_DWORD *)(v12 + 64) || *(_BYTE *)(v15 + 1196) )
        {
          if ( !*(_BYTE *)(a2 + 59) )
            *(_QWORD *)(v15 + 1224) = MEMORY[0xFFFFF78000000320];
          if ( !VidSchiCheckPendingFlipsForThisEntry(
                  (struct _VIDSCH_GLOBAL *)a2,
                  (struct _VIDSCH_PRESENT_INFO *)v9,
                  v16,
                  (struct VIDSCH_FLIP_QUEUE *)v7) )
          {
            if ( *(_BYTE *)(v15 + 1196) )
            {
              LODWORD(v36) = v14;
              VidSchiRestartQueuedFlip(a1, v39, v6, v12, v36);
            }
            if ( !*(_DWORD *)(v12 + 112) )
            {
              *(_DWORD *)(v15 + 1172) = 4;
              v40 = *(_QWORD *)(v8 + 3200);
              v22 = *(unsigned int *)(v40 + 136);
              *(_DWORD *)(v40 + 136) = (v22 + 1) & (*(_DWORD *)(v40 + 120) - 1);
              v23 = *(_QWORD *)(v40 + 128) + 112 * v22;
              v45 = (LARGE_INTEGER *)v23;
              v24 = *(void **)(v23 + 72);
              if ( v24 )
              {
                memset(v24, 0, 8LL * *(unsigned int *)(a2 + 152));
                v23 = (__int64)v45;
              }
              *(_DWORD *)v23 = 0;
              *(_DWORD *)(v23 + 16) = **(_DWORD **)(v15 + 1296) & 0x3FF;
              *(_DWORD *)(v23 + 20) = (**(_DWORD **)(v15 + 1296) >> 10) & 0x3FF;
              *(_BYTE *)(v23 + 24) = *(_BYTE *)(v12 + 80);
              *(_DWORD *)(v23 + 28) = v14;
              PerformanceCounter = KeQueryPerformanceCounter(0LL);
              v26 = v45;
              v45[1] = PerformanceCounter;
              BYTE4(v26[4].QuadPart) = (*(_DWORD *)(v15 + 1256) & 0x20) != 0;
              v26[5].LowPart = *(_DWORD *)(v15 + 1172);
              v26[4].LowPart = *(_DWORD *)(v15 + 1176);
              v26[5].HighPart = *(_DWORD *)(v15 + 1260);
              v26[6].LowPart = *(_DWORD *)(v40 + 2944);
              v26[7] = *(LARGE_INTEGER *)(v15 + 1416);
              v26[8] = *(LARGE_INTEGER *)(v15 + 1424);
              v26[10].HighPart = *(_DWORD *)(v40 + 3004);
              v26[10].LowPart = *(_DWORD *)(v40 + 3000);
              v26[11].LowPart = *(_DWORD *)(v12 + 56);
              v26[11].HighPart = *(_DWORD *)(v12 + 60);
              v26[12].LowPart = *(_DWORD *)(v12 + 64);
              v26[12].HighPart = *(_DWORD *)(v12 + 68);
              v26[13].LowPart = *(_DWORD *)(v12 + 72);
              v26[13].HighPart = *(_DWORD *)(v12 + 76);
              LODWORD(v36) = v14;
              VidSchiExecuteMmIoFlip(a1, a2, v6, v12, v36, &v43);
              goto LABEL_48;
            }
            *(_DWORD *)(v15 + 1172) = 3;
          }
        }
      }
    }
    LODWORD(v36) = v14;
    VidSchiUpdateFlipQueueHistory(0LL, a2, v6, v12, v36);
    goto LABEL_48;
  }
  return result;
}
