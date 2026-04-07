/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18000A060 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18001A200 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800298A4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180097528 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        CAccentBlurBehind *this,
        const struct tagRECT *a2,
        __int64 a3,
        HWND a4)
{
  int inserted; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  _QWORD *v10; // r14
  HWND ShellWindowForDesktop; // r12
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  bool v13; // r9
  char v14; // cl
  struct _LIST_ENTRY *Blink; // rsi
  HWND v16; // rax
  struct _LIST_ENTRY *v17; // rdx
  CBaseObject *v18; // rbp
  struct _LIST_ENTRY **p_Blink; // r15
  HWND v20; // r8
  struct _LIST_ENTRY *v21; // rax
  CTopLevelWindow *v22; // rbp
  char v23; // dl
  bool v24; // cl
  bool v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  CTopLevelWindow *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  int v33; // r9d
  unsigned int v34; // eax
  int v35; // r9d
  unsigned int v36; // eax
  int v37; // r9d
  int v38; // r8d
  int v39; // eax
  CBaseObject *v40; // rsi
  int v41; // eax
  unsigned int v43; // [rsp+20h] [rbp-88h]
  char v44; // [rsp+30h] [rbp-78h]
  struct _LIST_ENTRY *v46; // [rsp+40h] [rbp-68h]
  CBaseObject *v47; // [rsp+48h] [rbp-60h] BYREF
  CBaseObject *v48; // [rsp+50h] [rbp-58h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-50h] BYREF

  v48 = 0LL;
  CVisual::SetInterpolationMode((unsigned int *)this, 1u);
  inserted = CRenderDataVisual::ClearInstructions(this);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1485;
    goto LABEL_3;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((struct CVisual **)this, a2);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1486;
    goto LABEL_3;
  }
  if ( !a4 )
    return v8;
  inserted = VisualCollection::RemoveAll((CAccentBlurBehind *)((char *)this + 32));
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1501;
    goto LABEL_3;
  }
  inserted = VisualCollection::InsertRelative(
               (CAccentBlurBehind *)((char *)this + 32),
               *((struct CVisual **)this + 47),
               0LL,
               0,
               1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1502;
    goto LABEL_3;
  }
  inserted = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 47));
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1503;
    goto LABEL_3;
  }
  inserted = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1504;
    goto LABEL_3;
  }
  v10 = (_QWORD *)((char *)this + 296);
  *((_DWORD *)this + 80) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 296, 8u);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 52));
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                              + 52));
  v14 = 0;
  v46 = WindowListForDesktop;
  v44 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    return v8;
  v16 = a4;
  v17 = v46;
  while ( 1 )
  {
    v18 = 0LL;
    p_Blink = &Blink[2].Blink;
    v20 = (HWND)Blink[2].Blink;
    v47 = 0LL;
    if ( v20 != v16 )
      break;
    v14 = 1;
    v44 = 1;
LABEL_57:
    Blink = Blink->Blink;
    if ( Blink == v17 )
      goto LABEL_87;
  }
  if ( !v14 )
    goto LABEL_57;
  if ( v20 != ShellWindowForDesktop )
  {
    v21 = Blink[37].Blink;
    if ( !v21 || (HWND)v21[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 80) >= 0xAu )
        goto LABEL_56;
      v22 = (CTopLevelWindow *)Blink[27].Blink;
      if ( !v22 )
        goto LABEL_56;
      v23 = (char)Blink[41].Blink;
      if ( (v23 & 1) == 0 )
        goto LABEL_55;
      v24 = 0;
      if ( (v23 & 4) == 0 )
        v24 = (BYTE4(Blink[41].Blink) & 1) == 0;
      if ( !v24 )
        goto LABEL_54;
      if ( (HIDWORD(Blink[7].Flink) & 0x20000000) != 0 )
        goto LABEL_54;
      if ( (BYTE6(Blink[41].Blink) & 8) != 0 )
        goto LABEL_54;
      if ( !v20 )
        goto LABEL_54;
      if ( v20 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 75) )
        goto LABEL_54;
      CTopLevelWindow::GetActualWindowRect(v22, &rcDst, 0, 1, 0);
      if ( !IntersectRect(&rcDst, &rcDst, a2) )
        goto LABEL_54;
      inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v22, 0, v25, v13, &v47);
      v8 = inserted;
      if ( inserted < 0 )
      {
        v43 = 1568;
      }
      else
      {
        v18 = v47;
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                     v47,
                     0LL,
                     1u,
                     1);
        v8 = inserted;
        if ( inserted >= 0 )
        {
          v26 = *((_DWORD *)this + 80);
          v27 = v26 + 1;
          if ( v26 + 1 < v26 )
          {
            v33 = -2147024362;
            v34 = 181;
            v8 = -2147024362;
          }
          else
          {
            if ( v27 <= *((_DWORD *)this + 79) )
            {
              v8 = 0;
              *(_QWORD *)(*v10 + 8LL * v26) = *p_Blink;
              *((_DWORD *)this + 80) = v27;
LABEL_52:
              if ( v18 )
                CBaseObject::Release(v18);
LABEL_54:
              v14 = v44;
LABEL_55:
              v17 = v46;
LABEL_56:
              v16 = a4;
              goto LABEL_57;
            }
            v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 296, 8u, 1, &Blink[2].Blink);
            v8 = v28;
            if ( v28 >= 0 )
              goto LABEL_52;
            v33 = v28;
            v34 = 192;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, v34);
          v43 = 1571;
