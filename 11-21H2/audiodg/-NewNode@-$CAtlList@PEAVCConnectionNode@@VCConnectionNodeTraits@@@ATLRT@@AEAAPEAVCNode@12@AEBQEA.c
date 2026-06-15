/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEAVCConnectionNode@@PEAV312@1@Z @ 0x14000A488
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000A450 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 * Callees:
 *     ?Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011838 (-Create@CAtlPlex@ATLRT@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 *__fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::NewNode(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  struct ATLRT::CAtlPlex *v8; // r9
  int v9; // edx
  _QWORD *i; // rcx
  __int64 *result; // rax
  __int64 v12; // rdx

  if ( !*(_QWORD *)(a1 + 32) )
  {
    v8 = ATLRT::CAtlPlex::Create((struct ATLRT::CAtlPlex **)(a1 + 24), *(unsigned int *)(a1 + 40), a3);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 40);
    for ( i = (_QWORD *)((char *)v8 + 16 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8); --v9 >= 0; i -= 3 )
    {
      *i = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = i;
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
