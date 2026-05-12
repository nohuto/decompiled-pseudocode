/*
 * XREFs of sub_1C0048CD0 @ 0x1C0048CD0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 */

__int64 __fastcall sub_1C0048CD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rdi
  PIRP v4; // r9

  v2 = 0;
  if ( a2 )
  {
    v3 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_1C000E2EC(a1);
    sub_1C0003440(v4, 0, v4->IoStatus.Status);
    if ( v3 )
      ExReleaseRundownProtectionCacheAware(v3[37]);
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v2;
}
