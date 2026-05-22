/*
 * XREFs of ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801B98FC
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18001F480 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801C456C (-TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z.c)
 * Callees:
 *     ?GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800A1FBC (-GetTopLevelHostView@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1801740D0 (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 */

bool __fastcall ViewHelper::IsViewPartOfForegroundApplication(struct ViewHierarchyWithWindowManager *this, int a2)
{
  int ActiveViewInstanceId; // eax
  int TopLevelHostView; // ebx

  ActiveViewInstanceId = ViewHierarchyWithWindowManager::GetActiveViewInstanceId(this);
  TopLevelHostView = ViewHierarchyWithWindowManager::GetTopLevelHostView(this, ActiveViewInstanceId);
  return (unsigned int)ViewHierarchyWithWindowManager::GetTopLevelHostView(this, a2) == TopLevelHostView;
}
