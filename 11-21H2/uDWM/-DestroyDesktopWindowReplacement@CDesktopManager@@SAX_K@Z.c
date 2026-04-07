/*
 * XREFs of ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18001795C
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001773C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180017900 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18005D210 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

void __fastcall CDesktopManager::DestroyDesktopWindowReplacement(unsigned __int64 a1)
{
  __int64 Element; // rax
  CRenderDataVisual *v2; // rbx
  __int64 v3; // rcx

  if ( CWindowList::GetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52), a1) )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 8LL);
    if ( Element )
      v2 = *(CRenderDataVisual **)(Element + 32);
    else
      v2 = 0LL;
    CRenderDataVisual::ClearInstructions(v2);
    v3 = *((_QWORD *)v2 + 3);
    if ( v3 )
      VisualCollection::Remove((VisualCollection *)(v3 + 32), v2);
  }
}
