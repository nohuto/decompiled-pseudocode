/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008108 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800343B4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180034730 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180048970 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180057A58 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18006D9F0 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800E77D4 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106A68 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800361DC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z @ 0x1800364C4 (-RemoveChild@CVisualProxy@@QEAAJPEAV1@@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18005660C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180056ED4 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D5C34 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char *v2; // rsi
  char v3; // r14
  char *v5; // r15
  char v6; // cl
  bool v7; // al
  __int64 v8; // rsi
  char v9; // al
  unsigned int v10; // ebp
  CProjectionBorderVisual *v11; // rcx
  CVisualProxy *v13; // rax
  int v14; // eax
  bool v15; // dl
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  v2 = (char *)this + 752;
  v3 = a2;
  if ( *((char *)this + 248) < 0 )
  {
    v3 = 1;
    goto LABEL_15;
  }
  v5 = (char *)this + 752;
  if ( (*(_BYTE *)(*(_QWORD *)v2 + 676LL) & 1) != 0 || (*((_BYTE *)this + 249) & 2) != 0 )
  {
    v3 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_15:
    v10 = CVisual::ConnectToParent(*((CVisual **)this + 34), 1);
LABEL_10:
    if ( (*((_BYTE *)this + 248) & 1) != 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 248) &= ~1u;
    }
    goto LABEL_12;
  }
LABEL_5:
  v6 = *(_BYTE *)(*(_QWORD *)v2 + 672LL);
  v7 = (v6 & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v2 + 676LL) & 1) == 0 && (v6 & 4) == 0;
  v8 = *((_QWORD *)this + 34);
  if ( !v7 )
  {
    v9 = *(_BYTE *)(v8 + 92);
    v10 = 0;
    if ( (v9 & 4) != 0 )
    {
      *(_BYTE *)(v8 + 92) = v9 & 0xFB;
      v13 = (CVisualProxy *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v8 + 24) + 40LL) + 72LL))(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 40LL));
      v14 = CVisualProxy::RemoveChild(v13, *(struct CVisualProxy **)(v8 + 16));
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x19Cu, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x3EFu, 0LL);
      }
    }
    v2 = v5;
    goto LABEL_10;
  }
  v10 = CVisual::ConnectToParent(*((CVisual **)this + 34), 1);
  if ( (*((_BYTE *)this + 248) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 248) |= 1u;
  }
  v2 = v5;
LABEL_12:
  v11 = *(CProjectionBorderVisual **)(*(_QWORD *)v2 + 464LL);
  if ( v11 )
  {
    v15 = v3 && (*((_BYTE *)this + 249) & 1) == 0;
    CProjectionBorderVisual::Show(v11, v15);
    v16 = *(_QWORD *)(*(_QWORD *)v2 + 464LL);
    v17 = *(_QWORD *)(v16 + 24);
    if ( v17 )
      VisualCollection::InsertRelative((VisualCollection *)(v17 + 32), v16, this, 1u, v18);
  }
  *((_BYTE *)this + 844) = 1;
  return v10;
}
