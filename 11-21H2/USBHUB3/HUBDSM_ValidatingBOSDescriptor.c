/*
 * XREFs of HUBDSM_ValidatingBOSDescriptor @ 0x1C00207F0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0028588 (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingBOSDescriptor(__int64 a1)
{
  return HUBDTX_ValidateAndCacheBOSDescriptor(*(_QWORD *)(a1 + 960));
}
