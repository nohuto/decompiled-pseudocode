/*
 * XREFs of RtlStringLengthWorkerW @ 0x180009AC0
 * Callers:
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1800098A8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlStringCbCatW @ 0x180009A14 (RtlStringCbCatW.c)
 *     RtlpGetVolumeHandle @ 0x18000AEC4 (RtlpGetVolumeHandle.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800D6AD8 (LdrpAppxGetRemediationRegistryKey.c)
 *     RtlpCleanupRegistryKeys @ 0x1800FAF00 (RtlpCleanupRegistryKeys.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180126D38 (RtlpQueryDiskSpacePolicy.c)
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
