/*
 * XREFs of sub_1C0045280 @ 0x1C0045280
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C000E2EC @ 0x1C000E2EC (sub_1C000E2EC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1C0045280(__int64 *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *v2; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v3; // rbx

  v2 = (PEX_RUNDOWN_REF_CACHE_AWARE *)sub_1C000E2EC(*a1);
  v3 = v2;
  if ( v2 )
  {
    if ( (int)sub_1C00076F4((__int64)v2) >= 0 )
    {
      ((void (__fastcall *)(__int64))a1[1])(*a1);
      ExReleaseRundownProtectionCacheAware(v3[37]);
    }
  }
}
