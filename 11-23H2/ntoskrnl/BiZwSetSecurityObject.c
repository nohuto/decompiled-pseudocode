/*
 * XREFs of BiZwSetSecurityObject @ 0x140373F80
 * Callers:
 *     BiCreateKey @ 0x1408040D4 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041E7B0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
