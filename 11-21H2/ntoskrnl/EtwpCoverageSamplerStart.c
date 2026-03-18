/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1409F36F4
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3EC0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 *     PsEnumProcesses @ 0x1406BF0AC (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406D520C (EtwpUpdateGlobalGroupMasks.c)
 *     KeSetIntervalProfile @ 0x1407F8914 (KeSetIntervalProfile.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140832640 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeInitializeProfileCallback @ 0x1409620D4 (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EEA80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1409F2650 (EtwpCoverageSamplerAllocateTable.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(_DWORD *Object)
{
  int v2; // ecx
  unsigned __int64 v3; // r14
  unsigned __int16 v4; // r12
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // esi
  PVOID *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v19 = 0;
  v2 = Object[9];
  LODWORD(v3) = 0;
  v17 = 0LL;
  v18 = 0LL;
  v4 = 0;
  Table = EtwpCoverageSamplerAllocateTable(v2);
  *((_QWORD *)Object + 144) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_29;
  }
  ++Object[296];
  v7 = (PVOID *)*((_QWORD *)Object + 147);
  if ( *v7 != Object + 292 )
    __fastfail(3u);
  *Table = Object + 292;
  Table[1] = v7;
  *v7 = Table;
  *((_QWORD *)Object + 147) = Table;
  v8 = Object[17];
  v9 = Object[16];
  if ( v8 )
    v9 /= v8;
  v10 = Object[6];
  if ( (v10 & 4) != 0 )
    goto LABEL_16;
  if ( (v10 & 2) != 0 )
    goto LABEL_14;
  LODWORD(v17) = 2;
  if ( ((int (__fastcall *)(__int64, __int64, __int128 *, int *))off_140C020D8[0])(1LL, 24LL, &v17, &v19) < 0
    || !BYTE4(v17) )
  {
    if ( (Object[6] & 1) != 0 )
    {
      ImageNotifyRoutine = -1073741637;
      goto LABEL_29;
    }
LABEL_14:
    LODWORD(v3) = 10 * v9;
    if ( (BYTE4(PerfGlobalGroupMask[0]) & 2) != 0 )
      LODWORD(v3) = EtwpProfileInterval;
    goto LABEL_16;
  }
  v4 = 2;
  v3 = v9 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCovSampGlobals, 0LL);
  qword_140C15D68 = (__int64)KeGetCurrentThread();
  if ( qword_140C15D78 )
  {
    ImageNotifyRoutine = -1073740008;
  }
  else
  {
    ImageNotifyRoutine = EtwpCovSampCaptureContextStart(Object + 6);
    if ( ImageNotifyRoutine >= 0 )
    {
      v12 = qword_140C15D88;
      ObfReferenceObject(Object);
      qword_140C15D78 = (__int64)Object;
      _InterlockedExchange64((volatile __int64 *)&stru_140C15D80, 0LL);
      Object[287] |= 1u;
      ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx((__int64)EtwpCovSampImageNotify, 0LL);
      if ( ImageNotifyRoutine >= 0 )
      {
        Object[287] |= 2u;
        PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))EtwpCovSampEnumerateProcess, (__int64)(Object + 4));
        MmEnumerateSystemImages(
          (__int64 (__fastcall *)(PVOID *, __int64))EtwpCovSampEnumerateDriver,
          (__int64)(Object + 4));
        v13 = EtwpHostSiloState;
        v14 = *(_DWORD *)(EtwpHostSiloState + 4572) | 4;
        *(_DWORD *)(EtwpHostSiloState + 4572) = v14;
        v15 = Object[6];
        if ( (v15 & 8) == 0 )
        {
          *(_DWORD *)(v13 + 4576) |= 4u;
          v15 = Object[6];
        }
        if ( (v15 & 0x10) == 0 )
        {
          *(_DWORD *)(v13 + 4576) |= 0x200u;
          v15 = Object[6];
        }
        if ( (v15 & 0x20) == 0 )
          *(_DWORD *)(v13 + 4572) = v14 | 0x1000;
        EtwpUpdateGlobalGroupMasks(v13, 0, 9u);
        Object[287] |= 4u;
        if ( (Object[6] & 4) == 0 )
        {
          KeInitializeProfileCallback((unsigned __int16 *)(v12 + 16), (__int64)EtwpCovSampProfileInterrupt, v12, v4);
          KeSetIntervalProfile(v3, *(__int16 *)(v12 + 360));
          KeStartProfile(v12 + 16);
          Object[287] |= 8u;
        }
        ImageNotifyRoutine = 0;
      }
    }
  }
LABEL_29:
  if ( (struct _KTHREAD *)qword_140C15D68 == KeGetCurrentThread() )
  {
    qword_140C15D68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ImageNotifyRoutine;
}
