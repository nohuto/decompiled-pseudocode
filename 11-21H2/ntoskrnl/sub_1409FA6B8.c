/*
 * XREFs of sub_1409FA6B8 @ 0x1409FA6B8
 * Callers:
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 */

void __fastcall sub_1409FA6B8(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 46848);
  if ( v1 )
    ExNotifyCallback(v1, 0LL, 0LL);
}
