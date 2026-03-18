/*
 * XREFs of BiZwSetSecurityObject @ 0x140373DE0
 * Callers:
 *     BiCreateKey @ 0x140803E04 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041E420 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
