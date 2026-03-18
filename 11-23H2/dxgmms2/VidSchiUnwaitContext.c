/*
 * XREFs of VidSchiUnwaitContext @ 0x1C0002398
 * Callers:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C00021F0 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiDelayReadyRoutine @ 0x1C0002770 (VidSchiDelayReadyRoutine.c)
 *     VidSchSuspendResumeDevice @ 0x1C0002D30 (VidSchSuspendResumeDevice.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010C40 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0011D00 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0037848 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0037880 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000BE10 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v2; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x100) != 0 )
    return v2;
  if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
      return v2;
    v6 = 10LL;
    v7 = 24548LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 664) == a1 + 664 )
  {
    v6 = 0LL;
    v7 = 24565LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, v6, v7);
    return v2;
  }
  if ( !*(_DWORD *)(a1 + 780) )
  {
    v6 = 1LL;
    v7 = 24631LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    v7 = a2;
    v6 = 4LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
  {
    v7 = a2;
    v6 = 8LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x10) != 0 )
  {
    v7 = a2;
    v6 = 3LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v7 = a2;
    v6 = 7LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 8) != 0 )
  {
    v7 = a2;
    v6 = 2LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 && (*(_DWORD *)(a1 + 184) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, a2) != 0;
  }
  return v2;
}
