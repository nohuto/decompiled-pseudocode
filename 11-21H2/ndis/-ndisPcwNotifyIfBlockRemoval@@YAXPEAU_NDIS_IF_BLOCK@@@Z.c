/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0105314
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00169C8 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *v2; // rbx
  struct _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  struct _NDIS_PCW_DATA_BLOCK *v4; // rax
  __int64 v5; // rdx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_State = Unlocked;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  PcwDataBlock = a1->PcwDataBlock;
  if ( PcwDataBlock )
  {
    --*((_DWORD *)PcwDataBlock + 42);
    a1->PcwDataBlock = 0LL;
    v4 = (struct _NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList;
    if ( ndisPcwDataBlockList )
    {
      while ( 1 )
      {
        v5 = *((_QWORD *)v4 + 20);
        if ( v4 == PcwDataBlock )
          break;
        v2 = v4;
        v4 = (struct _NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v4 + 20);
        if ( !v5 )
          goto LABEL_10;
      }
      if ( v2 )
        *((_QWORD *)v2 + 20) = v5;
      else
        ndisPcwDataBlockList = (PVOID)*((_QWORD *)v4 + 20);
    }
LABEL_10:
    if ( !*((_DWORD *)PcwDataBlock + 42) )
      ExFreePoolWithTag(PcwDataBlock, 0);
  }
  KLockHolder::~KLockHolder(&v6);
}
