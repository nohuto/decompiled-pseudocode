/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCDisplayNode@@PEAV312@1@Z @ 0x140062E54
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140061CD8 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400136A8 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14004B99C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // rax
  int v8; // r8d
  _QWORD *i; // rdx
  __int64 *result; // rax
  __int64 v11; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40) - 1;
    for ( i = (_QWORD *)((char *)v7 + 16 * v8 + 8 * (unsigned int)v8 + 8); v8 >= 0; --v8 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
      i -= 3;
    }
  }
  result = *(__int64 **)(a1 + 32);
  v11 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v11;
  result[1] = 0LL;
  *result = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
