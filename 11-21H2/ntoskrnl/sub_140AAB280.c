/*
 * XREFs of sub_140AAB280 @ 0x140AAB280
 * Callers:
 *     sub_140AAB248 @ 0x140AAB248 (sub_140AAB248.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

__int64 sub_140AAB280()
{
  __int64 i; // rbx

  for ( i = qword_140C0E060; (__int64 *)i != &qword_140C0E060; i = *(_QWORD *)i )
    PoSetHiberRange(0LL, 0x10000u, (PVOID)(i - 8), *(_QWORD *)(i + 24), 0x4B424742u);
  return 0LL;
}
