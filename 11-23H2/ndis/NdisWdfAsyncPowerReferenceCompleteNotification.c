/*
 * XREFs of NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C01391C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C003F962 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 */

void __fastcall NdisWdfAsyncPowerReferenceCompleteNotification(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  ndisWdfSelectiveSuspendResumeOperations(a1, (unsigned int)a2 >> 31, a2 < 0);
}
