/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140682EA4
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x1403C7500 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // r13
  int v7; // r14d
  int v8; // r12d
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-78h]
  unsigned __int64 v15; // [rsp+28h] [rbp-70h]
  _OWORD v16[3]; // [rsp+30h] [rbp-68h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1296);
  v7 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v16, a4);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v6 + 56), 1u);
  v14 = *(_QWORD *)(v6 + 984);
  v15 = *(_QWORD *)(v6 + 992);
  v8 = ((*(_DWORD *)(v6 + 1040) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140CF5E70, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v6 + 1512), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v6 + 56));
  if ( v8 == 2 || (v7 = MmAdjustWorkingSetSize(v14, v15, 0, 1), v7 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v8);
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1512), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF5E70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140CF5E70);
    KeAbPostRelease((ULONG_PTR)&qword_140CF5E70);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v10 = *(_QWORD *)(a1 + 1360);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v7 = 0;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v11 = 0LL;
        v12 = *(__int64 **)(a1 + 1408);
        if ( v12 )
          v11 = *v12;
        _interlockedbittestandset((volatile signed __int32 *)(v10 + 80), 0);
        if ( v11 )
          _interlockedbittestandset((volatile signed __int32 *)(v11 + 40), 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v7 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1512), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF5E70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140CF5E70);
    KeAbPostRelease((ULONG_PTR)&qword_140CF5E70);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  KiUnstackDetachProcess((__int64)v16, 0LL);
  return (unsigned int)v7;
}
