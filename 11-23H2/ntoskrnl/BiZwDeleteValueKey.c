/*
 * XREFs of BiZwDeleteValueKey @ 0x140373FC0
 * Callers:
 *     BiDeleteRegistryValue @ 0x140807274 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14041C900 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
