/*
 * XREFs of HvAllocateCell @ 0x14070A5D8
 * Callers:
 *     CmpCreateTombstone @ 0x14061739C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140708778 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x14070967C (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x140709CC4 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x14070A148 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x14070B914 (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070D128 (CmpSetSecurityDescriptorInfo.c)
 *     HvDuplicateCell @ 0x1407D77A0 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1407DDF80 (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1407E5CE4 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x1408746CC (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140A165B4 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x140A211BC (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21388 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140A24CDC (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28FA0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140B374E4 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14070A650 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // r10d
  unsigned int i; // edx
  __int64 result; // rax

  v6 = (a2 + 11) & 0xFFFFFFF8;
  v8 = 0;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 3221225626LL;
  result = HvpDoAllocateCell(a1, a5, a6);
  if ( (int)result >= 0 )
  {
    *a4 = 0;
    return 0LL;
  }
  return result;
}
