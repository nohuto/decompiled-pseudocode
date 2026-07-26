/*
 * XREFs of ?XFilterAdjust@@YAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@I@Z @ 0x1C001A4E4
 * Callers:
 *     ?ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C001A2CC (-ndisSetOpenPacketFilter@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00A6D7C (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XFilterAdjust(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2, unsigned int a3)
{
  unsigned int CombinedPacketFilter; // eax
  _NDIS_OPEN_BLOCK *OpenList; // rdx
  unsigned int v5; // eax
  _NDIS_OPEN_BLOCK *i; // rdx
  _NDIS_OPEN_BLOCK *j; // rdx

  if ( a2 )
  {
    if ( a3 && (a3 & 0x10080) == 0x10080 )
      a3 &= ~0x10000u;
    a2->OldPacketFilters = a2->PacketFilters;
    a2->PacketFilters = a3;
  }
  CombinedPacketFilter = a1->CombinedPacketFilter;
  a1->CombinedPacketFilter = 0;
  OpenList = a1->OpenList;
  a1->OldCombinedPacketFilter = CombinedPacketFilter;
  v5 = 0;
  while ( OpenList )
  {
    v5 |= OpenList->PacketFilters;
    a1->CombinedPacketFilter = v5;
    OpenList = OpenList->FilterNextOpen;
  }
  for ( i = a1->NoFTypeOpenList; i; i = i->FilterNextOpen )
  {
    v5 |= i->PacketFilters;
    a1->CombinedPacketFilter = v5;
  }
  for ( j = a1->FTypeOpenList; j; j = j->FilterNextOpen )
  {
    v5 |= j->PacketFilters;
    a1->CombinedPacketFilter = v5;
  }
  if ( (v5 & 0x10000) != 0 )
    a1->CombinedPacketFilter = v5 & 0xFFFEFFFF;
  return 259LL;
}
