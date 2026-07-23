/*
 * XREFs of sub_140362B58 @ 0x140362B58
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_140351E90 @ 0x140351E90 (sub_140351E90.c)
 *     sub_140362714 @ 0x140362714 (sub_140362714.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 *     sub_1403633A0 @ 0x1403633A0 (sub_1403633A0.c)
 *     sub_140363E50 @ 0x140363E50 (sub_140363E50.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366CB0 @ 0x140366CB0 (sub_140366CB0.c)
 *     sub_14036808C @ 0x14036808C (sub_14036808C.c)
 *     sub_14036F520 @ 0x14036F520 (sub_14036F520.c)
 *     sub_14036F620 @ 0x14036F620 (sub_14036F620.c)
 *     sub_140371398 @ 0x140371398 (sub_140371398.c)
 *     sub_140371C50 @ 0x140371C50 (sub_140371C50.c)
 *     sub_1405F2F80 @ 0x1405F2F80 (sub_1405F2F80.c)
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_140362B58(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 608LL);
  else
    return &unk_140C5B140;
}
