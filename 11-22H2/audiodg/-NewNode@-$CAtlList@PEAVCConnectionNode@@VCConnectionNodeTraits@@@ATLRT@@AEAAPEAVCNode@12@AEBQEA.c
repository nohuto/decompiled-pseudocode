/*
 * XREFs of ?NewNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAPEAVCNode@12@AEBQEAVCConnectionNode@@PEAV312@1@Z @ 0x14000DCAC
 * Callers:
 *     ?AddHead@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEBQEAVCConnectionNode@@@Z @ 0x14000DC74 (-AddHead@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAPEAU__POSITION@@AEB.c)
 * Callees:
 *     ?GetFreeNode@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ @ 0x14001101C (-GetFreeNode@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEAAXXZ.c)
 */

__int64 *__fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::NewNode(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *result; // rax
  __int64 v9; // r10

  ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::GetFreeNode();
  result = *(__int64 **)(a1 + 32);
  v9 = *result;
  result[2] = *a2;
  *(_QWORD *)(a1 + 32) = v9;
  *result = a4;
  result[1] = a3;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
