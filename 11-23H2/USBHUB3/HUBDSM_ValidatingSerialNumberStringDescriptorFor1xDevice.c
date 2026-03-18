/*
 * XREFs of HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice @ 0x1C0022190
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_ValidateAndCacheSerialNumberStringDescriptor @ 0x1C002CD10 (HUBDTX_ValidateAndCacheSerialNumberStringDescriptor.c)
 */

__int64 __fastcall HUBDSM_ValidatingSerialNumberStringDescriptorFor1xDevice(__int64 a1)
{
  return HUBDTX_ValidateAndCacheSerialNumberStringDescriptor(*(_QWORD *)(a1 + 960));
}
