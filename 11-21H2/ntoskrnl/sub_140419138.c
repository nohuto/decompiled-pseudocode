/*
 * XREFs of sub_140419138 @ 0x140419138
 * Callers:
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_14096AF9C @ 0x14096AF9C (sub_14096AF9C.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     sub_14026A230 @ 0x14026A230 (sub_14026A230.c)
 *     sub_1405531C0 @ 0x1405531C0 (sub_1405531C0.c)
 */

__int64 sub_140419138()
{
  sub_14026A230();
  ++dword_140C50744;
  KeInvalidateAllCaches();
  return sub_1405531C0();
}
