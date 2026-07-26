/*
 * XREFs of ??1?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAA@XZ @ 0x1C0069A34
 * Callers:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C011CB6C (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 * Callees:
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C012D720 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 */

NDIS_BIND_FILTER_LINK *__fastcall wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::~unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>(
        NDIS_BIND_FILTER_LINK **a1,
        unsigned int a2)
{
  NDIS_BIND_FILTER_LINK *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (NDIS_BIND_FILTER_LINK *)NDIS_BIND_FILTER_LINK::`scalar deleting destructor'(result, a2);
  return result;
}
