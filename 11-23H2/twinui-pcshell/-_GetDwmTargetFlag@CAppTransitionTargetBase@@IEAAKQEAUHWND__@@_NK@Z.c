/*
 * XREFs of ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x18059B4E4
 * Callers:
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059AD90 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18059B6C4 (-_PrepareTaggingForDelayedStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutO.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18059B904 (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppTransitionTargetBase::_GetDwmTargetFlag(
        CAppTransitionTargetBase *this,
        HWND a2,
        char a3,
        int a4)
{
  int v6; // edi
  unsigned int PropW; // eax
  int v8; // eax
  int v9; // edi

  v6 = 0x10000000;
  PropW = (unsigned int)GetPropW(a2, L"AppWindowTransitionType");
  if ( (PropW & 1) != 0 )
  {
    v8 = ~(PropW << 18) & 0x80000 | 0x10000000;
    v9 = v8 | 0x400000;
    if ( !a3 )
      v9 = v8;
    v6 = v9 | 0x8000000;
  }
  return v6 | a4 & 0xFFFFF000;
}
