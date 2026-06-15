/*
 * XREFs of ?NewNode@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBUResourceHandleInfo@@PEAV312@1@Z @ 0x18010C620
 * Callers:
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x18010A3BC (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x18004B120 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0ResourceHandleInfo@@QEAA@AEBU0@@Z @ 0x1801099C4 (--0ResourceHandleInfo@@QEAA@AEBU0@@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::NewNode(
        __int64 a1,
        const struct ResourceHandleInfo *a2,
        __int64 a3,
        __int64 a4)
{
  struct ATL::CAtlPlex *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rbx
  _QWORD *result; // rax

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v7 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 24));
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
    v8 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v7 + 1264 * (unsigned int)(v8 - 1) + 8); --v8 >= 0; i -= 158 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
    }
  }
  v10 = *(_QWORD **)(a1 + 32);
  v11 = *v10;
  ResourceHandleInfo::ResourceHandleInfo((ResourceHandleInfo *)(v10 + 2), a2);
  *(_QWORD *)(a1 + 32) = v11;
  result = v10;
  v10[1] = 0LL;
  *v10 = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
