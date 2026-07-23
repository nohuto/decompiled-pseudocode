/*
 * XREFs of sub_1403A7830 @ 0x1403A7830
 * Callers:
 *     sub_1408036C8 @ 0x1408036C8 (sub_1408036C8.c)
 *     sub_140813164 @ 0x140813164 (sub_140813164.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall sub_1403A7830(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
