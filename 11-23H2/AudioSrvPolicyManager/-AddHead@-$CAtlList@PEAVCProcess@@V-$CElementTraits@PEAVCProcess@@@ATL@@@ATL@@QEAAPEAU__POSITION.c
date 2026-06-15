/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x180025870
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800033A0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180027A68 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCProcess@@PEAV312@1@Z @ 0x180027E78 (-NewNode@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@AEAAPEAVCNode@12@A.c)
 */

__int64 __fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::NewNode(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
