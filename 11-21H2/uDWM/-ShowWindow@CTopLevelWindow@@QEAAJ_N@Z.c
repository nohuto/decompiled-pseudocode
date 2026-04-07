/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180012904 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E740 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035B2C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180069E32 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E6BC8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180010F7C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x1800112D0 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800276EC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097BAC (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D07B4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // di
  __int64 v4; // rax
  char v5; // dl
  bool v6; // al
  CVisual *v7; // rcx
  bool v8; // dl
  unsigned int v9; // r14d
  __int64 v10; // rsi
  CProjectionBorderVisual *v11; // rcx
  CDesktopManager *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // rdx
  bool v17; // dl
  struct CVisual *v18; // rdx
  __int64 v19; // rcx
  struct CWindowData *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  CAccentBlurBehind *v23; // rcx

  v2 = a2;
  if ( *((char *)this + 248) < 0 )
  {
    v2 = 1;
    goto LABEL_23;
  }
  v4 = *((_QWORD *)this + 94);
  if ( (*(_BYTE *)(v4 + 668) & 1) != 0 || (*((_BYTE *)this + 249) & 2) != 0 )
  {
    v2 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_23:
    v7 = (CVisual *)*((_QWORD *)this + 33);
    v8 = 1;
LABEL_9:
    v9 = CVisual::ConnectToParent(v7, v8);
    if ( (*((_BYTE *)this + 248) & 1) != 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 248) &= ~1u;
    }
    goto LABEL_11;
  }
LABEL_5:
  v5 = *(_BYTE *)(v4 + 664);
  v6 = (v5 & 1) != 0 && (*(_BYTE *)(v4 + 668) & 1) == 0 && (v5 & 4) == 0;
  v7 = (CVisual *)*((_QWORD *)this + 33);
  if ( !v6 )
  {
    v8 = 0;
    goto LABEL_9;
  }
  v9 = CVisual::ConnectToParent(v7, 1);
  if ( (*((_BYTE *)this + 248) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 248) |= 1u;
  }
LABEL_11:
  v10 = *((_QWORD *)this + 94);
  v11 = *(CProjectionBorderVisual **)(v10 + 464);
  if ( v11 )
  {
    v17 = v2 && (*((_BYTE *)this + 249) & 1) == 0;
    CProjectionBorderVisual::Show(v11, v17);
    v10 = *((_QWORD *)this + 94);
    v18 = *(struct CVisual **)(v10 + 464);
    v19 = *((_QWORD *)v18 + 3);
    if ( v19 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(v19 + 32), v18, this, 1, 1);
      v10 = *((_QWORD *)this + 94);
    }
  }
  v12 = CDesktopManager::s_pDesktopManagerInstance;
  v13 = 0;
  *((_BYTE *)this + 865) = 1;
  v14 = *((_QWORD *)v12 + 52);
  if ( *(_DWORD *)(v14 + 616) )
  {
    do
    {
      v15 = *(_QWORD *)(v14 + 592);
      if ( *(_DWORD *)(v15 + 16LL * v13 + 8) == 3 )
      {
        v20 = *(struct CWindowData **)(v15 + 16LL * v13);
        v21 = *((_QWORD *)v20 + 55);
        if ( v21 )
        {
          if ( !v10 || *((_QWORD *)v20 + 17) == *(_QWORD *)(v10 + 136) )
          {
            v22 = *(_QWORD *)(v21 + 280);
            if ( v22 )
            {
              v23 = *(CAccentBlurBehind **)(v22 + 344);
              if ( v23 )
              {
                if ( *((_QWORD *)v20 + 5) == *(_QWORD *)(v22 + 408)
                  || CAccentBlurBehind::IsBlurBehindDirty(
                       v23,
                       v20,
                       (const struct tagRECT *)(v22 + 624),
                       *(_QWORD *)(v22 + 416),
                       *(HWND *)(v22 + 408)) )
                {
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 0x10000LL);
                }
              }
            }
          }
        }
      }
      ++v13;
    }
    while ( v13 < *(_DWORD *)(v14 + 616) );
  }
  return v9;
}
