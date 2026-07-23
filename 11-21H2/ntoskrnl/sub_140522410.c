/*
 * XREFs of sub_140522410 @ 0x140522410
 * Callers:
 *     sub_14052D9E0 @ 0x14052D9E0 (sub_14052D9E0.c)
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 *     sub_14052E468 @ 0x14052E468 (sub_14052E468.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403DE8E0 (MmAllocateContiguousMemorySpecifyCacheNode.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 */

__int64 __fastcall sub_140522410(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        MEMORY_CACHING_TYPE CacheType,
        PHYSICAL_ADDRESS *a5,
        __int64 a6)
{
  PVOID *v6; // r15
  PHYSICAL_ADDRESS v8; // r10
  __int64 v9; // r13
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  char v14; // r8
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  PVOID ContiguousMemorySpecifyCacheNode; // rax
  __int64 v22; // r14
  unsigned __int64 v23; // rbp
  __int64 *v24; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v27; // eax
  __int64 v28; // r8

  v6 = (PVOID *)a6;
  v8.QuadPart = a3;
  v9 = a2;
  *(_QWORD *)a6 = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741637;
  v11 = a3 >> 12;
  if ( a3 >> 12 << 12 != a3 )
    return (unsigned int)-1073741637;
  v12 = !_BitScanReverse64((unsigned __int64 *)&v13, v11);
  v14 = -1;
  v15 = -1;
  if ( !v12 )
    v15 = v13;
  v12 = !_BitScanForward64((unsigned __int64 *)&v16, v11);
  if ( !v12 )
    v14 = v16;
  if ( v15 != v14 || (unsigned int)CacheType > MmCached )
    return (unsigned int)-1073741637;
  v10 = 0;
  v17 = (unsigned int)(v9 + 4095) >> 12 << 12;
  if ( !dword_140C54B8C )
  {
    a6 = -1LL;
    v18 = sub_140AF9E94(qword_140C4BF58, &a6, (unsigned int)(v9 + 4095) >> 12, v8.LowPart);
    a5->QuadPart = v18;
    if ( v18 )
    {
      v19 = sub_1403BE7F0(v18, (unsigned int)v17, CacheType);
      *v6 = (PVOID)v19;
      if ( v19 )
        return v10;
    }
    goto LABEL_13;
  }
  if ( dword_140C54B8C != 1
    || (a6 = -1LL,
        ContiguousMemorySpecifyCacheNode = MmAllocateContiguousMemorySpecifyCacheNode(
                                             (unsigned int)(v9 + 4095) >> 12 << 12,
                                             0LL,
                                             (PHYSICAL_ADDRESS)-1LL,
                                             v8,
                                             CacheType,
                                             0x80000000),
        (*v6 = ContiguousMemorySpecifyCacheNode) == 0LL)
    || (*a5 = MmGetPhysicalAddress(ContiguousMemorySpecifyCacheNode), (v22 = sub_1403B1F04((__int64)a5, 56LL)) == 0) )
  {
LABEL_13:
    v10 = -1073741670;
    if ( *v6 && dword_140C54B8C == 1 )
      MmFreeContiguousMemory(*v6);
    return v10;
  }
  *(_OWORD *)v22 = 0LL;
  *(_OWORD *)(v22 + 16) = 0LL;
  *(_OWORD *)(v22 + 32) = 0LL;
  *(_QWORD *)(v22 + 48) = 0LL;
  *(_QWORD *)(v22 + 16) = *v6;
  *(_QWORD *)(v22 + 32) = v9;
  *(_QWORD *)(v22 + 40) = v17;
  *(_DWORD *)(v22 + 48) = CacheType;
  v23 = KeAcquireSpinLockRaiseToDpc(&qword_140C4A260);
  v24 = (__int64 *)qword_140C4A248;
  if ( *(__int64 **)qword_140C4A248 != &qword_140C4A240 )
    __fastfail(3u);
  *(_QWORD *)v22 = &qword_140C4A240;
  *(_QWORD *)(v22 + 8) = v24;
  *v24 = v22;
  qword_140C4A248 = v22;
  KeReleaseSpinLockFromDpcLevel(&qword_140C4A260);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
        v28 = *((_QWORD *)CurrentPrcb + 4375);
        v12 = (v27 & *(_DWORD *)(v28 + 20)) == 0;
        *(_DWORD *)(v28 + 20) &= v27;
        if ( v12 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v23);
  return v10;
}
