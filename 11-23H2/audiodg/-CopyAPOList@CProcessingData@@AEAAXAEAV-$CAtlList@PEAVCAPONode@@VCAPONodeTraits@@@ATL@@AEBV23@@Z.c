/*
 * XREFs of ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x140012544
 * Callers:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14000D8B0 (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ @ 0x1400126B8 (-RemoveHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAPEAVCAPONode@@XZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CAPONode@@QEAA@AEAV0@@Z @ 0x14001279C (--0CAPONode@@QEAA@AEAV0@@Z.c)
 *     ??1CAPONode@@UEAA@XZ @ 0x1400128A4 (--1CAPONode@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400129A0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CProcessingData::CopyAPOList(__int64 a1, struct ATL::CAtlPlex **a2, __int64 a3)
{
  CAPONode *v5; // rax
  CAPONode *v6; // rdi
  void *v7; // rax
  __int64 v8; // rsi
  struct CAPONode *v9; // rdi
  void *v10; // rax
  CAPONode *v11; // rax
  CAPONode *v12; // rdi
  struct ATL::CAtlPlex *v13; // r14
  __int64 *v14; // rcx
  struct ATL::CAtlPlex *v15; // rax
  struct ATL::CAtlPlex *v16; // rax
  int v17; // r8d
  struct ATL::CAtlPlex *i; // rdx

  while ( a2[2] )
  {
    v5 = (CAPONode *)ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveHead(a2);
    v6 = v5;
    if ( v5 )
    {
      CAPONode::~CAPONode(v5);
      v7 = AERTGetDLLRTHeap();
      AERTFree(v6, v7);
    }
  }
  v8 = *(_QWORD *)(a3 + 8);
  while ( v8 )
  {
    v9 = *(struct CAPONode **)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    v10 = AERTGetDLLRTHeap();
    v11 = (CAPONode *)AERTAllocate(0x158uLL, v10);
    if ( v11 )
      v12 = CAPONode::CAPONode(v11, v9);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = *a2;
      if ( !a2[4] )
      {
        v16 = ATL::CAtlPlex::Create(a2 + 3, *((unsigned int *)a2 + 10), 0x18uLL);
        if ( !v16 )
          ATL::AtlThrowImpl(-2147024882);
        v17 = *((_DWORD *)a2 + 10) - 1;
        for ( i = (struct ATL::CAtlPlex *)((char *)v16 + 16 * v17 + 8 * (unsigned int)v17 + 8); v17 >= 0; --v17 )
        {
          *(_QWORD *)i = a2[4];
          a2[4] = i;
          i = (struct ATL::CAtlPlex *)((char *)i - 24);
        }
      }
      v14 = (__int64 *)a2[4];
      v15 = (struct ATL::CAtlPlex *)*v14;
      v14[2] = (__int64)v12;
      a2[4] = v15;
      v14[1] = 0LL;
      *v14 = (__int64)v13;
      a2[2] = (struct ATL::CAtlPlex *)((char *)a2[2] + 1);
      if ( *a2 )
        *((_QWORD *)*a2 + 1) = v14;
      else
        a2[1] = (struct ATL::CAtlPlex *)v14;
      *a2 = (struct ATL::CAtlPlex *)v14;
    }
  }
}
