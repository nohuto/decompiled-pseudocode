/*
 * XREFs of ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405C215C
 * Callers:
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405C1D50 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ZwQueryVirtualMemory @ 0x14041AB00 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x14041E200 (ZwUnlockVirtualMemory.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1405C2484 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
        __int64 a1,
        _DWORD *a2,
        PVOID *a3,
        unsigned int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v6; // r13
  __int64 v7; // rbx
  _DWORD *v9; // r15
  ULONG_PTR v10; // r12
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  unsigned int v13; // r14d
  __int64 v14; // rdi
  unsigned int v15; // r14d
  PVOID *Pool2; // rax
  unsigned int v17; // r13d
  unsigned int v18; // r10d
  PVOID *v19; // r9
  char *v20; // rcx
  PVOID *v21; // r8
  __int64 v22; // r11
  unsigned int v23; // r15d
  unsigned int v24; // r13d
  unsigned int v25; // r12d
  PVOID v26; // rcx
  _BYTE *v27; // rdx
  struct _KTHREAD *v28; // rax
  __int64 result; // rax
  int v30; // r8d
  int v31; // r9d
  int MemoryInformationLength; // [rsp+20h] [rbp-30h]
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v36; // [rsp+48h] [rbp-8h]
  int v37; // [rsp+90h] [rbp+40h]

  v37 = a1;
  v6 = a1;
  v7 = a4;
  v9 = a2;
  BaseAddress = 0LL;
  v10 = a1 + 6024;
  v36 = a1 + 6024;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6024), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 6024));
  KeAbPostRelease(v6 + 6024);
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v13 = *(_DWORD *)(v6 + 6208);
  RegionSize = v13;
  if ( a6 )
  {
    v15 = v13 >> 12;
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 16 * v7 * v15, 1901555059LL);
    P = Pool2;
    if ( Pool2 )
    {
      v17 = 0;
      v18 = 0;
      if ( (_DWORD)v7 )
      {
        v19 = a3;
        do
        {
          v20 = (char *)*v19;
          ++v18;
          BaseAddress = *v19;
          if ( v17 < v15 * v18 )
          {
            v21 = &Pool2[2 * v17];
            v22 = v15 * v18 - v17;
            v17 = v15 * v18;
            do
            {
              *v21 = v20;
              v21 += 2;
              v20 = (char *)BaseAddress + 4096;
              BaseAddress = (char *)BaseAddress + 4096;
              --v22;
            }
            while ( v22 );
          }
          ++v19;
        }
        while ( v18 < (unsigned int)v7 );
        v10 = v36;
      }
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *Pool2,
             MemoryWorkingSetExInformation,
             Pool2,
             16 * v7 * v15,
             0LL) >= 0 )
      {
        v23 = 0;
        v24 = 0;
        if ( (_DWORD)v7 )
        {
          v25 = v15;
          do
          {
            v26 = 0LL;
            BaseAddress = 0LL;
            if ( v23 < v25 )
            {
              v27 = P;
              do
              {
                if ( (v27[16 * v23 + 8] & 1) != 0 )
                {
                  v12 = (*a6)-- == 1LL;
                  v26 = *a3;
                  BaseAddress = *a3;
                  if ( v12 )
                    break;
                }
                ++v23;
              }
              while ( v23 < v25 );
              v7 = a4;
              if ( v26 )
                ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
            }
            if ( !*a6 )
              break;
            ++v24;
            v25 += v15;
            ++a3;
          }
          while ( v24 < (unsigned int)v7 );
          v10 = v36;
        }
      }
      else
      {
        *a6 = 0LL;
      }
      ExFreePoolWithTag(P, 0);
      LODWORD(v6) = v37;
    }
    else
    {
      *a6 = 0LL;
    }
    v9 = a2;
  }
  else if ( (_DWORD)v7 )
  {
    v14 = v7;
    do
    {
      BaseAddress = *a3;
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      ++a3;
      --v14;
    }
    while ( v14 );
    v10 = v6 + 6024;
  }
  v28 = KeGetCurrentThread();
  --v28->SpecialApcDisable;
  result = ExAcquirePushLockSharedEx(v10, 0LL);
  if ( (_DWORD)v7 )
  {
    do
    {
      result = SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(v6, *v9++, v30, v31, MemoryInformationLength, 2);
      --v7;
    }
    while ( v7 );
  }
  return result;
}
