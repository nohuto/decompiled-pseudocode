/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14069ECA8
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspFreeRateControl @ 0x140684EAC (PspFreeRateControl.c)
 *     ObAdjustSecurityQuota @ 0x14069E9B8 (ObAdjustSecurityQuota.c)
 *     RtlpFreeAtom @ 0x14069EC78 (RtlpFreeAtom.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7090 (ObpIncrementHandleCountEx.c)
 *     SeDefaultObjectMethod @ 0x1407291B0 (SeDefaultObjectMethod.c)
 *     ObpChargeQuotaForObject @ 0x14075C234 (ObpChargeQuotaForObject.c)
 *     AlpcMessageDestroyProcedure @ 0x1407B6420 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD330 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x14069ECF4 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
