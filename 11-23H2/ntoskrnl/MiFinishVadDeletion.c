/*
 * XREFs of MiFinishVadDeletion @ 0x140289FA0
 * Callers:
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     MiDereferenceVad @ 0x14028AB20 (MiDereferenceVad.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     MiReturnVadQuota @ 0x1406FB5A4 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x1406FB650 (MiRemoveVadCharges.c)
 *     MiDeleteVadHotPatchState @ 0x140A36C8C (MiDeleteVadHotPatchState.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v5; // r14
  unsigned int v6; // eax
  BOOL v8; // r10d
  _KPROCESS *Process; // rbx
  int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned int v14; // ecx
  ULONG_PTR v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // zf
  __int64 VadWakeList; // rax
  unsigned int v22; // ecx
  int v23; // eax
  struct _KTHREAD *v24; // rbp
  int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rdi
  __int64 v31; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = P[12];
  v31 = (__int64)CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v6 & 4) != 0 )
  {
    v10 = 1;
    if ( (v6 & 0x200000) == 0 )
    {
      v11 = P[13];
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      v8 = (v11 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.StaticBitmap[5] && (a4 & 1) == 0 )
    Process[1].Affinity.StaticBitmap[1] += a2 - a3 - 1;
  v12 = P[12];
  v13 = Process[1].ActiveProcessors.StaticBitmap[28];
  if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    --*(_QWORD *)(v13 + 368);
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 280));
    v14 = P[12];
    if ( MiVadPageSizes[(v14 >> 19) & 3] == 16 )
    {
      if ( (v14 & 0x200000) != 0 )
        --*(_QWORD *)(v13 + 408);
      else
        --*(_QWORD *)(v13 + 416);
    }
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v15 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[7];
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7],
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease(v15);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17, v16, v18, v19);
  if ( v10 )
  {
    VadWakeList = MiGetVadWakeList(P, 1LL);
    *((_QWORD *)P + 2) = -1LL;
    v5 = (_QWORD *)VadWakeList;
    if ( VadWakeList )
      --CurrentThread->KernelApcDisable;
    v22 = P[12];
    if ( (v22 & 0x200000) == 0 && (v22 & 0x70) == 0x20 && (v22 & 0x1800000) != 0 )
      MiDeleteVadHotPatchState(P);
  }
  v23 = MiDereferenceVad(P);
  v24 = KeGetCurrentThread();
  v25 = v23;
  LOBYTE(v24[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 10);
  KeAbPostRelease((ULONG_PTR)(P + 10));
  v20 = v24->SpecialApcDisable++ == -1;
  if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
    KiCheckForKernelApcDelivery(v27, v26, v28, v29);
  if ( v25 )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
    do
    {
      v30 = (_QWORD *)*v5;
      KeSignalGate(v5 + 1, 1LL);
      v5 = v30;
    }
    while ( v30 );
    KeLeaveCriticalRegionThread(v31);
  }
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v13 + 304), 0, 0);
  }
}
