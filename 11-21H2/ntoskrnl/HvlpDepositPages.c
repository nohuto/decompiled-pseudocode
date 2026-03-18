/*
 * XREFs of HvlpDepositPages @ 0x140544258
 * Callers:
 *     HvlpHandleInsufficientMemory @ 0x1405438E8 (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x140545750 (HvlpStartLogicalProcessor.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     HvlpAddRemovePhysicalMemory @ 0x140653AA4 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x1409311AC (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140264F60 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  char v4; // r12
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r14
  unsigned int v9; // ecx
  __int64 PartitionNodePagesForMdl; // rax
  char *v11; // r15
  unsigned int v13; // r12d
  unsigned int v14; // eax
  _QWORD *v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // esi
  void *v18; // r13
  int v19; // eax
  __int64 v20; // [rsp+40h] [rbp-68h]
  __int128 v21; // [rsp+48h] [rbp-60h] BYREF
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  unsigned int v24; // [rsp+B0h] [rbp+8h]

  v3 = 128;
  v22 = 0LL;
  LODWORD(v23) = 0;
  v4 = a3;
  v21 = 0LL;
  v5 = 113;
  v6 = 0x200000LL;
  v7 = *(unsigned __int16 *)(KeNodeBlock[a1] + 2);
  v24 = v7;
  while ( 1 )
  {
    v20 = v6;
    v8 = v6;
    v9 = (v5 & 0x20) != 0 ? (v3 + 511) & 0xFFFFFE00 : v3;
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, v6, v9 << 12, 1, v7, v5, 0LL);
    v11 = (char *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      v13 = (*(_DWORD *)(PartitionNodePagesForMdl + 40) >> 12)
          + ((*(_DWORD *)(PartitionNodePagesForMdl + 40) & 0xFFF) != 0);
      v14 = v3;
      v3 -= v13;
      if ( v14 < v13 )
        v3 = 0;
      v15 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v21, 1, 0LL, 8LL);
      v16 = 0;
      *v15 = HvlPartitionId;
      if ( v13 )
      {
        v17 = 0;
        v18 = v15 + 1;
        do
        {
          if ( v13 - v16 < 0x1FF )
            v17 ^= ((unsigned __int16)v17 ^ (unsigned __int16)(v13 - v16)) & 0xFFF;
          else
            v17 = v17 & 0xFFFFF000 | 0x1FF;
          memmove(v18, &v11[8 * v16 + 48], 8LL * (v17 & 0xFFF));
          HvcallInitiateHypercall(72);
          v16 += 511;
        }
        while ( v16 < v13 );
      }
      HvlpReleaseHypercallPage((__int64)&v21);
      ExFreePoolWithTag(v11, 0);
      v8 = v20;
      v4 = a3;
    }
    else if ( (v5 & 0x20) == 0 || v4 && (v5 & 0x40) == 0 )
    {
      return 3221225495LL;
    }
    if ( !v3 )
      break;
    v19 = v5 & 0x40;
    if ( (v5 & 0x40) != 0 )
      v5 &= ~0x40u;
    else
      v5 = v5 & 0xFFFFFFDB | 4;
    v7 = v24;
    v6 = v8 & -(__int64)(v19 != 0);
  }
  return 0LL;
}
