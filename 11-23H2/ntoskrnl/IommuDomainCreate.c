/*
 * XREFs of IommuDomainCreate @ 0x140935690
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403A98AC (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreate(char a1, _QWORD *a2)
{
  return HalpIommuAllocateDmaDomain(a1 == 0 ? 2 : 0, 0LL, 0LL, 0LL, a2);
}
