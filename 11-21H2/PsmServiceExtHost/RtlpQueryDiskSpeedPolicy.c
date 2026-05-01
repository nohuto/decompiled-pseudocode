/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x18004BD98
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18004BD30 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce_0 @ 0x18004F254 (RtlRunOnceExecuteOnce_0.c)
 */

__int64 __fastcall RtlpQueryDiskSpeedPolicy(_DWORD *a1)
{
  if ( BYTE1(RtlpUserPolicies) )
  {
    *a1 = BYTE1(RtlpUserPolicies);
  }
  else if ( (RtlGetSuiteMask() & 0x10000) != 0 )
  {
    *a1 = 20;
  }
  else
  {
    RtlRunOnceExecuteOnce_0(&RtlpDiskSpeedInit, RtlpDiskSpeedInitialize, 0LL, 0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
