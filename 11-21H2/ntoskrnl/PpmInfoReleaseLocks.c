/*
 * XREFs of PpmInfoReleaseLocks @ 0x1407FD604
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1407FCE7C (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
