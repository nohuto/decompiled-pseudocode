/*
 * XREFs of PsChargeSharedPoolQuota @ 0x14075C334
 * Callers:
 *     PspAllocateRateControl @ 0x140684EF8 (PspAllocateRateControl.c)
 *     ObAdjustSecurityQuota @ 0x14069E9B8 (ObAdjustSecurityQuota.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 *     SeDefaultObjectMethod @ 0x1407291B0 (SeDefaultObjectMethod.c)
 *     RtlpAllocateAtom @ 0x14075A9F0 (RtlpAllocateAtom.c)
 *     ObpChargeQuotaForObject @ 0x14075C234 (ObpChargeQuotaForObject.c)
 * Callees:
 *     PspChargeQuota @ 0x14022ED00 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1402AD330 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].Affinity.StaticBitmap[27];
  if ( !a2 || (int)PspChargeQuota(a1[1].Affinity.StaticBitmap[27], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1, a2);
  }
  return 0LL;
}
