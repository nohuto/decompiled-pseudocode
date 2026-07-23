/*
 * XREFs of MmUnmapReservedMapping @ 0x1405858A0
 * Callers:
 *     sub_14037AE58 @ 0x14037AE58 (sub_14037AE58.c)
 *     sub_1403F94E0 @ 0x1403F94E0 (sub_1403F94E0.c)
 *     sub_140457742 @ 0x140457742 (sub_140457742.c)
 *     sub_140513544 @ 0x140513544 (sub_140513544.c)
 *     sub_140513C1C @ 0x140513C1C (sub_140513C1C.c)
 *     sub_140562A80 @ 0x140562A80 (sub_140562A80.c)
 *     sub_1405633A8 @ 0x1405633A8 (sub_1405633A8.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 *     sub_1409ED100 @ 0x1409ED100 (sub_1409ED100.c)
 *     sub_140A6804C @ 0x140A6804C (sub_140A6804C.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140584530 @ 0x140584530 (sub_140584530.c)
 *     sub_1405853E4 @ 0x1405853E4 (sub_1405853E4.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // al
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 i; // rbx

  v3 = PoolTag;
  v5 = (ULONG_PTR)BaseAddress;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v5 = (ULONG_PTR)BaseAddress - (unsigned int)sub_140584530((__int64)MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  v7 = ExAcquireSpinLockShared(&dword_140C53050);
  v8 = qword_140C53058;
  v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v7;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v8 )
        KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
      v11 = *(_QWORD *)(v8 + 24);
      if ( v9 >= v11 )
        break;
      v8 = *(_QWORD *)v8;
    }
    if ( v9 < v11 + (*(_QWORD *)(v8 + 32) << 12) )
      break;
    v8 = *(_QWORD *)(v8 + 8);
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C53050);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= v15;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  v17 = *(_QWORD *)(v8 + 32);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
    v17 -= (v5 - *(_QWORD *)(v8 + 24)) >> 12;
  else
    v5 = *(_QWORD *)(v8 + 24);
  if ( BugCheckParameter4 > v17 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, *(_QWORD *)(v8 + 32), BugCheckParameter4);
  sub_1405853E4(v5, 0LL, v3, (__int64)MemoryDescriptorList, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v19 = v18 + 8LL * *(_QWORD *)(v8 + 32);
    for ( i = v18 + 8 * BugCheckParameter4; i < v19; i += 8LL )
    {
      if ( sub_140317A10(i) )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
