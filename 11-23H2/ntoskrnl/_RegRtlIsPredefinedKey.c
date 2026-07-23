/*
 * XREFs of _RegRtlIsPredefinedKey @ 0x1406CEEBC
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1406CEDA0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14079812C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlQueryKeyPathName @ 0x1408623AC (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegRtlIsPredefinedKey(__int64 a1)
{
  return (unsigned __int64)(a1 - 0x80000000LL) <= 6 || a1 == 2147483655LL;
}
