/*
 * XREFs of ?NewNode@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@PEAV312@1@Z @ 0x140013798
 * Callers:
 *     ?AddHead@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@AEBQEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@2@@Z @ 0x140013764 (-AddHead@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIns.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 v8; // rdx
  struct ATL::CAtlPlex *v9; // rax
  int v10; // r8d
  _QWORD *i; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v9 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v9 )
      ATL::AtlThrowImpl(-2147024882);
    v10 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v9 + 16 * v10 + 8 * (unsigned int)v10 + 8); v10 >= 0; --v10 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v8 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v8;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
