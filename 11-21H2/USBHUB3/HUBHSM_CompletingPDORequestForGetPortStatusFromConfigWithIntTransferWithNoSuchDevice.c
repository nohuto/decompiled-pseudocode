/*
 * XREFs of HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice @ 0x1C0008320
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_CompleteGetPortStatusWithFailedStatus @ 0x1C00061AC (HUBHTX_CompleteGetPortStatusWithFailedStatus.c)
 */

__int64 __fastcall HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransferWithNoSuchDevice(__int64 a1)
{
  HUBHTX_CompleteGetPortStatusWithFailedStatus(*(_QWORD *)(a1 + 960), 0xC000000E);
  return 2053LL;
}
