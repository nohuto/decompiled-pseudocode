/*
 * XREFs of StorpCompleteServiceIrp @ 0x1C0048700
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

__int64 __fastcall StorpCompleteServiceIrp(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *Adapter; // rdi
  PIRP v4; // r9

  v2 = 0;
  if ( a2 )
  {
    Adapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)RaidpPortGetAdapter(a1);
    RaidCompleteRequestEx(v4, 0, v4->IoStatus.Status);
    if ( Adapter )
      ExReleaseRundownProtectionCacheAware(Adapter[37]);
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v2;
}
