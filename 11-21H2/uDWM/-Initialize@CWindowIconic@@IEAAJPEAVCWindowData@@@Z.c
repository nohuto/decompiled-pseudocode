/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18004A8F4
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18004A6C4 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x1800265D0 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180038E48 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800391BC (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B2A0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004B430 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18004B4FC (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B578 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B5F4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B6D0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B728 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18004B7E8 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v4; // rax
  CWindowData *v5; // rax
  CTopLevelWindow **v6; // rsi
  int inserted; // eax
  unsigned int v8; // ebx
  struct CVisual **v9; // r15
  CTopLevelWindow *v10; // rcx
  __int64 v11; // rax
  char *v12; // r14
  unsigned int v14; // [rsp+20h] [rbp-38h]
  CWindowData *v15; // [rsp+60h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v4 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        840LL);
  v15 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( !v5 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x65u);
    return v8;
  }
  v6 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create((struct CTopLevelWindow **)this + 11);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 106;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v14);
    return v8;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 440LL) = *v6;
  if ( *v6 )
    _InterlockedIncrement((volatile signed __int32 *)*v6 + 2);
  v9 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 488LL) = this;
  v10 = *v6;
  v11 = *((_QWORD *)this + 10);
  *((_QWORD *)v10 + 94) = v11;
  *((_QWORD *)v10 + 95) = *(_QWORD *)(v11 + 40);
  *((_BYTE *)*v6 + 248) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 832LL) = *((_QWORD *)a2 + 104);
  *(_BYTE *)(*((_QWORD *)this + 10) + 665LL) |= 0x10u;
  inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 135;
    goto LABEL_28;
  }
  inserted = CImage::Create((struct CImage **)this + 12);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 136;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v9 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 137;
    goto LABEL_28;
  }
  v12 = (char *)this + 112;
  inserted = CVisual::Create((struct CVisual **)this + 14);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 138;
    goto LABEL_28;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v12 + 32LL), *v9, 0LL, 0, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 139;
    goto LABEL_28;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v15);
  inserted = CWindowIconic::SetRepresentationType(this, (unsigned int)v15, 0LL);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 147;
    goto LABEL_28;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 148;
    goto LABEL_28;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 149;
    goto LABEL_28;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 150;
    goto LABEL_28;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 151;
    goto LABEL_28;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 432LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 666LL) & 4) != 0,
                 0);
    v8 = inserted;
    if ( inserted < 0 )
    {
      v14 = 154;
      goto LABEL_28;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 156;
    goto LABEL_28;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 157;
    goto LABEL_28;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v14 = 158;
    goto LABEL_28;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v6, 1);
  return v8;
}
