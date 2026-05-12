/*
 * XREFs of sub_1C0013220 @ 0x1C0013220
 * Callers:
 *     sub_1C001313C @ 0x1C001313C (sub_1C001313C.c)
 *     sub_1C0022DB0 @ 0x1C0022DB0 (sub_1C0022DB0.c)
 *     sub_1C004EF10 @ 0x1C004EF10 (sub_1C004EF10.c)
 *     sub_1C004F710 @ 0x1C004F710 (sub_1C004F710.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

BOOLEAN __fastcall sub_1C0013220(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( sub_1C0008B84(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1792) + 72LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1792) + 72LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
  return v2;
}
