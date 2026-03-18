/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x1402F8670
 * Callers:
 *     ObAdjustSecurityQuota @ 0x14069E9B8 (ObAdjustSecurityQuota.c)
 *     SeDefaultObjectMethod @ 0x140728FB0 (SeDefaultObjectMethod.c)
 *     NtQueryObject @ 0x14075B390 (NtQueryObject.c)
 *     ObpChargeQuotaForObject @ 0x14075C044 (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x14097B914 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
