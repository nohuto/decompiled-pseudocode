/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C0069E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00674F8 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C0067A8C (-ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, void *),
        void *a3)
{
  unsigned __int64 *p_Lock; // rbp
  unsigned int v7; // esi
  KIRQL v8; // r14
  enum _NDIS_WORK_ITEM_TYPE v9; // edx
  int v10; // eax
  int v11; // ebx

  p_Lock = &a1->Lock;
  v7 = 0;
  v8 = KfRaiseIrql(2u);
  if ( KeGetCurrentThread() == a1->MiniportThread )
  {
    KeAcquireSpinLockAtDpcLevel(p_Lock);
LABEL_5:
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    a2(a1->MiniportAdapterContext, a3);
    KeAcquireSpinLockAtDpcLevel(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    ndisMProcessDeferred(a1);
    a1->LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_8;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( !a1->LockAcquired )
  {
    a1->LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  v10 = ndisMQueueNewWorkItem(a1, v9, a3, (void (*)(void *, void *))a2);
  a1->MiniportThread = 0LL;
  v11 = v10;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v7 = -1073741670;
  if ( !v11 )
    v7 = 259;
LABEL_8:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v7;
}
