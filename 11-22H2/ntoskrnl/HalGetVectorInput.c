/*
 * XREFs of HalGetVectorInput @ 0x1403AD2F0
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x14085B8D0 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))off_140C01A58[0])(a1);
}
