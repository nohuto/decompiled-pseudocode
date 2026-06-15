/*
 * XREFs of ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000D8F8
 * Callers:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14000D8B0 (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000DC74 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 *     ??0CConnectionNode@@QEAA@AEAV0@@Z @ 0x14000E594 (--0CConnectionNode@@QEAA@AEAV0@@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z @ 0x14000E748 (-FreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXPEAVCNode@12@@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessingData::CopyEndpointList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 *v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  __int64 v8; // rax
  struct CConnectionNode *v9; // rsi
  void *v10; // rax
  CConnectionNode *v11; // rax
  CConnectionNode *v12; // [rsp+58h] [rbp+10h] BYREF
  CConnectionNode *v13; // [rsp+68h] [rbp+20h]

  while ( *(_QWORD *)(a2 + 16) )
  {
    v6 = *(__int64 **)a2;
    if ( !*(_QWORD *)a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (void (__fastcall ***)(_QWORD, __int64))v6[2];
    v8 = *v6;
    *(_QWORD *)a2 = *v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      *(_QWORD *)(a2 + 8) = 0LL;
    ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(a2);
    if ( v7 )
      (**v7)(v7, 1LL);
  }
  v5 = *(_QWORD *)(a3 + 8);
  while ( v5 )
  {
    v9 = *(struct CConnectionNode **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    v10 = AERTGetDLLRTHeap();
    v11 = (CConnectionNode *)AERTAllocate(0xA8uLL, v10);
    v13 = v11;
    if ( v11 )
      v11 = CConnectionNode::CConnectionNode(v11, v9);
    v12 = v11;
    if ( v11 )
      ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::AddHead(a2, &v12);
  }
}
