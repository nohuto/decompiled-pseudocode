/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1407D1C5C
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x140A0B990 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A1B6D8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A23510 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140A240D4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A242EC (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A2585C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25D00 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A268F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26A8C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A26BB0 (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1406E029C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 4;
  v3 = 2LL;
  do
  {
    *(_OWORD *)(v2 - 3) = 0LL;
    *(_OWORD *)(v2 - 1) = 0LL;
    *((_DWORD *)v2 - 4) = -1;
    result = HvpGetCellContextReinitialize(v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
