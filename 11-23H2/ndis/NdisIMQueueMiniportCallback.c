/*
 * XREFs of NdisIMQueueMiniportCallback @ 0x1C006F220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C894 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z @ 0x1C006CE68 (-ndisMQueueNewWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_WORK_ITEM_TYPE@@PEAXP6AX22@Z@Z.c)
 */

__int64 __fastcall NdisIMQueueMiniportCallback(
        struct _NDIS_MINIPORT_BLOCK *a1,
        void (__fastcall *a2)(void *, void *),
        void *a3)
{
  unsigned int v6; // esi
  unsigned __int8 *p_LockAcquired; // rbx
  KIRQL v8; // r14
  unsigned __int64 *p_Lock; // rcx
  enum _NDIS_WORK_ITEM_TYPE v10; // edx
  int v11; // eax
  int v12; // ebx

  v6 = 0;
  p_LockAcquired = &a1->LockAcquired;
  v8 = KfRaiseIrql(2u);
  p_Lock = &a1->Lock;
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
    *p_LockAcquired = 0;
    a1->LockThread = 0LL;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    goto LABEL_8;
  }
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  a1->MiniportThread = KeGetCurrentThread();
  if ( !*p_LockAcquired )
  {
    *p_LockAcquired = 1;
    a1->LockThread = KeGetCurrentThread();
    goto LABEL_5;
  }
  v11 = ndisMQueueNewWorkItem(a1, v10, a3, (void (*)(void *, void *))a2);
  a1->MiniportThread = 0LL;
  v12 = v11;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  v6 = -1073741670;
  if ( !v12 )
    v6 = 259;
LABEL_8:
  if ( v8 != 2 )
    KeLowerIrql(v8);
  return v6;
}
