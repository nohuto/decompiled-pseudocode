/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1800BBB24
 * Callers:
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1800BB528 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800BB664 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?GetCommandBatch@CChannel@@UEAAXPEAPEAXPEA_N@Z @ 0x1801CF5F0 (-GetCommandBatch@CChannel@@UEAAXPEAPEAXPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // rax
  CDataStreamWriter **v2; // rdx

  v1 = (CDataStreamWriter *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    if ( *v2 != this )
      __fastfail(3u);
    *(_QWORD *)v1 = this;
    *((_QWORD *)v1 + 1) = v2;
    *v2 = v1;
    *((_QWORD *)this + 1) = v1;
    *((_QWORD *)this + 4) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
