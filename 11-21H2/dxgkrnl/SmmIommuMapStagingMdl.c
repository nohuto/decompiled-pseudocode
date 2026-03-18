/*
 * XREFs of SmmIommuMapStagingMdl @ 0x1C006DEC4
 * Callers:
 *     SmmIommuMapReferenced @ 0x1C006DE70 (SmmIommuMapReferenced.c)
 * Callees:
 *     SmmMapIommu @ 0x1C002FBA0 (SmmMapIommu.c)
 *     SmmIoMmuReferenceMdl @ 0x1C006DA40 (SmmIoMmuReferenceMdl.c)
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall SmmIommuMapStagingMdl(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v7; // rdi
  int v8; // ebp
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // edx

  v4 = 0;
  v7 = a2;
  while ( 1 )
  {
    v8 = SmmIoMmuReferenceMdl(a1 + 48, (__int64)a3, 1);
    if ( v8 < 0 )
      break;
    v9 = a3[7];
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 160);
      v11 = v9 << 12;
      *(_DWORD *)(v10 + 40) = v11;
      *(_QWORD *)v10 = 0LL;
      *(_WORD *)(v10 + 10) = 0;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 44) = 0;
      *(_WORD *)(v10 + 8) = 8 * ((v11 >> 12) + 6);
      v8 = SmmMapIommu(a1, v7, *(_QWORD *)(a1 + 160));
      if ( v8 < 0 )
        break;
      v4 = a3[6];
      if ( v7 )
        v7 += a3[7];
    }
    if ( a3[6] == a3[4] )
      return (unsigned int)v8;
  }
  if ( v4 )
  {
    a3[4] = v4;
    a3[6] = 0;
    SmmIoMmuUnmapStagingMdl(a1, a2, a3);
  }
  return (unsigned int)v8;
}
