/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180039260
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x1800393FC (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180052D84 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800563C4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z @ 0x180037C8C (-GetDesktopReplacementVisualForDesktop@CWindowList@@QEAAPEAVCDesktopWindowReplacement@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(__int64 a1)
{
  struct CDesktopWindowReplacement *DesktopReplacementVisualForDesktop; // rbx
  __int64 v3; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54), a1) )
  {
    DesktopReplacementVisualForDesktop = CWindowList::GetDesktopReplacementVisualForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                           a1);
    CRenderDataVisual::ClearInstructions(DesktopReplacementVisualForDesktop);
    v3 = *((_QWORD *)DesktopReplacementVisualForDesktop + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), DesktopReplacementVisualForDesktop);
  }
}
