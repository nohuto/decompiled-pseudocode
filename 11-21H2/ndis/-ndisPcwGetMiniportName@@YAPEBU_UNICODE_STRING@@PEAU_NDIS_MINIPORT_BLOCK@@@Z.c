/*
 * XREFs of ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012B090
 * Callers:
 *     ndisNdkPcwAddCounter @ 0x1C0098060 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwEnumerateInstances @ 0x1C00981E0 (ndisNdkPcwEnumerateInstances.c)
 * Callees:
 *     <none>
 */

const struct _UNICODE_STRING *__fastcall ndisPcwGetMiniportName(struct _NDIS_MINIPORT_BLOCK *a1)
{
  const struct _UNICODE_STRING *result; // rax

  result = a1->pModifiedInstanceName;
  if ( !result )
    return a1->pAdapterInstanceName;
  return result;
}
