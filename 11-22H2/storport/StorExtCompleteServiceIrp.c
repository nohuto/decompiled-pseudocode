/*
 * XREFs of StorExtCompleteServiceIrp @ 0x1C0045540
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 */

void __fastcall StorExtCompleteServiceIrp(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *Adapter; // rbx
  PIRP v2; // r9

  Adapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)RaidpPortGetAdapter(a1);
  RaidCompleteRequestEx(v2, 0, v2->IoStatus.Status);
  if ( Adapter )
    ExReleaseRundownProtectionCacheAware(Adapter[37]);
}
