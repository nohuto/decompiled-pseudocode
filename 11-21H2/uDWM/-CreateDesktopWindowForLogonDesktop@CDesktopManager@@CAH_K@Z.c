/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180018770
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001773C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180017900 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18005D210 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180018AA4 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180038E08 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(unsigned __int64 a1)
{
  __int64 Element; // rax
  struct CVisual *v3; // rdi
  unsigned int v4; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 8LL);
  if ( Element )
    v3 = *(struct CVisual **)(Element + 32);
  else
    v3 = 0LL;
  if ( !*((_DWORD *)v3 + 70) )
  {
    v4 = 0;
    if ( !CDesktopManager::IsLogonDesktop(a1) && CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
      v4 = CAccent::s_clrCurrentAccentBackground;
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(v3, v4) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                               a1);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)RootVisualForDesktop + 3) + 32LL),
        v3,
        RootVisualForDesktop,
        0,
        1);
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v3 + 64LL))(v3);
    }
  }
  return 1LL;
}
