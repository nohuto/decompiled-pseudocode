/*
 * XREFs of MiFreePartitionTree @ 0x14065A3E8
 * Callers:
 *     MiInsertPartitionPages @ 0x14065A9D0 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A445CC (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140A44F50 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140288350 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MiDeletePartitionPageNode @ 0x140659918 (MiDeletePartitionPageNode.c)
 *     MiFreePartitionNodePages @ 0x14065A1C0 (MiFreePartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionTree(__int16 *a1, unsigned __int64 *a2, int a3, int a4)
{
  unsigned __int64 *v4; // rdi
  bool v5; // bl
  int v6; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  v4 = (unsigned __int64 *)*a2;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    if ( !v4 )
      return (unsigned int)v6;
    RtlAvlRemoveNode(a2, v4);
    if ( a4 )
    {
      v6 = MiFreePartitionNodePages(a1, (__int64)v4, a3);
      if ( v6 < 0 )
        break;
    }
    MiDeletePartitionPageNode((PVOID *)v4);
    v4 = (unsigned __int64 *)*a2;
  }
  v11 = (_QWORD *)*a2;
  if ( !*a2 )
    goto LABEL_14;
  while ( (v4[3] & 0x3FFFFFFFFFFFFFFFLL) < (v11[3] & 0x3FFFFFFFFFFFFFFFuLL) )
  {
    v12 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_14;
LABEL_12:
    v11 = v12;
  }
  v12 = (_QWORD *)v11[1];
  if ( v12 )
    goto LABEL_12;
  v5 = 1;
LABEL_14:
  RtlAvlInsertNodeEx(a2, (unsigned __int64)v11, v5, (unsigned __int64)v4);
  return (unsigned int)v6;
}
