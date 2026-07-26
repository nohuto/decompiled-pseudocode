/*
 * XREFs of ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C01346E4
 * Callers:
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0134718 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct NDIS_PD_BM_DOMAIN *__fastcall ndisPDFindAndReferenceBMDomainUnderLock(int a1)
{
  _QWORD *i; // rdx
  struct NDIS_PD_BM_DOMAIN *result; // rax

  for ( i = *(_QWORD **)(*(_QWORD *)&qword_1C00F5708 + 8240LL); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(*(_QWORD *)&qword_1C00F5708 + 8240LL) )
      return 0LL;
    result = (struct NDIS_PD_BM_DOMAIN *)(i - 1);
    if ( *((_DWORD *)i + 4) == a1 )
      break;
  }
  ++*(_DWORD *)result;
  return result;
}
