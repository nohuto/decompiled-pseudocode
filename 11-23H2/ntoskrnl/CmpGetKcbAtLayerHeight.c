/*
 * XREFs of CmpGetKcbAtLayerHeight @ 0x1406D57A0
 * Callers:
 *     CmQueryLayeredKey @ 0x14035DC84 (CmQueryLayeredKey.c)
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x1406162CC (CmpLockKcbStackFlusherLocksExclusive.c)
 *     CmpUnlockKcbStackFlusherLocksExclusive @ 0x140616354 (CmpUnlockKcbStackFlusherLocksExclusive.c)
 *     CmpCreateTombstone @ 0x140616E4C (CmpCreateTombstone.c)
 *     CmRmIsKcbStackVisible @ 0x140680480 (CmRmIsKcbStackVisible.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x140693570 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmpIsKeyStackSymlink @ 0x1406D3200 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyStackDeleted @ 0x1406D3EAC (CmpIsKeyStackDeleted.c)
 *     CmpReportNotifyForKcbStack @ 0x1406D53B0 (CmpReportNotifyForKcbStack.c)
 *     CmpReportNotifyHelper @ 0x1406D5440 (CmpReportNotifyHelper.c)
 *     CmpLockKcbStackShared @ 0x1406D5638 (CmpLockKcbStackShared.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406D5680 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1406DD5C0 (CmpConstructNameFromKeyNodes.c)
 *     CmpWalkOneLevel @ 0x1406DD820 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14070FB48 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpLockKcbStackExclusive @ 0x1407107B8 (CmpLockKcbStackExclusive.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140A13EA0 (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmpEnumerateLayeredKey @ 0x140A16414 (CmpEnumerateLayeredKey.c)
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140A1FE9C (CmpPopulateKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20398 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140A239E8 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140A243E8 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25D00 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A263A0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140A265AC (CmpPromoteKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A268F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26A8C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetKcbAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * a2 - 16);
  else
    return *(_QWORD *)(a1 + 8LL * a2 + 8);
}
