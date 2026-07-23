/*
 * XREFs of sub_140370C00 @ 0x140370C00
 * Callers:
 *     sub_14036EBE8 @ 0x14036EBE8 (sub_14036EBE8.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_140370C40 @ 0x140370C40 (sub_140370C40.c)
 *     sub_1405F3870 @ 0x1405F3870 (sub_1405F3870.c)
 * Callees:
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140371398 @ 0x140371398 (sub_140371398.c)
 */

__int64 __fastcall sub_140370C00(__int64 a1, __int128 *a2)
{
  __int128 **v2; // rax
  __int64 v3; // r10
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a2;
  v2 = (__int128 **)sub_140371398(&v5);
  return sub_140364128(*v2, v3, 0x1000000, 0LL);
}
