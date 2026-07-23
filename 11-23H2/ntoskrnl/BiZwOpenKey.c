/*
 * XREFs of BiZwOpenKey @ 0x140373F58
 * Callers:
 *     BiCreateKey @ 0x1408040D4 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
