/*
 * XREFs of ?ndisRemovePMLowestPriorityEntry@@YAPEAU_NDIS_PACKET_PATTERN_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C00932A0
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0090F50 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00914B0 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PACKET_PATTERN_ENTRY *__fastcall ndisRemovePMLowestPriorityEntry(
        struct _SINGLE_LIST_ENTRY *a1,
        unsigned int a2)
{
  _SINGLE_LIST_ENTRY *Next; // r10
  struct _SINGLE_LIST_ENTRY *v3; // r9
  unsigned int v4; // r11d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  bool v7; // cc
  struct _SINGLE_LIST_ENTRY v8; // rcx

  Next = a1->Next;
  v3 = 0LL;
  v4 = 1;
  if ( !a1->Next )
    return 0LL;
  do
  {
    v5 = (unsigned int)Next[4].Next;
    v6 = v4;
    v7 = v5 <= v4;
    v4 = v5;
    if ( v7 )
      a1 = v3;
    v3 = a1;
    a1 = Next;
    Next = Next->Next;
    if ( v5 <= v6 )
      v4 = v6;
  }
  while ( Next );
  if ( !v3 )
    return 0LL;
  v8.Next = v3->Next;
  if ( !v3->Next )
    return 0LL;
  if ( LODWORD(v8.Next[4].Next) <= a2 )
    return 0LL;
  v3->Next = v8.Next->Next;
  return (struct _NDIS_PACKET_PATTERN_ENTRY *)v8.Next;
}
