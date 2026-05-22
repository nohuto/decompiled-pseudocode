/*
 * XREFs of ?TryActivate@ActivationProcessor@@QEAA_NUActivationInformation@@@Z @ 0x1801A61CC
 * Callers:
 *     ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x180140E44 (-ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAV.c)
 *     ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801A6070 (-OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespo.c)
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z @ 0x18008BDE8 (-SetForegroundActivatableEntity@ForegroundManager@@QEAAJ_K@Z.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18019AEDC (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 */

bool __fastcall ActivationProcessor::TryActivate(__int64 a1, int *a2)
{
  int v2; // edi
  bool v3; // al
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  bool v6; // di
  struct ViewHierarchyWithWindowManager *v7; // rax
  unsigned __int64 WindowIdFromViewId; // rbx
  ForegroundManager *ForegroundManager; // rax

  v2 = a2[2];
  v3 = 1;
  if ( (v2 & 1) != 0 )
  {
    v3 = 0;
  }
  else if ( (v2 & 2) != 0 )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v3 = !ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, *a2);
  }
  v6 = (v2 & 4) != 0;
  if ( v3 )
  {
    v7 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(v7, *a2);
    ForegroundManager = ISMStatics::GetForegroundManager();
    ForegroundManager::SetForegroundActivatableEntity(ForegroundManager, WindowIdFromViewId);
  }
  return v6;
}
