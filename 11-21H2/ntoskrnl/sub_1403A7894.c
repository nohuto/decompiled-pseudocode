/*
 * XREFs of sub_1403A7894 @ 0x1403A7894
 * Callers:
 *     sub_140812318 @ 0x140812318 (sub_140812318.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall sub_1403A7894(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
