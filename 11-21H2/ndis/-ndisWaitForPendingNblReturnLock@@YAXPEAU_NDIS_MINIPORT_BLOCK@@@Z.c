/*
 * XREFs of ?ndisWaitForPendingNblReturnLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006201C
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000A6C0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 */

void __fastcall ndisWaitForPendingNblReturnLock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int64 *p_PowerStateLock; // rdi
  KIRQL v3; // al

  p_PowerStateLock = &a1->PowerStateLock;
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(p_PowerStateLock);
    if ( !a1->PendingReturnNBLCount )
      break;
    KeReleaseSpinLock(p_PowerStateLock, v3);
    NdisMSleep(0x32u);
  }
}
