/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x1C012D690
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x1C013EAC0 (NdisOpenAdapterEx.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0154BEC (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 * Callees:
 *     <none>
 */

bool ndisDriverVerifierNdisFlagEnabled(void)
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return !MmIsVerifierEnabled(&VerifierFlags) && (VerifierFlags & 0x200000) != 0;
}
