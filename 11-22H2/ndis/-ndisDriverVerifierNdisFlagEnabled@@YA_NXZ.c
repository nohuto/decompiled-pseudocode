/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C01394AC
 * Callers:
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x1C0111420 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0149DA0 (NdisOpenAdapterEx.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C014A490 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0160544 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool ndisDriverVerifierNdisFlagEnabled(void)
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return !MmIsVerifierEnabled(&VerifierFlags) && (VerifierFlags & 0x200000) != 0;
}
