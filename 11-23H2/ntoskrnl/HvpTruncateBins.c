/*
 * XREFs of HvpTruncateBins @ 0x14070754C
 * Callers:
 *     HvStoreModifiedData @ 0x140707744 (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140328970 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvpMapEntryGetFreeBin @ 0x14070AB40 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140AF5280 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  unsigned int *v2; // r14
  signed int i; // ebx
  unsigned int v4; // edi
  signed int v5; // r8d
  __int64 CellMap; // rax
  unsigned int v7; // r10d
  __int64 FreeBin; // rax

  v2 = (unsigned int *)(BugCheckParameter2 + 280);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v5 + v4 - 4096);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x138DuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || v4 + 0x10000 <= *(_DWORD *)(BugCheckParameter2 + 1792)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2, v4, i);
    }
    v2 += 158;
  }
  return 0;
}
