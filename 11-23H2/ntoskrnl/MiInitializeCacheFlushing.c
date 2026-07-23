/*
 * XREFs of MiInitializeCacheFlushing @ 0x140B6A51C
 * Callers:
 *     MiInitSystem @ 0x140B44518 (MiInitSystem.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x14021AB84 (MiFlushCacheForAttributeChange.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiFinalizePageAttribute @ 0x1402E1874 (MiFinalizePageAttribute.c)
 *     MiReleaseFreshPage @ 0x1402E81B0 (MiReleaseFreshPage.c)
 *     MiZeroPhysicalPage @ 0x14033948C (MiZeroPhysicalPage.c)
 *     KeInvalidateAllCaches @ 0x14036DCE0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // r12
  __int64 v6; // r15
  unsigned int v7; // eax
  SIZE_T v8; // r13
  PVOID Pool; // r15
  LARGE_INTEGER v10; // r14
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER v12; // rax
  LARGE_INTEGER v13; // rcx
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  LARGE_INTEGER v22; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  int v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+34h] [rbp-3Ch] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-38h] BYREF
  _OWORD SystemInformation[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0
    && (BYTE8(SystemInformation[0]) & 1) != 0 )
  {
    byte_140C65AE8 = 1;
  }
  result = MiGetPage((__int64)MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v23 = 0LL;
    v22.QuadPart = 0LL;
    v2 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v2, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    v5 = 2LL;
    __writecr8(2uLL);
    v6 = 4LL;
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
      {
        v15 = 4;
      }
      else
      {
        v3 = (unsigned int)CurrentIrql + 1;
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
      }
      SchedulerAssist[5] |= v15;
    }
    do
    {
      MiZeroPhysicalPage(v3, v1, 0LL, 0);
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v24);
        while ( *(__int64 *)(v2 + 24) < 0 );
      }
      *(_BYTE *)(v2 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushCacheForAttributeChange(v1, 1LL, 0, &v23);
      v25 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v25);
        while ( *(__int64 *)(v2 + 24) < 0 );
      }
      *(_BYTE *)(v2 + 34) = *(_BYTE *)(v2 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      --v6;
    }
    while ( v6 );
    v23 >>= 2;
    if ( v23 )
    {
      v7 = dword_140C65AD8;
      if ( !dword_140C65AD8 )
        v7 = 256;
      v8 = 3 * (v7 >> 2);
      Pool = MiAllocatePool(64, v8, 0x20206D4Du);
      if ( Pool )
      {
        v10 = v22;
        do
        {
          memset(Pool, 0, v8);
          PerformanceFrequency.QuadPart = 0LL;
          v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( PerformanceFrequency.QuadPart != 10000000 )
            v11.QuadPart = 10000000 * v11.QuadPart / PerformanceFrequency.QuadPart;
          _InterlockedOr(v21, 0);
          ++dword_140C65B04;
          KeInvalidateAllCaches();
          _InterlockedOr(v21, 0);
          v22.QuadPart = 0LL;
          v12 = KeQueryPerformanceCounter(&v22);
          if ( v22.QuadPart != 10000000 )
            v12.QuadPart = 10000000 * v12.QuadPart / v22.QuadPart;
          _InterlockedOr(v21, 0);
          v13 = v11;
          if ( v12.QuadPart >= (unsigned __int64)v11.QuadPart )
            v13 = v12;
          v10.QuadPart += v13.QuadPart - v11.QuadPart;
          --v5;
        }
        while ( v5 );
        ExFreePoolWithTag(Pool, 0);
        dword_140C65B0C = (v10.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) / v23;
        LOBYTE(v5) = 2;
      }
    }
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= (unsigned __int8)v5 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v2);
  }
  return result;
}
