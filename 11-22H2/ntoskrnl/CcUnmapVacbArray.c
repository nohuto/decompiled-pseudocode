/*
 * XREFs of CcUnmapVacbArray @ 0x14029ECA0
 * Callers:
 *     CcGetVirtualAddress @ 0x140264CD0 (CcGetVirtualAddress.c)
 *     CcUnmapAndPurge @ 0x140299E18 (CcUnmapAndPurge.c)
 *     CcFlushCachePreProcess @ 0x14029DD60 (CcFlushCachePreProcess.c)
 *     CcPurgeCacheSection @ 0x1402F07D0 (CcPurgeCacheSection.c)
 *     CcSetFileSizesEx @ 0x1402F0FA0 (CcSetFileSizesEx.c)
 *     CcUnmapFileOffsetFromSystemCache @ 0x1403C3960 (CcUnmapFileOffsetFromSystemCache.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     CcGetVacbLargeOffset @ 0x14029EF70 (CcGetVacbLargeOffset.c)
 *     KxAcquireQueuedSpinLock @ 0x1402A0950 (KxAcquireQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x1402A0AE0 (CcSetVacbInFreeList.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402A0F10 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1402A0F50 (CcAcquireBcbLockAndVacbLock.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     CcSetVacbLargeOffset @ 0x1402F2EB0 (CcSetVacbLargeOffset.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     CcUnmapVacb @ 0x140721E80 (CcUnmapVacb.c)
 */

char __fastcall CcUnmapVacbArray(__int64 a1, __int64 *a2, unsigned int a3, char a4, char a5, char a6)
{
  __int64 v6; // r13
  unsigned int v9; // r15d
  signed __int64 v10; // rdi
  signed __int64 v11; // rbx
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rbp
  char v15; // bl
  unsigned __int8 CurrentIrql; // si
  _QWORD *ArbitraryUserPointer; // rcx
  __int64 v19; // r8
  _DWORD *SchedulerAssist; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  void *v23; // rsi
  unsigned __int8 v24; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  signed __int32 v29[8]; // [rsp+0h] [rbp-68h] BYREF
  signed __int64 v30; // [rsp+30h] [rbp-38h]
  char v31; // [rsp+70h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 536);
  v9 = 0;
  v30 = 0LL;
  v31 = 1;
  if ( !*(_QWORD *)(a1 + 88) )
    return 1;
  if ( a2 )
  {
    v22 = *a2;
    v11 = *a2 & 0xFFFFFFFFFFFC0000uLL;
    v30 = v11;
    if ( a3 )
      v10 = v22 + a3;
    else
      v10 = *(_QWORD *)(a1 + 376);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 32);
    v11 = 0LL;
  }
  v12 = (*(_DWORD *)(a1 + 152) >> 9) & 1;
  CcAcquireBcbLockAndVacbLock(v12, a1);
  if ( a4 )
  {
    v9 = 1;
    *(_QWORD *)(a1 + 344) = v10;
  }
  if ( v11 >= v10 )
  {
LABEL_13:
    v15 = 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 32);
    if ( v11 < v13 )
    {
      v14 = v13 <= 0x2000000
          ? *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18))
          : CcGetVacbLargeOffset(a1, v11);
      if ( v14 )
        break;
    }
LABEL_11:
    v11 += 0x40000LL;
    v30 = v11;
LABEL_12:
    if ( v11 >= v10 )
      goto LABEL_13;
  }
  if ( !*(_WORD *)(v14 + 16) )
  {
    v31 = 1;
    if ( v13 > 0x2000000 )
      CcSetVacbLargeOffset(a1, v11, 0LL);
    else
      *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)v30 >> 18)) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 548));
    if ( *(_DWORD *)(v6 + 1248) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
      v9 |= 2u;
    else
      v9 &= ~2u;
    CcUnmapVacb(v14, a1, v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v21) = 4;
      else
        v21 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v21;
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    KxAcquireQueuedSpinLock(ArbitraryUserPointer + 8, ArbitraryUserPointer[9]);
    *(_QWORD *)(v14 + 8) = 0LL;
    LOBYTE(v19) = (v9 & 2) != 0;
    CcSetVacbInFreeList(v6, v14, v19);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 8);
    if ( (_DWORD)KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    goto LABEL_11;
  }
  if ( a6 )
  {
    v11 += 0x40000LL;
    v30 = v11;
    if ( a5 )
      KeBugCheckEx(0x34u, 0xC2CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( a5 )
  {
    v23 = *(void **)(a1 + 192);
    if ( v23 )
    {
      if ( v31 )
      {
        KeResetEvent(*(PRKEVENT *)(a1 + 192));
        _InterlockedOr(v29, 0);
        v31 = 0;
      }
      else
      {
        CcReleaseBcbLockAndVacbLock(v12, a1);
        KeWaitForSingleObject(v23, Executive, 0, 0, 0LL);
        v31 = 1;
        CcAcquireBcbLockAndVacbLock(v12, a1);
      }
    }
    else
    {
      v31 = 0;
      *(_WORD *)(a1 + 352) = 0;
      *(_QWORD *)(a1 + 368) = a1 + 360;
      *(_QWORD *)(a1 + 360) = a1 + 360;
      *(_BYTE *)(a1 + 354) = 6;
      *(_DWORD *)(a1 + 356) = 0;
      _InterlockedExchange64((volatile __int64 *)(a1 + 192), a1 + 352);
    }
    goto LABEL_12;
  }
  v15 = 0;
LABEL_14:
  CcReleaseBcbLockAndVacbLock(v12, a1);
  return v15;
}
