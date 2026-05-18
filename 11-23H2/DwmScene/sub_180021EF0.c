/*
 * XREFs of sub_180021EF0 @ 0x180021EF0
 * Callers:
 *     sub_180021DC4 @ 0x180021DC4 (sub_180021DC4.c)
 * Callees:
 *     sub_180012030 @ 0x180012030 (sub_180012030.c)
 */

signed __int64 sub_180021EF0()
{
  return _InterlockedDecrement64((volatile signed __int64 *)sub_180012030((__int64)&unk_1801D33C8));
}
