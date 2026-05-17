/*
 * XREFs of RtlStringLengthWorkerW @ 0x18007EE40
 * Callers:
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetVolumeHandle @ 0x180062628 (RtlpGetVolumeHandle.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x18007EC28 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlStringCbCatW @ 0x18007ED94 (RtlStringCbCatW.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6B3C (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FA8F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18012B9C0 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringLengthWorkerW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
