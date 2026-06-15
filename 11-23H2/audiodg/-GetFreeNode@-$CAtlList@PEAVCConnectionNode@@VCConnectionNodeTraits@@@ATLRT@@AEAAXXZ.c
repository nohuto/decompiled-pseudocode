/*
 * XREFs of ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14001101C
 * Callers:
 *     ?NewNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEAVCConnectionNode@@PEAV312@1@Z @ 0x14000DCAC (-NewNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEA.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x140010F90 (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  void *v4; // rax
  _QWORD *v5; // rax
  int v6; // r8d
  _QWORD *i; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v2 = 24LL * *(unsigned int *)(a1 + 40);
    if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 0x18uLL)
      || (v3 = v2 + 8, v2 + 8 < v2)
      || (v4 = AERTGetDLLRTHeap(), (v5 = AERTAllocate(v3, v4)) == 0LL) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    *v5 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v5;
    v6 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = &v5[2 * v6 + 1 + (unsigned int)v6]; v6 >= 0; --v6 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
}
