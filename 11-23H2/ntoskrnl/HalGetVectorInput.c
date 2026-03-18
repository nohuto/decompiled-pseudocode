/*
 * XREFs of HalGetVectorInput @ 0x1403AD980
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x14085B100 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))off_140C01A58[0])(a1);
}
