/*
 * XREFs of PopWatchdogWorker @ 0x1403D5C40
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionById @ 0x1402C1E00 (MmGetSessionById.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     MmDetachSession @ 0x140355CB0 (MmDetachSession.c)
 *     MmAttachSession @ 0x140355D50 (MmAttachSession.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14036FDA0 (PopUpdateWatchdogNoWorkersEvent.c)
 *     PopResolveWatchdogParam @ 0x1403D5EB8 (PopResolveWatchdogParam.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MmQuitNextSession @ 0x140884DE0 (MmQuitNextSession.c)
 */

LARGE_INTEGER __fastcall PopWatchdogWorker(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rdx
  _KPROCESS *SessionById; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  ULONG_PTR v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r12
  __int64 v15; // rax
  __int64 v16; // rdx
  ULONG_PTR v17; // r13
  __int64 v18; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  void (__fastcall *v20)(_QWORD, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR); // r10
  unsigned __int64 v21; // r15
  LARGE_INTEGER result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  int v30; // eax
  _DWORD *v31; // r8
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  char v36; // [rsp+40h] [rbp-89h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-81h]
  LARGE_INTEGER v38; // [rsp+50h] [rbp-79h] BYREF
  ULONG BugCheckCode[18]; // [rsp+60h] [rbp-69h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp-19h] BYREF
  LARGE_INTEGER v41; // [rsp+B8h] [rbp-11h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v42; // [rsp+C0h] [rbp-9h] BYREF

  memset(&v42, 0, sizeof(v42));
  memset(BugCheckCode, 0, sizeof(BugCheckCode));
  v36 = 0;
  PerformanceCounter.QuadPart = 0LL;
  *(LARGE_INTEGER *)(a1 + 360) = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v2 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 208)
    && (v38.QuadPart = 0LL, (unsigned __int64)RtlGetInterruptTimePrecise(&v38).QuadPart >= *(_QWORD *)(a1 + 304)) )
  {
    v3 = *(_OWORD *)(a1 + 232);
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 216);
    v4 = *(_OWORD *)(a1 + 248);
    *(_OWORD *)&BugCheckCode[4] = v3;
    v5 = *(_OWORD *)(a1 + 264);
    *(_OWORD *)&BugCheckCode[8] = v4;
    *(_QWORD *)&BugCheckCode[16] = *(_QWORD *)(a1 + 280);
    *(_OWORD *)&BugCheckCode[12] = v5;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v2 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v6 = -1LL << ((unsigned __int8)v2 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)v6;
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    if ( BugCheckCode[1] == -1 )
    {
      v8 = 0LL;
    }
    else
    {
      SessionById = (_KPROCESS *)MmGetSessionById(BugCheckCode[1]);
      v8 = (__int64)SessionById;
      if ( SessionById && (int)MmAttachSession(SessionById, (__int64)&v42) >= 0 )
        v36 = 1;
    }
    LOBYTE(v6) = BugCheckCode[12];
    v9 = PopResolveWatchdogParam(*(_QWORD *)&BugCheckCode[4], v6);
    LOBYTE(v10) = BYTE1(BugCheckCode[12]);
    v11 = v9;
    v12 = PopResolveWatchdogParam(*(_QWORD *)&BugCheckCode[6], v10);
    LOBYTE(v13) = BYTE2(BugCheckCode[12]);
    v14 = v12;
    v15 = PopResolveWatchdogParam(*(_QWORD *)&BugCheckCode[8], v13);
    LOBYTE(v16) = HIBYTE(BugCheckCode[12]);
    v17 = v15;
    v18 = PopResolveWatchdogParam(*(_QWORD *)&BugCheckCode[10], v16);
    v41.QuadPart = 0LL;
    BugCheckParameter4 = v18;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v41);
    v20 = *(void (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))&BugCheckCode[14];
    *(LARGE_INTEGER *)(a1 + 368) = InterruptTimePrecise;
    *(_BYTE *)(a1 + 209) = 1;
    if ( !v20 )
      KeBugCheckEx(BugCheckCode[2], v11, v14, v17, BugCheckParameter4);
    v20(*(_QWORD *)&BugCheckCode[16], BugCheckCode[2], v11, v14, v17, BugCheckParameter4);
    v21 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v28 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v31 = v29->SchedulerAssist;
        v27 = (v30 & v31[5]) == 0;
        v31[5] &= v30;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v21);
    if ( v36 )
    {
      MmDetachSession(v8, &v42);
      MmQuitNextSession(v8);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock((volatile signed __int64 *)&PopWatchdogLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v32 <= 0xFu && (unsigned __int8)v2 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v27 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v2);
  }
  result = RtlGetInterruptTimePrecise(&v38);
  *(LARGE_INTEGER *)(a1 + 376) = result;
  return result;
}
