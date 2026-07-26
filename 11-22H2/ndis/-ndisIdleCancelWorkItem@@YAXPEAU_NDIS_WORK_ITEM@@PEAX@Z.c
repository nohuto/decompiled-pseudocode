/*
 * XREFs of ?ndisIdleCancelWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00ACE40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00ACB44 (-ndisCancelIdleRequest@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisIdleCancelWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v4; // al

  SelectiveSuspend = a2->SelectiveSuspend;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x40u;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v4);
  ndisCancelIdleRequest(a2, 0, 0);
}
