/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180009CF0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001FC80 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x1800176A4 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?RemoveSelfFromParent@CVisual@@QEAAJXZ @ 0x18001F180 (-RemoveSelfFromParent@CVisual@@QEAAJXZ.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001F1A0 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001F7F8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030A74 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // rcx
  struct CWindowData **v5; // rax
  char v6; // si
  __int64 v7; // rax
  char v8; // bp
  char v9; // bp
  CVisual *v10; // rcx
  CVisual *v11; // rcx
  __int64 v12; // rax
  __int64 Element; // rax
  struct CWindowData *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 280, &Buffer);
  v4 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_BYTE *)a2 + 664) & 4;
  if ( v6 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 312), &Buffer);
    *((_BYTE *)a2 + 664) &= ~4u;
  }
  v7 = *((_QWORD *)a2 + 55);
  if ( v7 )
    *(_BYTE *)(v7 + 248) &= ~0x80u;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = *((_BYTE *)a2 + 664);
  *((_BYTE *)a2 + 664) = v8 & 0xFE;
  v9 = v8 & 1;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 33) == 1 || !v6 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated(a2);
    }
  }
  v10 = (CVisual *)*((_QWORD *)a2 + 56);
  if ( v10 )
    CVisual::RemoveSelfFromParent(v10);
  v11 = (CVisual *)*((_QWORD *)a2 + 55);
  if ( v11 )
    CVisual::RemoveSelfFromParent(v11);
  *((_BYTE *)a2 + 665) &= ~0x20u;
  v12 = *((_QWORD *)a2 + 55);
  if ( v12 )
    *(_DWORD *)(v12 + 88) &= ~0x2000000u;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement((char *)this + 8);
  if ( Element )
    Element = *(_QWORD *)(Element + 64);
  if ( *((_QWORD *)a2 + 5) == Element )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 17));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
