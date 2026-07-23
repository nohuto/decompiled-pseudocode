/*
 * XREFs of sub_140977DCC @ 0x140977DCC
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 * Callees:
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 */

__int64 sub_140977DCC()
{
  __int64 v0; // rax
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  _OWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+60h] [rbp-18h]

  v5 = 0LL;
  memset(v4, 0, sizeof(v4));
  v0 = sub_14027B520();
  return sub_14027E810(v0, 0LL, v1, v2, 33, v4);
}
