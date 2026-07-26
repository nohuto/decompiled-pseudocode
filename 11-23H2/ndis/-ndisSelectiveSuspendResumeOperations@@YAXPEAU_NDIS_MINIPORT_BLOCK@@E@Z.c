/*
 * XREFs of ?ndisSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00ADF28
 * Callers:
 *     ?ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z @ 0x1C00AE650 (-ndisSetPowerResumeCompleteWorkItem@@YAXPEAX@Z.c)
 *     NdisMIdleNotificationCompleteEx @ 0x1C00AF7A0 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00251B0 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C003F2C4 (-ndisMoveLinkedList@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 *     ?ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z @ 0x1C003F4D6 (-ndisReplayDirectOids@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@E@Z.c)
 *     ?ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C003F560 (-ndisReplaySendNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00AD724 (-ndisReplayRecvNbls@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AE3FC (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendResumeOperations(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _NET_BUFFER_LIST *v7; // rbp
  struct _NET_BUFFER_LIST *v8; // rsi
  KIRQL v9; // r8
  KIRQL v10; // dl
  struct _LIST_ENTRY v11; // [rsp+20h] [rbp-18h] BYREF
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v11 = 0LL;
  if ( (a1->Flags & 0x80u) != 0 )
    NT_ASSERT("(!((((Miniport)->Flags & (0x00000080)) != 0)))");
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( a2 )
  {
    *((_DWORD *)SelectiveSuspend + 126) &= ~0x10u;
    KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 248), 0, 0);
    v5 = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 82)) / 10000LL;
    *((_QWORD *)SelectiveSuspend + 84) += v5;
    *((_QWORD *)SelectiveSuspend + 83) = v5;
    v6 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)SelectiveSuspend + 81);
    *((_QWORD *)SelectiveSuspend + 86) += v6 / 10000;
    *((_QWORD *)SelectiveSuspend + 85) = v6 / 10000;
  }
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 68);
  *((_QWORD *)SelectiveSuspend + 68) = 0LL;
  *((_QWORD *)SelectiveSuspend + 69) = (char *)SelectiveSuspend + 544;
  v8 = (struct _NET_BUFFER_LIST *)*((_QWORD *)SelectiveSuspend + 70);
  *((_QWORD *)SelectiveSuspend + 70) = 0LL;
  *((_QWORD *)SelectiveSuspend + 71) = (char *)SelectiveSuspend + 560;
  ndisMoveLinkedList(&v11, (struct _LIST_ENTRY *)((char *)SelectiveSuspend + 584));
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v9);
  if ( v7 )
    ndisReplaySendNbls(a1, v7, 0);
  if ( v8 )
    ndisReplayRecvNbls(a1, v8);
  ndisReplayDirectOids((struct _NDIS_FILTER_BLOCK *)a1, &v11, 0);
  ndisSetIdleTimer(a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  ndisSetWakeUpTimer(a1);
  v10 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
}
