/*
 * XREFs of HvAllocateCell @ 0x14070A3C8
 * Callers:
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140708568 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x14070946C (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x140709AB4 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140709F38 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x14070B704 (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CF18 (CmpSetSecurityDescriptorInfo.c)
 *     HvDuplicateCell @ 0x1407D74D0 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1407DDCB0 (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1407E5A14 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x14087448C (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140A16304 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x140A20F0C (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A210D8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140A24A2C (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28CF0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A293A0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140B374E4 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14070A440 (HvpDoAllocateCell.c)
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
