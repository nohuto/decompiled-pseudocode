/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800301F4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800360BC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x1800D028C (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D5C34 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x1800D5CE0 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x1801058A8 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B9F8 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2, char a3)
{
  unsigned int v6; // edi
  unsigned __int64 *v7; // r14
  CVisual *v8; // rcx
  int v10; // eax
  int v11; // eax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (unsigned __int64 *)((char *)a2 + 464);
  v8 = (CVisual *)*((_QWORD *)a2 + 58);
  if ( a3 )
  {
    if ( v8 || (v10 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)a2 + 58), v6 = v10, v10 >= 0) )
    {
      if ( (*((_BYTE *)a2 + 678) & 0x10) != 0 )
      {
        v11 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1F5Au, 0LL);
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
                     1u,
                     v15);
        v6 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1F5Eu, 0LL);
          goto LABEL_3;
        }
      }
      CProjectionBorderVisual::Show((CProjectionBorderVisual *)*v7, (*((_BYTE *)a2 + 676) & 1) == 0);
      CProjectionBorderVisual::UpdateRectFromWindow((CProjectionBorderVisual *)*v7, a2);
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1F52u, 0LL);
  }
  else if ( v8 )
  {
    CVisual::RemoveSelfFromParent(v8);
    if ( *v7 )
    {
      CBaseObject::Release((CBaseObject *)*v7);
      *v7 = 0LL;
    }
    v14 = CWindowList::ReevaluateAutoParenting(this, a2, 0);
    v6 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1F6Au, 0LL);
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