LABEL_62:
          v9 = v8;
          goto LABEL_4;
        }
        v43 = 1570;
      }
LABEL_3:
      v9 = inserted;
LABEL_4:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v43);
      goto LABEL_88;
    }
  }
  v29 = (CTopLevelWindow *)Blink[27].Blink;
  if ( !v29 )
    goto LABEL_51;
  inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v29, 0, (bool)v20, v13, &v47);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1538;
    goto LABEL_3;
  }
  v18 = v47;
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 46) + 32LL), v47, 0LL, 1u, 1);
  v8 = inserted;
  if ( inserted < 0 )
  {
    v43 = 1540;
    goto LABEL_3;
  }
  v30 = *((_DWORD *)this + 80);
  v31 = v30 + 1;
  if ( v30 + 1 < v30 )
  {
    v35 = -2147024362;
    v36 = 181;
    v8 = -2147024362;
    goto LABEL_67;
  }
  if ( v31 > *((_DWORD *)this + 79) )
  {
    v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 296, 8u, 1, &Blink[2].Blink);
    v8 = v32;
    if ( v32 >= 0 )
      goto LABEL_49;
    v35 = v32;
    v36 = 192;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, v36);
    v43 = 1541;
    goto LABEL_62;
  }
  v17 = (struct _LIST_ENTRY *)v30;
  v8 = 0;
  *(_QWORD *)(*v10 + 8LL * v30) = *p_Blink;
  *((_DWORD *)this + 80) = v31;
LABEL_49:
  if ( v18 )
  {
    CBaseObject::Release(v18);
    v18 = 0LL;
  }
LABEL_51:
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
    goto LABEL_52;
  if ( ((__int64)Blink[41].Blink & 1) != 0 && (BYTE1(Blink[41].Blink) & 0x20) != 0 && *((_DWORD *)this + 80) )
  {
    inserted = (*(__int64 (__fastcall **)(_QWORD, struct _LIST_ENTRY *))(**((_QWORD **)this + 46) + 64LL))(
                 *((_QWORD *)this + 46),
                 v17);
    v8 = inserted;
    if ( inserted < 0 )
    {
      v43 = 1579;
      goto LABEL_3;
    }
    v37 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v37 = a2->bottom - a2->top;
    v38 = 0;
    if ( a2->right - a2->left >= 0 )
      v38 = a2->right - a2->left;
    inserted = ResourceHelper::CreateRectangleGeometry(0, 0, v38, v37, (struct CRectangleGeometryProxy **)this + 44);
    v8 = inserted;
    if ( inserted < 0 )
    {
      v43 = 1584;
      goto LABEL_3;
    }
    v39 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 43),
            *((struct CBaseGeometryProxy **)this + 44),
            &v48);
    v40 = v48;
    v8 = v39;
    if ( v39 >= 0 )
    {
      v41 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 47), v48);
      v8 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x638u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x636u);
    }
    if ( v40 )
      CBaseObject::Release(v40);
  }
LABEL_87:
  if ( (v8 & 0x80000000) != 0 )
  {
LABEL_88:
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
    *((_DWORD *)this + 80) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 296, 8u);
  }
  return v8;
}
