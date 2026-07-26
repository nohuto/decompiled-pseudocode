/*
 * XREFs of ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A99A4
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0112B80 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0147C28 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0003310 (NdisAcquireRWLockWrite.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00AA914 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOff @ 0x1C00AB858 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00AB8C4 (ndisReceiveQueueingOn.c)
 */

void __fastcall ndisBindUnbindPeriodicReceives(__int64 a1, int a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  KSPIN_LOCK *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rax
  _NDIS_M_PERIODIC_RECEIVES *p_PeriodicReceiveQueue; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( ndisPeriodicReceives )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    if ( a2 && (v4 = a2 - 1) != 0 && (v5 = v4 - 1) != 0 )
    {
      v6 = v5 - 1;
      if ( v6 && (unsigned int)(v6 - 1) > 1 )
        goto LABEL_22;
      v7 = (KSPIN_LOCK *)(a1 + 3176);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
      CurrentThread = KeGetCurrentThread();
      v9 = (*(_DWORD *)(a1 + 3216))-- == 1;
      *(_QWORD *)(a1 + 3184) = CurrentThread;
      if ( v9 && *(_DWORD *)(a1 + 3168) )
      {
        ndisReceiveQueueingOff(a1);
        ndisEmptyPeriodicReceivesQueue((struct _NDIS_MINIPORT_BLOCK *)a1);
        NextMiniportBlock = qword_1C00F5218;
        if ( qword_1C00F5218 == (struct _NDIS_MINIPORT_BLOCK *)a1 )
        {
          qword_1C00F5218 = qword_1C00F5218->PeriodicReceiveQueue.NextMiniportBlock;
        }
        else
        {
          while ( NextMiniportBlock )
          {
            p_PeriodicReceiveQueue = &NextMiniportBlock->PeriodicReceiveQueue;
            NextMiniportBlock = NextMiniportBlock->PeriodicReceiveQueue.NextMiniportBlock;
            if ( NextMiniportBlock == (struct _NDIS_MINIPORT_BLOCK *)a1 )
            {
              p_PeriodicReceiveQueue->NextMiniportBlock = NextMiniportBlock->PeriodicReceiveQueue.NextMiniportBlock;
              break;
            }
          }
        }
        *(_QWORD *)(a1 + 3160) = 0LL;
      }
    }
    else
    {
      v7 = (KSPIN_LOCK *)(a1 + 3176);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 3176));
      *(_QWORD *)(a1 + 3184) = KeGetCurrentThread();
      ++*(_DWORD *)(a1 + 3216);
      if ( !*(_DWORD *)(a1 + 464) && byte_1C00F5201 == 1 && dword_1C00F5204 != -1 && !*(_DWORD *)(a1 + 3168) )
        ndisReceiveQueueingOn(a1);
    }
    *(_QWORD *)(a1 + 3184) = 0LL;
    KeReleaseSpinLockFromDpcLevel(v7);
LABEL_22:
    NdisReleaseRWLock(Lock, &LockState);
  }
}
