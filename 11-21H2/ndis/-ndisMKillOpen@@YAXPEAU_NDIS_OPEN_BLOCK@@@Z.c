/*
 * XREFs of ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C13C
 * Callers:
 *     NdisCloseAdapter @ 0x1C013BF70 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C0016CD0 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016F50 (-EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001E920 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008AF10 (-nullDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMKillOpen(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbx
  KIRQL v3; // r14
  struct _NDIS_OPEN_BLOCK *OpenQueue; // rsi
  bool v5; // zf
  struct _X_FILTER *EthDB; // rcx
  unsigned __int64 *p_SpinLock; // rcx

  MiniportHandle = a1->MiniportHandle;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xAu,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      a1);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel(&MiniportHandle->Lock);
  OpenQueue = MiniportHandle->OpenQueue;
  MiniportHandle->MiniportThread = KeGetCurrentThread();
  while ( OpenQueue && OpenQueue != a1 )
    OpenQueue = OpenQueue->MiniportNextOpen;
  MiniportHandle->MiniportThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&MiniportHandle->Lock);
  if ( OpenQueue )
  {
    KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
    if ( (a1->OpenFlags & 0x8000) != 0 )
    {
      p_SpinLock = &a1->SpinLock;
    }
    else
    {
      a1->OpenFlags |= 0x8000u;
      KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel(&MiniportHandle->Lock);
        MiniportHandle->MiniportThread = KeGetCurrentThread();
        if ( !MiniportHandle->LockAcquired )
          break;
        MiniportHandle->MiniportThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&MiniportHandle->Lock);
        KeStallExecutionProcessor(1u);
      }
      MiniportHandle->LockAcquired = 1;
      v5 = MiniportHandle->MediaType == NdisMedium802_3;
      EthDB = MiniportHandle->EthDB;
      MiniportHandle->LockThread = KeGetCurrentThread();
      if ( v5 )
        EthDeleteFilterOpenAdapter(EthDB, a1);
      else
        nullDeleteFilterOpenAdapter(EthDB, a1);
      if ( MiniportHandle->MediaType == NdisMedium802_3 && (MiniportHandle->PnPFlags & 0x4010) == 0 )
        ndisMRestoreFilterSettings(MiniportHandle, (struct _LIST_ENTRY *)a1, 0);
      MiniportHandle->LockThread = 0LL;
      MiniportHandle->LockAcquired = 0;
      ndisMDereferenceOpenLocked((__int64)a1, 1u);
      MiniportHandle->MiniportThread = 0LL;
      p_SpinLock = &MiniportHandle->Lock;
    }
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xBu,
      (struct _GUID *)&WPP_9190a19b6c933546b552b39008d6fd57_Traceguids,
      a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
}
