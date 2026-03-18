/*
 * XREFs of BiZwOpenKey @ 0x140373DB8
 * Callers:
 *     BiCreateKey @ 0x140803E04 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
