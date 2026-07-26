/*
 * XREFs of ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0096300
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C000301C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0092A30 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A340 (-ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePMHaltOnSuspend(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // rax
  __int64 v2; // rcx
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL v4; // dl
  KIRQL NewIrql; // [rsp+38h] [rbp+10h] BYREF

  NewIrql = 0;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v3 = MiniportFromReqTracker;
  if ( (MiniportFromReqTracker->Flags & 0x80u) == 0 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(MiniportFromReqTracker, &NewIrql);
    v4 = NewIrql;
    v3->WSyncFlags |= 0x10u;
    v3->MiniportThread = 0LL;
    KeReleaseSpinLock(&v3->Lock, v4);
    v3->PnPFlags &= 0xFFFFFF9F;
    v3->PnPCapabilities |= 0x10u;
    ndisUpdateAndIndicatePMCapabilities(v3);
  }
  else
  {
    *(_DWORD *)(v2 + 40) = -1073741637;
  }
  return 1;
}
