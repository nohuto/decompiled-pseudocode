/*
 * XREFs of BiZwDeleteKey @ 0x140373E50
 * Callers:
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14041CC30 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
