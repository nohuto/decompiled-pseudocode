/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1406A0894
 * Callers:
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1407E628C (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmAdjustWorkingSetSize @ 0x14061CA10 (MmAdjustWorkingSetSize.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // r15
  int v4; // esi
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-68h]
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+28h] [rbp-60h] BYREF

  memset(&v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 1296);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v15);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v5 = *(_QWORD *)(v3 + 984);
  v14 = *(_QWORD *)(v3 + 992);
  v6 = ((*(_DWORD *)(v3 + 1040) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D0C2D0, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1536), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v6 == 2 || (v4 = MmAdjustWorkingSetSize(v5, v14, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)a1, v6, v7, v8);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1536), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C2D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C2D0);
    KeAbPostRelease((ULONG_PTR)&qword_140D0C2D0);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v10 = *(_QWORD *)(a1 + 1360);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) )
      {
        v11 = 0LL;
        v12 = *(__int64 **)(a1 + 1408);
        if ( v12 )
          v11 = *v12;
        _interlockedbittestandset((volatile signed __int32 *)(v10 + 80), 0);
        if ( v11 )
          _interlockedbittestandset((volatile signed __int32 *)(v11 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1536), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D0C2D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D0C2D0);
    KeAbPostRelease((ULONG_PTR)&qword_140D0C2D0);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  KiUnstackDetachProcess(&v15);
  return (unsigned int)v4;
}
