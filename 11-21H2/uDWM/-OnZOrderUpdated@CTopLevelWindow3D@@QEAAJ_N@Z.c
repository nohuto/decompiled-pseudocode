/*
 * XREFs of ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001EB10
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6C6C (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnZOrderUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  __int64 v6; // rdx
  struct CVisual *v7; // rdi
  __int64 Element; // rax
  __int64 v9; // rcx
  int inserted; // eax

  v2 = 0;
  if ( a2 || (v4 = *((_DWORD *)this + 96), (unsigned int)(v4 - 1) <= 1) || (unsigned int)(v4 - 4) <= 0xB )
  {
    v6 = *((_QWORD *)this + 42);
    v7 = *(struct CVisual **)(v6 + 440);
    if ( *((_QWORD *)v7 + 3) )
    {
      if ( (*(_BYTE *)(v6 + 670) & 8) != 0 )
        v7 = *(struct CVisual **)(*(_QWORD *)(v6 + 600) + 440LL);
      Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 52) + 8LL);
      if ( Element )
        v9 = *(_QWORD *)(Element + 24);
      else
        v9 = 0LL;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(v9 + 32), this, v7, 1, 1);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x2DEu);
    }
  }
  return v2;
}
