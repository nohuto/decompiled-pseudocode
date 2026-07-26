/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x1C01113E0
 * Callers:
 *     ?ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z @ 0x1C001B098 (-ndisPplConfigureVerifier@@YAXPEAU_NDIS_POOL_HEADER@@PEAX_N@Z.c)
 * Callees:
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C013948C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 */

bool __fastcall ndisDriverVerifierNdisFlagEnabledForCaller(void *a1)
{
  char v1; // bl

  v1 = 0;
  if ( MmIsDriverVerifyingByAddress(a1) )
    return ndisDriverVerifierNdisFlagEnabled();
  return v1;
}
