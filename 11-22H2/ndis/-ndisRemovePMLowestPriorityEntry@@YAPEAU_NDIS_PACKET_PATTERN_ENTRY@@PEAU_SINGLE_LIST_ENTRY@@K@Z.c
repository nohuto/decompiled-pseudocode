/*
 * XREFs of ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00992B8
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0096F5C (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00974C0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisRemovePMLowestPriorityEntry(
        struct _SINGLE_LIST_ENTRY *a1,
        unsigned int a2)
{
  _SINGLE_LIST_ENTRY *Next; // r9
  struct _SINGLE_LIST_ENTRY *v3; // r8
  unsigned int v4; // r10d
  unsigned int v5; // eax
  struct _SINGLE_LIST_ENTRY v6; // rcx

  Next = a1->Next;
  v3 = 0LL;
  v4 = 1;
  if ( !a1->Next )
    return 0LL;
  do
  {
    v5 = (unsigned int)Next[4].Next;
    if ( v5 <= v4 )
    {
      a1 = v3;
      v5 = v4;
    }
    v3 = a1;
    v4 = v5;
    a1 = Next;
    Next = Next->Next;
  }
  while ( Next );
  if ( !v3 )
    return 0LL;
  v6.Next = v3->Next;
  if ( !v3->Next )
    return 0LL;
  if ( LODWORD(v6.Next[4].Next) <= a2 )
    return 0LL;
  v3->Next = v6.Next->Next;
  return (struct _NDIS_PACKET_PATTERN_ENTRY *)v6.Next;
}
