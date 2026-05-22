/*
 * XREFs of ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B3B50
 * Callers:
 *     ?UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z @ 0x18000F5C0 (-UpdateForegroundTarget@ForegroundManager@@AEAAX_KIII_N@Z.c)
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x18005EB90 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B4AB8 (-IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800B45F4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 */

bool __fastcall ForegroundManager::AreViewIdsInSameCompositeApp(
        ForegroundManager *this,
        struct ViewHierarchyWithWindowManager *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int TopLevelHostView; // ebx

  if ( a3 == a4 )
    return 1;
  if ( !a3 || !a4 )
    return 0;
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(a2, a3);
  return TopLevelHostView == ViewHierarchyWithWindowManager::GetTopLevelHostView(a2, a4);
}
