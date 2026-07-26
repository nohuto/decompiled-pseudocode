/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0110108
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C0015CE0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *v2; // rbx
  struct _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  struct _NDIS_PCW_DATA_BLOCK *i; // rax
  struct _NDIS_PCW_DATA_BLOCK **v5; // rdx
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
    for ( i = (struct _NDIS_PCW_DATA_BLOCK *)ndisPcwDataBlockList; i; i = *v5 )
    {
      v5 = (struct _NDIS_PCW_DATA_BLOCK **)((char *)i + 160);
      if ( i == PcwDataBlock )
      {
        if ( v2 )
          *((_QWORD *)v2 + 20) = *v5;
        else
          ndisPcwDataBlockList = *v5;
        break;
      }
      v2 = i;
    }
    if ( !*((_DWORD *)PcwDataBlock + 42) )
      ExFreePoolWithTag(PcwDataBlock, 0);
  }
  KLockHolder::~KLockHolder(&v6);
}
