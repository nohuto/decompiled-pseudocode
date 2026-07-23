/*
 * XREFs of sub_140395610 @ 0x140395610
 * Callers:
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 * Callees:
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall sub_140395610(void *a1)
{
  return ZwDeleteKey(a1);
}
