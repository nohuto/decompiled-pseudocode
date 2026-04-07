/*
 * XREFs of ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180048B6C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x18001F964 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E78D8 (-StartMinimizeAnimationForDisplayChange@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002AD84 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnZOrderUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // edx
  __int64 v5; // rdx
  struct CVisual *v6; // rdi
  _QWORD *Element; // rax
  __int64 v8; // rcx
  int inserted; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 || (v4 = *((_DWORD *)this + 96), (unsigned int)(v4 - 1) <= 1) || (unsigned int)(v4 - 4) <= 0xE )
  {
    v5 = *((_QWORD *)this + 42);
    v6 = *(struct CVisual **)(v5 + 440);
    if ( *((_QWORD *)v6 + 3) )
    {
      if ( (*(_BYTE *)(v5 + 678) & 0x10) != 0 )
        v6 = *(struct CVisual **)(*(_QWORD *)(v5 + 600) + 440LL);
      Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                  (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54) + 8LL),
                  *(_QWORD *)(v5 + 136));
      if ( Element )
        v8 = Element[3];
      else
        v8 = 0LL;
      inserted = VisualCollection::InsertRelative((VisualCollection *)(v8 + 32), (unsigned __int64)this, v6, 1u, v11);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x2ADu, 0LL);
    }
  }
  return v2;
}
