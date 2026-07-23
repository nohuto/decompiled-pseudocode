/*
 * XREFs of sub_1407FFEBC @ 0x1407FFEBC
 * Callers:
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     ExNotifyCallback @ 0x140232770 (ExNotifyCallback.c)
 *     sub_140256CA0 @ 0x140256CA0 (sub_140256CA0.c)
 *     sub_140A4B974 @ 0x140A4B974 (sub_140A4B974.c)
 */

__int64 sub_1407FFEBC()
{
  sub_140A4B974(8LL);
  sub_140256CA0(&stru_14000F0D8);
  ExNotifyCallback(qword_140C158D0, (PVOID)3, 0LL);
  sub_140256CA0(&stru_14000F0E8);
  return sub_140A4B974(9LL);
}
