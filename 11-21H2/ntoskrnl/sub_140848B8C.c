/*
 * XREFs of sub_140848B8C @ 0x140848B8C
 * Callers:
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 * Callees:
 *     RtlCreateHashTable @ 0x14021FAF0 (RtlCreateHashTable.c)
 */

__int64 sub_140848B8C()
{
  PRTL_DYNAMIC_HASH_TABLE *v0; // rcx
  unsigned int v1; // ebx

  v0 = (PRTL_DYNAMIC_HASH_TABLE *)off_140D3B088;
  v1 = 0;
  *(_QWORD *)off_140D3B088 = 0LL;
  *++v0 = 0LL;
  if ( !RtlCreateHashTable(v0, 0, 0) )
    return (unsigned int)-1073741801;
  return v1;
}
