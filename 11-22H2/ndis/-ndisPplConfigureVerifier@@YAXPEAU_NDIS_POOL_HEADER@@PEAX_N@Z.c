/*
 * XREFs of ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x1C001AF08
 * Callers:
 *     NdisAllocateNetBufferListPool @ 0x1C001AA50 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocateNetBufferPool @ 0x1C0031630 (NdisAllocateNetBufferPool.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x1C0111420 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 */

void __fastcall ndisPplConfigureVerifier(struct _NDIS_POOL_HEADER *a1, void *a2, char a3)
{
  if ( !ndisDisableNblUseAfterFreeVerifier
    && (!KeGetCurrentIrql() && ndisDriverVerifierNdisFlagEnabledForCaller(a2) || a3) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0xAu,
        (struct _GUID *)&WPP_da285872e2723d62fcb8cab539a90eca_Traceguids,
        a1);
    a1->PoolFlags |= 1u;
  }
}
