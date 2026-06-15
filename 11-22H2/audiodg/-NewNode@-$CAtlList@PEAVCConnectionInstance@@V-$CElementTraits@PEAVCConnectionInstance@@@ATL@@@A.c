/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCConnectionInstance@@PEAV312@1@Z @ 0x1400240BC
 * Callers:
 *     ?AddTail@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCConnectionInstance@@@Z @ 0x140024084 (-AddTail@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@@A.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B9DC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v8; // rax
  int v9; // r8d
  _QWORD *i; // rdx
  __int64 *result; // rax
  __int64 v12; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v8 + 16 * v9 + 8 * (unsigned int)v9 + 8); v9 >= 0; --v9 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v12 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v12;
  result[1] = a3;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
