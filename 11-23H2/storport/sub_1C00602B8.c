/*
 * XREFs of sub_1C00602B8 @ 0x1C00602B8
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0008A7C @ 0x1C0008A7C (sub_1C0008A7C.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 */

__int64 __fastcall sub_1C00602B8(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *v5; // rbx

  v4 = -1073741823;
  if ( sub_1C0008B84(a1) )
  {
    sub_1C0008A7C(a1, 0, 2LL, 0LL);
    v5 = (PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784);
    if ( sub_1C0008B84(a1) )
      ExReleaseRundownProtectionCacheAware(*v5);
    ExReleaseRundownProtectionCacheAware(*v5);
    v4 = 0;
  }
  return sub_1C0003440(a2, 0, v4);
}
