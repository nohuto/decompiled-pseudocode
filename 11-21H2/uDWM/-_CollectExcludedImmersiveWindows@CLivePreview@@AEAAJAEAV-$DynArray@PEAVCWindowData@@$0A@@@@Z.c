/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C33CC
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C2D14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800350F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18005F568 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C400C (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800EE360 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // rsi
  CWindowData *v7; // rcx
  int *v8; // rbp
  unsigned int v9; // r14d
  int Flink_high; // r15d
  bool ShouldCloneWindow; // al
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned int v14; // eax
  CWindowData *v16; // [rsp+70h] [rbp+8h] BYREF
  int v17; // [rsp+80h] [rbp+18h] BYREF
  int v18; // [rsp+84h] [rbp+1Ch]
  CWindowData **v19; // [rsp+88h] [rbp+20h] BYREF

  v17 = 10;
  v18 = 8;
  v4 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 52));
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return v4;
  while ( 2 )
  {
    v7 = (CWindowData *)Flink;
    v8 = &v17;
    v16 = (CWindowData *)Flink;
    v9 = 0;
    Flink_high = HIDWORD(Flink[8].Flink);
    while ( 1 )
    {
      if ( Flink_high == *v8 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v7 + 5));
        v7 = v16;
        if ( ShouldCloneWindow && CWindowData::IsWindowVisibleAndUncloaked(v16) )
          break;
      }
      ++v9;
      ++v8;
      if ( v9 >= 2 )
        goto LABEL_14;
    }
    if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v7) )
    {
      v12 = *(_DWORD *)(a2 + 24);
      v13 = v12 + 1;
      if ( v12 + 1 < v12 )
      {
        v4 = -2147024362;
        v14 = 181;
      }
      else
      {
        if ( v13 <= *(_DWORD *)(a2 + 20) )
        {
          v4 = 0;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * v12) = v16;
          *(_DWORD *)(a2 + 24) = v13;
          goto LABEL_14;
        }
        v19 = &v16;
        v4 = DynArrayImpl<0>::Grow((char **)a2, 8u, 1, 0, (unsigned __int64 *)&v19);
        if ( (v4 & 0x80000000) == 0 )
        {
          *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a2 + 24))++) + *(_QWORD *)a2) = *v19;
          goto LABEL_14;
        }
        v14 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v14);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2DAu);
      return v4;
    }
LABEL_14:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return v4;
  }
}
