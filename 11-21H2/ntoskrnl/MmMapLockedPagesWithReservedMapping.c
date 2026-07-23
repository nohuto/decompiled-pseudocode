/*
 * XREFs of MmMapLockedPagesWithReservedMapping @ 0x1403D7610
 * Callers:
 *     sub_14037DA00 @ 0x14037DA00 (sub_14037DA00.c)
 *     sub_1403F9550 @ 0x1403F9550 (sub_1403F9550.c)
 *     sub_140456CC6 @ 0x140456CC6 (sub_140456CC6.c)
 *     sub_140513544 @ 0x140513544 (sub_140513544.c)
 *     sub_140513C1C @ 0x140513C1C (sub_140513C1C.c)
 *     sub_140562A80 @ 0x140562A80 (sub_140562A80.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_140A6804C @ 0x140A6804C (sub_140A6804C.c)
 * Callees:
 *     sub_14021378C @ 0x14021378C (sub_14021378C.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_1403D77D4 @ 0x1403D77D4 (sub_1403D77D4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmMapLockedPagesWithReservedMapping(
        PVOID MappingAddress,
        ULONG PoolTag,
        PMDL MemoryDescriptorList,
        MEMORY_CACHING_TYPE CacheType)
{
  ULONG_PTR v5; // rsi
  unsigned __int64 v7; // rbp
  KIRQL v9; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  ULONG_PTR BugCheckParameter4; // rsi
  PMDL i; // rbx
  struct _MDL *Next; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf

  v5 = PoolTag;
  v7 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  v9 = ExAcquireSpinLockShared(&dword_140C53050);
  v10 = qword_140C53058;
  v11 = (unsigned __int64)MappingAddress & 0xFFFFFFFFFFFFF000uLL;
  v12 = v9;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v10 )
        KeBugCheckEx(0xDAu, 0x106uLL, (ULONG_PTR)MappingAddress, v5, 1uLL);
      v13 = *(_QWORD *)(v10 + 24);
      if ( v11 >= v13 )
        break;
      v10 = *(_QWORD *)v10;
    }
    if ( v11 < v13 + (*(_QWORD *)(v10 + 32) << 12) )
      break;
    v10 = *(_QWORD *)(v10 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C53050);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = *((_QWORD *)CurrentPrcb + 4375);
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
        *(_DWORD *)(v23 + 20) &= v24;
        if ( v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  if ( *(_DWORD *)(v10 + 40) != (_DWORD)v5 )
    KeBugCheckEx(0xDAu, 0x104uLL, (ULONG_PTR)MappingAddress, v5, *(unsigned int *)(v10 + 40));
  if ( (*(_DWORD *)(v10 + 44) & 1) != 0 )
  {
    if ( ((unsigned __int16)MappingAddress & 0xFFF) != 0 )
      return 0LL;
    v15 = v7;
    v14 = *(_QWORD *)(v10 + 32) - (((unsigned __int64)MappingAddress - *(_QWORD *)(v10 + 24)) >> 12);
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 32);
    MappingAddress = *(PVOID *)(v10 + 24);
    v15 = v14;
  }
  if ( v7 <= v14 )
  {
    v16 = (((unsigned __int64)MappingAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    for ( BugCheckParameter4 = v16 + 8 * v15; v16 < BugCheckParameter4; v16 += 8LL )
    {
      if ( sub_140317A10(v16) )
        KeBugCheckEx(0xDAu, 0x107uLL, (ULONG_PTR)MappingAddress, v16, BugCheckParameter4);
    }
    for ( i = MemoryDescriptorList + 1; ; i = (PMDL)((char *)i + 8) )
    {
      Next = i->Next;
      if ( i->Next <= (struct _MDL *)qword_140C50840
        && (*(_QWORD *)(48LL * (_QWORD)Next - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0
        && (int)sub_14021378C(48LL * (_QWORD)Next - 0x220000000000LL) < 0 )
      {
        break;
      }
      if ( !--v7 )
        return (PVOID)sub_1403D77D4(
                        (_DWORD)MemoryDescriptorList,
                        (unsigned int)((unsigned __int64)MappingAddress >> 9) & 0xFFFFFFF8,
                        0,
                        4,
                        CacheType);
    }
  }
  return 0LL;
}
