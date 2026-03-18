/*
 * XREFs of PpmInfoReleaseLocks @ 0x14082C600
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14082BF80 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C280 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
}
