/*
 * XREFs of sub_140371398 @ 0x140371398
 * Callers:
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 *     sub_1403700FC @ 0x1403700FC (sub_1403700FC.c)
 *     sub_140370C00 @ 0x140370C00 (sub_140370C00.c)
 *     sub_140371274 @ 0x140371274 (sub_140371274.c)
 * Callees:
 *     sub_140362B58 @ 0x140362B58 (sub_140362B58.c)
 */

__int64 __fastcall sub_140371398(__int128 *a1)
{
  void *v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a1;
  v1 = sub_140362B58(&v6);
  v2 = 3LL;
  v4 = v3 >> 8;
  if ( (unsigned __int8)v4 < 3u )
    v2 = (unsigned __int8)v4;
  return (__int64)v1 + 16 * v2 + 14488;
}
