/*
 * XREFs of sub_1403A7874 @ 0x1403A7874
 * Callers:
 *     sub_14081287C @ 0x14081287C (sub_14081287C.c)
 *     sub_140813564 @ 0x140813564 (sub_140813564.c)
 * Callees:
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 */

NTSTATUS __fastcall sub_1403A7874(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
