/*
 * XREFs of ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001F330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001F180 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002F838 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CWindowList::ToggleAutoParenting(CWindowList *this, struct CWindowData *a2)
{
  CDesktopManager *v3; // rax
  int inserted; // eax
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  LONG v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = (struct tagPOINT)this;
  CVisual::RemoveSelfFromParent(*((CVisual **)a2 + 55));
  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)a2 + 670) ^= (*((_BYTE *)a2 + 670) ^ ~*((_BYTE *)a2 + 670)) & 8;
  inserted = CWindowList::InsertIntoVisualTree(*((CWindowList **)v3 + 52), a2);
  v5 = inserted;
  if ( inserted < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2252,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)inserted);
    return v5;
  }
  else
  {
    v6 = *((_QWORD *)a2 + 55);
    if ( (*((_BYTE *)a2 + 670) & 8) != 0 )
    {
      v7 = *((_QWORD *)a2 + 75);
      v11 = *(struct tagPOINT *)(v6 + 120);
      v11.x -= *(_DWORD *)(v7 + 48);
      v11.y -= *(_DWORD *)(v7 + 52);
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 249) & 1) != 0 )
      {
        v9 = -32000;
        v11.x = -32000;
      }
      else
      {
        v11.x = *((_DWORD *)a2 + 12);
        v9 = *((_DWORD *)a2 + 13);
      }
      v11.y = v9;
    }
    CVisual::SetOffset((CVisual *)v6, &v11);
    return 0LL;
  }
}
