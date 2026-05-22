/*
 * XREFs of ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801C702C
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180020500 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801D1DDC (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800B45F4 (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x180181EE0 (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 */

bool __fastcall ViewHelper::IsViewPartOfForegroundApplication(struct ViewHierarchyWithWindowManager *this, int a2)
{
  int ActiveViewInstanceId; // eax
  int TopLevelHostView; // ebx

  ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(this);
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(this, ActiveViewInstanceId);
  return (unsigned int)ViewHierarchyWithWindowManager::GetTopLevelHostView(this, a2) == TopLevelHostView;
}
