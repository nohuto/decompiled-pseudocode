/*
 * XREFs of MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140AE7FA0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     KeIpiGenericCall @ 0x14039AE10 (KeIpiGenericCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x140641714 (MiUnlockAndFreeDvPatchImage.c)
 *     MmHasImageBeenImportOptimized @ 0x14069707C (MmHasImageBeenImportOptimized.c)
 *     MiEnumerateBasePatches @ 0x1406971E4 (MiEnumerateBasePatches.c)
 *     MiInitializeDriverPatchState @ 0x140697230 (MiInitializeDriverPatchState.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943A94 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     MiLockAndMapEntireDriver @ 0x140A34578 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x140A347F0 (MiUnlockEntireDriver.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x140A441A8 (MiCheckVerifierFunctionsCfgState.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReapplyImportOptimizationForDriverVerifier(ULONG_PTR a1, int *a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  int v7; // ebx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _OWORD *v10; // r13
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // r10d
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  char *v22; // r12
  char *v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // r14d
  unsigned __int16 **v29; // rdx
  __int64 v30; // r9
  _OWORD *Pool; // rax
  unsigned int v32; // r14d
  __int64 v33; // r15
  unsigned __int16 *v34; // rdx
  unsigned int v35; // ebx
  void *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v41; // rdx
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v44; // r8
  int v45; // eax
  bool v46; // zf
  void *v47; // rcx
  __int64 v48; // rax
  _QWORD *v50; // [rsp+30h] [rbp-A9h]
  __int64 v51; // [rsp+38h] [rbp-A1h]
  ULONG_PTR Context[10]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v53[160]; // [rsp+90h] [rbp-49h] BYREF
  int v54; // [rsp+140h] [rbp+67h]
  ULONG Size; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = a3;
  memset(v53, 0, 0x68uLL);
  Size = 0;
  v54 = 0;
  memset(Context, 0, sizeof(Context));
  Context[8] = (ULONG_PTR)&Context[7];
  Context[7] = (ULONG_PTR)&Context[7];
  MiInitializeDriverPatchState(a1, v53);
  Context[2] = a1;
  if ( !(unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    v7 = -1073741436;
    goto LABEL_75;
  }
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
    goto LABEL_4;
  if ( *(_QWORD *)(a1 + 296) != a1 + 296 )
  {
    MiEnumerateBasePatches(v6, MiLockPatchIatForDV, Context);
    v7 = Context[9];
    if ( SLODWORD(Context[9]) < 0 )
      goto LABEL_75;
  }
  v8 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = 0LL;
  v50 = v8;
  v11 = v8;
  if ( v9 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v9) + 96) + 32LL);
    if ( v12 )
      v10 = *(_OWORD **)(v12 + 88);
    v11 = v50;
  }
  else
  {
    v10 = *(_OWORD **)(a1 + 320);
  }
  v13 = *(_DWORD *)(a1 + 64) >> 12;
  if ( !v10 )
  {
LABEL_4:
    v7 = -1073741637;
    goto LABEL_75;
  }
  v14 = 0;
  if ( (_DWORD)v4 )
  {
    v15 = (unsigned __int64 *)(a2 + 2);
    do
    {
      v16 = *v15;
      v17 = v11[*((int *)v15 - 2)];
      v18 = *(_QWORD *)(a1 + 48);
      v19 = *v15 <= v18 ? v18 + *(unsigned int *)(a1 + 64) - v16 : v16 - v18;
      if ( v19 > 0x7FFFFFFF )
        goto LABEL_4;
      if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
      {
        v20 = *(_QWORD *)(a1 + 48);
        v21 = v17 <= v20 ? v20 + *(unsigned int *)(a1 + 64) - v17 : v17 - v20;
        if ( v21 > 0x7FFFFFFF )
          goto LABEL_4;
      }
      v11 = v50;
      ++v14;
      v15 += 3;
    }
    while ( v14 < (unsigned int)v4 );
  }
  v7 = MiLockAndMapEntireDriver(a1, v53, &Context[3]);
  if ( v7 >= 0 )
  {
    if ( (*(_BYTE *)(Context[3] + 10) & 5) != 0 )
      v22 = *(char **)(Context[3] + 24);
    else
      v22 = (char *)MmMapLockedPagesSpecifyCache((PMDL)Context[3], 0, MmCached, 0LL, 1u, 0x20u);
    v23 = &v22[(_QWORD)v50 - *(_QWORD *)(a1 + 48)];
    if ( (MiFlags & 0x8000) != 0 )
    {
      v7 = MiCheckVerifierFunctionsCfgState(a2, (unsigned int)v4);
      if ( v7 >= 0 )
      {
        v7 = VslReapplyImportOptimizationForDriverVerifier(a1, a2, (unsigned int)v4);
        if ( v7 >= 0 )
        {
          if ( (_DWORD)v4 )
          {
            v24 = v4;
            do
            {
              v25 = *a2;
              v26 = *((_QWORD *)a2 + 1);
              a2 += 6;
              *(_QWORD *)&v23[8 * v25] = v26;
              --v24;
            }
            while ( v24 );
          }
        }
      }
    }
    else
    {
      v27 = v13;
      HIDWORD(Context[1]) = 8 * v13 + 56;
      v51 = v13;
      if ( v13 )
      {
        v28 = 0;
        v29 = (unsigned __int16 **)v10 + 7;
        v30 = v13;
        do
        {
          if ( *v29 )
            v28 += ((*v29)[1] >> 1) + ((*v29)[2] >> 1) + (**v29 >> 2);
          ++v29;
          --v30;
        }
        while ( v30 );
        v54 = v28;
        LODWORD(v4) = a3;
      }
      Pool = MiAllocatePool(64, 8 * v13 + 56 + 4 * (v13 + v54 + 2 * v13), 0x66766D4Du);
      Context[4] = (ULONG_PTR)Pool;
      if ( Pool )
      {
        *Pool = *v10;
        Pool[1] = v10[1];
        Pool[2] = v10[2];
        *(_QWORD *)(Context[4] + 48) = Context[4] + 8 * v13 + 56;
        if ( v13 )
        {
          v32 = 0;
          v33 = 56LL;
          do
          {
            v34 = *(unsigned __int16 **)((char *)v10 + v33);
            if ( v34 )
            {
              v35 = v34[1] + 12 + v34[2] + *v34;
              v36 = (void *)(*(_QWORD *)(Context[4] + 48) + v32);
              *(_QWORD *)(v33 + Context[4]) = v36;
              memmove(v36, v34, v35);
              v32 += v35;
              v27 = v51;
            }
            v33 += 8LL;
            v51 = --v27;
          }
          while ( v27 );
          LODWORD(v4) = a3;
        }
        *(_DWORD *)(Context[4] + 8) = (_DWORD)v50 - *(_DWORD *)(a1 + 48);
        *(_QWORD *)(Context[4] + 24) = v23;
        *(_QWORD *)(Context[4] + 16) = 0LL;
        *(_QWORD *)(Context[4] + 32) = *(_QWORD *)(a1 + 48);
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
          *(_QWORD *)(Context[4] + 40) = MiIsTargetFullyRetpolined;
        Context[5] = (ULONG_PTR)a2;
        LODWORD(Context[6]) = 24 * v4;
        v37 = *((_QWORD *)v10 + 2);
        if ( (_DWORD)v4 )
        {
          v38 = (unsigned int)v4;
          do
          {
            if ( v37 )
            {
              if ( (KiSpeculationFeatures & 0x20000000000LL) == 0
                || _bittest64(
                     (const signed __int64 *)qword_140C65858,
                     (unsigned __int64)(*((_QWORD *)a2 + 1) + 0x800000000000LL) >> 16) )
              {
                *(_DWORD *)(v37 + 4LL * *a2) = a2[2] - *(_DWORD *)(a1 + 48);
              }
              else
              {
                *(_DWORD *)(v37 + 4LL * *a2) = 0;
              }
            }
            a2 += 6;
            --v38;
          }
          while ( v38 );
        }
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 12 )
            LODWORD(v41) = 4096;
          else
            v41 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
          SchedulerAssist[5] |= v41;
        }
        HIDWORD(Context[0]) = KeQueryActiveProcessorCountEx(0xFFFFu);
        LODWORD(Context[0]) = HIDWORD(Context[0]);
        v7 = KeIpiGenericCall(MiReapplyImportOptimizationWorker, (ULONG_PTR)Context);
        if ( (_DWORD)KiIrqlFlags )
        {
          v42 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v44 = CurrentPrcb->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v46 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v46 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
LABEL_75:
  MiUnlockEntireDriver(v53, Context[3]);
  while ( 1 )
  {
    v47 = (void *)Context[7];
    if ( (ULONG_PTR *)Context[7] == &Context[7] )
      break;
    v48 = *(_QWORD *)Context[7];
    if ( *(ULONG_PTR **)(Context[7] + 8) != &Context[7] || *(_QWORD *)(v48 + 8) != Context[7] )
      __fastfail(3u);
    Context[7] = *(_QWORD *)Context[7];
    *(_QWORD *)(v48 + 8) = &Context[7];
    MiUnlockAndFreeDvPatchImage(v47);
  }
  if ( Context[4] )
    ExFreePoolWithTag((PVOID)Context[4], 0);
  return (unsigned int)v7;
}
