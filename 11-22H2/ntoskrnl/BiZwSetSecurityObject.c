/*
 * XREFs of BiZwSetSecurityObject @ 0x140374434
 * Callers:
 *     BiCreateKey @ 0x140806388 (BiCreateKey.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x14041DD60 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
