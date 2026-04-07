/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18000F014
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800CFFBC (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001F180 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800CBB3C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D07B4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D0860 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2, char a3)
{
  unsigned int v6; // edi
  struct CVisual **v7; // rsi
  CVisual *v8; // rcx
  int v10; // eax
  int v11; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  int v14; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (struct CVisual **)((char *)a2 + 464);
  v8 = (CVisual *)*((_QWORD *)a2 + 58);
  if ( a3 )
  {
    if ( v8 || (v10 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)a2 + 58), v6 = v10, v10 >= 0) )
    {
      if ( (*((_BYTE *)a2 + 670) & 8) != 0 )
      {
        v11 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x1F02u);
          goto LABEL_3;
        }
      }
      else
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 17));
        inserted = VisualCollection::InsertRelative(
                     (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                     *v7,
                     *((struct CVisual **)a2 + 55),
                     1,
                     1);
        v6 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1F06u);
          goto LABEL_3;
        }
      }
      CProjectionBorderVisual::Show(*v7, (*((_BYTE *)a2 + 668) & 1) == 0);
      CProjectionBorderVisual::UpdateRectFromWindow(*v7, a2);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x1EFAu);
  }
  else if ( v8 )
  {
    CVisual::RemoveSelfFromParent(v8);
    if ( *v7 )
    {
      CBaseObject::Release(*v7);
      *v7 = 0LL;
    }
    v14 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1F12u);
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
