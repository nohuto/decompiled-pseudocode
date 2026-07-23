/*
 * XREFs of sub_1406D7050 @ 0x1406D7050
 * Callers:
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 * Callees:
 *     sub_1402509C4 @ 0x1402509C4 (sub_1402509C4.c)
 */

__int64 __fastcall sub_1406D7050(__int64 a1, unsigned int a2, ULONG a3, char *a4, ULONG a5)
{
  void *v5; // rdx
  int v7; // [rsp+28h] [rbp-20h]

  v5 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v5 )
    return sub_1402509C4(v5, (__int64)v5, a3, a4, a5, v7, *(_QWORD *)(a1 + 56));
  else
    return 0LL;
}
