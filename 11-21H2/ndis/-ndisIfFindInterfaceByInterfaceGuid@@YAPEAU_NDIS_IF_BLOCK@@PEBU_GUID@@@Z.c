/*
 * XREFs of ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x1C00340F8
 * Callers:
 *     ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x1C00584F0 (-IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z.c)
 *     ndisConvertIdentifierForNetworkInterface @ 0x1C005BF78 (ndisConvertIdentifierForNetworkInterface.c)
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B29D4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B4768 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall ndisIfFindInterfaceByInterfaceGuid(const struct _GUID *a1)
{
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rcx

  Flink = ndisIfList.Flink;
  v3 = 0LL;
  while ( Flink != &ndisIfList )
  {
    v4 = *(_QWORD *)&a1->Data1 - *(unsigned __int64 *)((char *)&Flink[-44].Blink + 4);
    if ( *(_LIST_ENTRY **)&a1->Data1 == *(_LIST_ENTRY **)((char *)&Flink[-44].Blink + 4) )
      v4 = *(_QWORD *)a1->Data4 - *(unsigned __int64 *)((char *)&Flink[-43].Flink + 4);
    if ( !v4 )
      return Flink - 77;
    Flink = Flink->Flink;
  }
  return (struct _LIST_ENTRY *)v3;
}
