/*
 * XREFs of sub_1C0045B10 @ 0x1C0045B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

void __fastcall sub_1C0045B10(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v1; // rbx
  PIRP v2; // r9

  v1 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_1C000E2EC(a1);
  sub_1C0003440(v2, 0, v2->IoStatus.Status);
  if ( v1 )
    ExReleaseRundownProtectionCacheAware(v1[37]);
}
