/*
 * XREFs of MiInitializeCacheFlushing @ 0x140B08B40
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v6; // rdx
  LARGE_INTEGER v7; // r8
  LARGE_INTEGER v8; // r9
  LARGE_INTEGER v9; // r15
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  unsigned int v13; // eax
  PVOID Pool; // r15
  size_t v15; // r14
  __int64 v16; // r12
  LARGE_INTEGER v17; // rbx
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  signed __int32 v28[8]; // [rsp+0h] [rbp-88h] BYREF
  int v29; // [rsp+20h] [rbp-68h] BYREF
  int v30; // [rsp+24h] [rbp-64h] BYREF
  size_t Size; // [rsp+28h] [rbp-60h]
  _OWORD v32[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v32, 0, sizeof(v32));
  if ( (int)ZwQuerySystemInformation(192LL, (__int64)v32) >= 0 && (BYTE8(v32[0]) & 1) != 0 )
    byte_140C5072C = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0);
  v1 = result;
  if ( result != -1 )
  {
    v19 = 0LL;
    v20 = 48 * result - 0x220000000000LL;
    MiFinalizePageAttribute(v20, 1u, 0);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 4LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    do
    {
      MiZeroPhysicalPage(v1, 1, 0);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29, v2, v3, v4);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_BYTE *)(v20 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      Size = KeQueryPerformanceCounter(0LL).QuadPart;
      _InterlockedOr(v28, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0);
      _InterlockedOr(v28, 0);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v30 = 0;
      v9 = PerformanceCounter;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30, v6.QuadPart, v7.QuadPart, v8.QuadPart);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_BYTE *)(v20 + 34) = *(_BYTE *)(v20 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v19 += v9.QuadPart - Size;
      --v10;
    }
    while ( v10 );
    v11 = v19 >> 2;
    v12 = 0LL;
    if ( v11 )
    {
      v13 = dword_140C50718;
      if ( !dword_140C50718 )
        v13 = 256;
      Size = 3 * (v13 >> 2);
      Pool = MiAllocatePool(64, Size, 0x20206D4Du);
      if ( Pool )
      {
        v15 = Size;
        v16 = 2LL;
        do
        {
          memset(Pool, 0, v15);
          v17 = KeQueryPerformanceCounter(0LL);
          _InterlockedOr(v28, 0);
          ++dword_140C50744;
          KeInvalidateAllCaches();
          _InterlockedOr(v28, 0);
          v18 = KeQueryPerformanceCounter(0LL);
          _InterlockedOr(v28, 0);
          v12 += v18.QuadPart - v17.QuadPart;
          --v16;
        }
        while ( v16 );
        ExFreePoolWithTag(Pool, 0);
        dword_140C5074C = (v12 & 0xFFFFFFFFFFFFFFFEuLL) / v11;
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v20);
  }
  return result;
}
