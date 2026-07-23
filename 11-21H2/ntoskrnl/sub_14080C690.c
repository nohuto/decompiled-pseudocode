/*
 * XREFs of sub_14080C690 @ 0x14080C690
 * Callers:
 *     <none>
 * Callees:
 *     sub_140809310 @ 0x140809310 (sub_140809310.c)
 *     sub_1408095C4 @ 0x1408095C4 (sub_1408095C4.c)
 */

__int64 __fastcall sub_14080C690(__int64 a1)
{
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 3;
  sub_140809310(a1, (__int64)v3);
  sub_1408095C4(1u, *(_DWORD *)(a1 + 24));
  return 0LL;
}
