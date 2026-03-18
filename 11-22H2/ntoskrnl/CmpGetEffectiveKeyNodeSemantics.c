/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140A1FDA0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140616604 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140616830 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14061733C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140A1BA14 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21188 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140A23748 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A23964 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A25438 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKeyNodeSemantics(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x80000) != 0 )
    return *(_BYTE *)(a2 + 13) & 3;
  else
    return 0LL;
}
