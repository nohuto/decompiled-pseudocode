/*
 * XREFs of CmpGetEffectiveKeyNodeSemantics @ 0x140A1FCF0
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140616594 (CmpGetValueCountForKeyNodeStack.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1406167C0 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1406172CC (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x140A1B964 (CmpGetSecurityCellForKeyNodeStack.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A210D8 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140A23698 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A238B4 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A25388 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
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
