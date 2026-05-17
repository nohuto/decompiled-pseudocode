/*
 * XREFs of RtlpQueryDiskSpeedPolicy @ 0x180088C00
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180032A30 (RtlRunOnceExecuteOnce.c)
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
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
    RtlRunOnceExecuteOnce(
      &RtlpDiskSpeedInit,
      (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpDiskSpeedInitialize,
      0LL,
      0LL);
    *a1 = RtlpDiskSpeedPolicy;
  }
  return 0LL;
}
