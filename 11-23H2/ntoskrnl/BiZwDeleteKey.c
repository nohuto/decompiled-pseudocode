/*
 * XREFs of BiZwDeleteKey @ 0x140373CB0
 * Callers:
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14041C8A0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
