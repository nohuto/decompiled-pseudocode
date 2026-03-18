/*
 * XREFs of ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x180098AEC
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800985A8 (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180098A40 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ @ 0x180098A80 (-FreeBatchPool@CInternalMilCmdConnection@@AEAAXXZ.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1801B534C (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::FreeBlocks(CDataStreamWriter *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx

  Flink = a2->Flink;
  while ( Flink != a2 )
  {
    v4 = Flink;
    Flink = Flink->Flink;
    operator delete(v4);
  }
}
