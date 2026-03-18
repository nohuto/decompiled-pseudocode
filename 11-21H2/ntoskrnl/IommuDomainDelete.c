/*
 * XREFs of IommuDomainDelete @ 0x14090AAF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x14051AF88 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  return HalpIommuFreeDmaDomain(a1);
}
