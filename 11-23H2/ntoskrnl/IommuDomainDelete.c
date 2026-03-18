/*
 * XREFs of IommuDomainDelete @ 0x1409356C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x140518130 (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  return HalpIommuFreeDmaDomain(a1);
}
