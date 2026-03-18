/*
 * XREFs of MiZeroPageCalibrate @ 0x1403D3EE0
 * Callers:
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     MiComputeRunTimeZeroComparisons @ 0x1403D4120 (MiComputeRunTimeZeroComparisons.c)
 *     MiAllocateCalibrationResultsMemory @ 0x1403D4274 (MiAllocateCalibrationResultsMemory.c)
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPageCalibrate(ULONG_PTR a1, __int64 a2)
{
  __int64 v4; // rbx
  ULONG_PTR v5; // r15
  __int64 v6; // r14
  __int64 v7; // rbp
  SIZE_T v8; // r12
  PVOID PoolMm; // rax
  SIZE_T v10; // r12
  PVOID v11; // rax
  PVOID v12; // rbx
  void *v13; // rcx
  signed __int32 v14; // eax
  bool v15; // zf
  char v16; // al
  unsigned __int8 CalibrationResultsMemory; // al
  unsigned __int64 v18; // rbx
  void *v19; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v22; // eax
  _DWORD *SchedulerAssist; // r8
  ULONG_PTR Context[10]; // [rsp+30h] [rbp-88h] BYREF

  memset(Context, 0, sizeof(Context));
  if ( a2 )
  {
    v4 = *(unsigned int *)(a2 + 80);
    v5 = MmPerProcessorZeroCalibrationBytes;
    v6 = *(_QWORD *)(qword_140C506E0 + 120 * v4 + 112);
    v7 = *(_QWORD *)(a1 + 16) + 24512 * v4;
    if ( !MmPerProcessorZeroCalibrationBytes )
      v5 = 0x800000LL;
    v8 = v5 * *(int *)(a2 + 128);
    PoolMm = ExAllocatePoolMm(66LL, v8, 0x655A694Du, *(_DWORD *)(a2 + 80));
    *(_QWORD *)(v7 + 22920) = PoolMm;
    if ( PoolMm )
      *(_QWORD *)(v7 + 22928) = v8;
    else
      *(_BYTE *)(a1 + 16176) = 1;
    v10 = 16LL * *(int *)(a2 + 128);
    v11 = ExAllocatePoolMm(64LL, v10, 0x655A694Du, v4);
    v12 = v11;
    if ( v11 )
    {
      memset(v11, 0, v10);
      v13 = *(void **)(v6 + 72);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v6 + 72) = v12;
      *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 128);
      *(_QWORD *)(v6 + 56) = v5;
    }
    else
    {
      *(_BYTE *)(a1 + 16176) = 1;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16180), *(_DWORD *)(a2 + 128));
  }
  else
  {
    v7 = 0LL;
    v5 = 0LL;
  }
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16184), 0xFFFFFFFF);
  v15 = v14 == 1;
  v16 = v14 - 1;
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 16176) != v16 )
    {
LABEL_21:
      *(_DWORD *)(a1 + 16184) = (unsigned __int16)KeNumberNodes;
      KeSetEvent((PRKEVENT)(a1 + 16128), 0, 0);
      goto LABEL_22;
    }
    Context[9] = a1;
    MiTimeSingleLargePageZero(a1);
    CalibrationResultsMemory = MiAllocateCalibrationResultsMemory(Context);
    v18 = CalibrationResultsMemory;
    if ( CalibrationResultsMemory == 17
      || (v15 = *(_BYTE *)(a1 + 16176) == 0, LODWORD(Context[1]) = *(_DWORD *)(a1 + 16180), Context[2] = v5, !v15) )
    {
      *(_BYTE *)(a1 + 16176) = 0;
      if ( CalibrationResultsMemory == 17 )
      {
LABEL_18:
        if ( Context[8] )
          ExFreePoolWithTag((PVOID)Context[8], 0);
        MiComputeRunTimeZeroComparisons();
        goto LABEL_21;
      }
    }
    else
    {
      LODWORD(Context[5]) = *(_DWORD *)(a1 + 16180);
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)MiZeroPageCalibrateIsr, (ULONG_PTR)Context);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v22 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v22;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    goto LABEL_18;
  }
  if ( a2 )
    KeWaitForSingleObject((PVOID)(a1 + 16128), Executive, 0, 0, 0LL);
LABEL_22:
  if ( v7 )
  {
    v19 = *(void **)(v7 + 22920);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(v7 + 22920) = 0LL;
    }
  }
}
