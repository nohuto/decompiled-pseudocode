/*
 * XREFs of MiInsertInPageBlock @ 0x1402BD368
 * Callers:
 *     MiFreeInPageSupportBlock @ 0x1402BD2CC (MiFreeInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x140375EE0 (MiInitializePageFaultResources.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiInsertInPageBlock(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rcx
  _SLIST_HEADER *v3; // rcx

  v2 = ((unsigned int)~LODWORD(ListEntry[12].Next) >> 6) & 1;
  if ( (unsigned __int64)ListEntry >= MiState[v2 + 2117] && (unsigned __int64)ListEntry < MiState[v2 + 2119] )
  {
    v3 = (_SLIST_HEADER *)((char *)&unk_140C69780 + 16 * v2);
    goto LABEL_5;
  }
  if ( (unsigned int)LOWORD(MiState[2 * v2 + 2108]) < *((unsigned __int8 *)&MiState[2116] + v2) )
  {
    v3 = (_SLIST_HEADER *)&MiState[2 * v2 + 2108];
LABEL_5:
    RtlpInterlockedPushEntrySList(v3, ListEntry);
    return 1LL;
  }
  return 0LL;
}
