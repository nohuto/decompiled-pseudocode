/*
 * XREFs of SepInitializeSharedSidMap @ 0x1408489C4
 * Callers:
 *     SepVariableInitialization @ 0x140B62268 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x14036F820 (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  PRTL_DYNAMIC_HASH_TABLE *v0; // rcx
  unsigned int v1; // ebx

  v0 = (PRTL_DYNAMIC_HASH_TABLE *)g_SepSidMapping;
  v1 = 0;
  *(_QWORD *)g_SepSidMapping = 0LL;
  *++v0 = 0LL;
  if ( !RtlCreateHashTable(v0, 0, 0) )
    return (unsigned int)-1073741801;
  return v1;
}
