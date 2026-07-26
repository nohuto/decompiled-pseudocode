/*
 * XREFs of ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002C178
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CF10 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C0033834 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCompartmentNotificationWorker @ 0x1C0037E40 (ndisIfCompartmentNotificationWorker.c)
 *     ndisIfCreateCompartment @ 0x1C00B825C (ndisIfCreateCompartment.c)
 *     ndisIfDeleteCompartment @ 0x1C00B867C (ndisIfDeleteCompartment.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00BAA14 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00BB2E0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00BB840 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COMPARTMENTBLOCK_DECREMENT_REF(struct _NDIS_IF_COMPARTMENT_BLOCK *a1)
{
  struct _KEVENT *v1; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 11, 0xFFFFFFFF) == 1 )
  {
    v1 = (struct _KEVENT *)*((_QWORD *)a1 + 214);
    if ( v1 )
      KeSetEvent(v1, 0, 0);
  }
}
