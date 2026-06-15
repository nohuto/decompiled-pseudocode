/*
 * XREFs of ?AddHead@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCSubmixImpl@@@Z @ 0x140009C64
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x140009CA0 (-NewNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNod.c)
 */

__int64 __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::AddHead(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(a1, a2, a3, SubmixList);
  if ( SubmixList )
    *(_QWORD *)(SubmixList + 8) = result;
  else
    qword_1400C0978 = result;
  SubmixList = result;
  return result;
}
