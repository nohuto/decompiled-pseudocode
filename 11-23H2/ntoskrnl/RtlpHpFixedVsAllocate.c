/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x140317A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFindClearBitsAndSetEx @ 0x140210350 (RtlFindClearBitsAndSetEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x140316F54 (RtlpHpAcquireLockExclusive.c)
 *     RtlFindClearRunsEx @ 0x140317AFC (RtlFindClearRunsEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__m128i *__fastcall RtlpHpFixedVsAllocate(unsigned __int64 a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int64 v5; // rbx
  int v8; // r14d
  KIRQL v9; // bp
  __m128i v10; // xmm0
  unsigned __int64 ClearBitsAndSet; // rax
  __m128i *v12; // rsi
  int v14; // ecx
  __int32 v15; // eax
  volatile LONG *v16; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // edx
  unsigned __int64 v23[7]; // [rsp+20h] [rbp-38h] BYREF
  char v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+64h] [rbp+Ch]

  v5 = a2;
  v8 = a3 & 1;
  if ( (a3 & 1) != 0 )
    v9 = -1;
  else
    v9 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 24), *(_DWORD *)(a1 + 32));
  v10 = *(__m128i *)(a1 + 48);
  v23[0] = *(_QWORD *)(a1 + 48);
  v23[1] = a1 ^ _mm_srli_si128(v10, 8).m128i_u64[0];
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(v23, v5 >> 12, 0LL);
  if ( ClearBitsAndSet == -1LL )
  {
    if ( (unsigned int)RtlFindClearRunsEx(v23, &v24) == 1 )
      v14 = v25;
    else
      v14 = 0;
    v12 = 0LL;
    *a5 = v14 << 12;
  }
  else
  {
    v12 = (__m128i *)(a1 + (ClearBitsAndSet << 12));
    *a5 = 0;
    *a4 = 0;
  }
  if ( !v8 )
  {
    v15 = *(_DWORD *)(a1 + 32);
    v16 = (volatile LONG *)(a1 + 24);
    if ( v15 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      if ( (_DWORD)KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (v9 + 1));
          v18 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v9);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
      CurrentThread = KeGetCurrentThread();
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v12;
}
