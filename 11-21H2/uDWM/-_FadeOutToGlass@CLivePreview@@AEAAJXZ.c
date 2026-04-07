/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C1F14 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180017084 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001E184 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800C2430 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800C29DC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x1800C41C0 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x1800C58C8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E5F88 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v5; // r8
  struct CVisual *v6; // r8
  VisualCollection *v7; // rdi
  int inserted; // eax
  struct CVisual *v9; // r8
  __int64 v10; // rdx
  int v11; // eax
  bool v12; // r8
  bool v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // eax
  bool v19; // zf
  CBaseObject *v20; // r15
  int v21; // eax
  int v22; // eax
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  bool v24; // r8
  struct _LIST_ENTRY *v25; // r9
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Blink; // rcx
  char v28; // r13
  unsigned int Flink; // r12d
  int v30; // eax
  CBaseObject *v31; // r15
  int v32; // eax
  char v33; // bl
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // eax
  unsigned int v37; // edx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int128 v43; // [rsp+30h] [rbp-30h] BYREF
  __int128 v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h]
  unsigned int v46; // [rsp+58h] [rbp-8h]
  CBaseObject *v47; // [rsp+A8h] [rbp+48h] BYREF
  struct _LIST_ENTRY *v48; // [rsp+B0h] [rbp+50h]

  v2 = CLivePreview::_HideExistingVisuals(this, 1);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x5D3u);
    return v3;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 63) + 72LL) )
    goto LABEL_69;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                           *((_QWORD *)this + 37));
  v5 = *((_QWORD *)this + 69);
  if ( v5 )
    v6 = *(struct CVisual **)(v5 + 440);
  else
    v6 = 0LL;
  v7 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               this,
               v6,
               0,
               1);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    v9 = this;
    v10 = *(_QWORD *)(*((_QWORD *)this + 70) + 48LL);
    if ( v10 )
      v9 = *(struct CVisual **)(v10 + 440);
    v11 = VisualCollection::InsertRelative(v7, *((struct CVisual **)this + 62), v9, 1u, 1);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5DEu);
      return v3;
    }
    v14 = *((_DWORD *)this + 84) - 1;
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = 40LL * v14;
      do
      {
        v17 = *(_QWORD *)(v16 + *((_QWORD *)this + 39));
        if ( (*(_BYTE *)(v17 + 667) & 1) == 0 && (*(_BYTE *)(v17 + 670) & 1) == 0 )
        {
          v47 = 0LL;
          v18 = CTopLevelWindow::CloneVisualTreeForLivePreview(*(CTopLevelWindow **)(v17 + 440), 0, v12, v13, &v47);
          v3 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x5E8u);
            return v3;
          }
          v19 = *(_DWORD *)(v17 + 132) == 1;
          v20 = v47;
          if ( v19 )
          {
            v21 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v47, 0LL, 0, 1);
            v3 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x5ECu);
              return v3;
            }
          }
          else
          {
            v22 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v47, 0LL, 0, 1);
            v3 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x5F0u);
              return v3;
            }
          }
          *(_QWORD *)(*((_QWORD *)this + 39) + v16 + 8) = v20;
        }
        v16 -= 40LL;
        --v15;
      }
      while ( v15 >= 0 );
    }
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 52));
    v48 = WindowListForDesktop;
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Blink = (CTopLevelWindow *)i[27].Blink;
      if ( Blink && HIDWORD(i[8].Flink) == 12 )
      {
        v28 = 0;
        Flink = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[11].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          Flink = (unsigned int)i[11].Flink;
          LODWORD(i[11].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Blink);
          v28 = 1;
          Blink = (CTopLevelWindow *)i[27].Blink;
        }
        v47 = 0LL;
        v30 = CTopLevelWindow::CloneVisualTreeForLivePreview(Blink, 0, v24, (bool)v25, &v47);
        v3 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x60Du);
          goto LABEL_63;
        }
        v31 = v47;
        if ( v47 && !*((_QWORD *)v47 + 94) )
        {
          *((_QWORD *)v47 + 94) = i;
          *((_QWORD *)v31 + 95) = i[2].Blink;
        }
        if ( v28 )
        {
          LODWORD(i[11].Flink) = Flink;
          CTopLevelWindow::OnAccentPolicyUpdated((CTopLevelWindow *)i[27].Blink);
        }
        v32 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), v31, 0LL, 0, 1);
        v3 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x61Au);
          goto LABEL_63;
        }
        if ( (BYTE4(i[41].Blink) & 1) != 0 )
        {
          v33 = 0;
          CTopLevelWindow::SetLivePreviewAlpha(v31, 0.0);
        }
        else
        {
          v33 = 1;
        }
        *(_QWORD *)&v43 = v31;
        BYTE8(v43) = v33;
        v34 = *((unsigned int *)this + 108);
        v35 = v34 + 1;
        if ( (int)v34 + 1 >= (unsigned int)v34 )
        {
          if ( v35 > *((_DWORD *)this + 107) )
          {
            v36 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 408, 0x10u, 1, &v43);
            if ( v36 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*((_QWORD *)this + 51) + 16 * v34) = v43;
            *((_DWORD *)this + 108) = v35;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v25 = i + 3;
        v37 = v46 + 1;
        if ( v46 + 1 >= v46 )
        {
          if ( v37 > HIDWORD(v45) )
          {
            v38 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v44, 0x10u, 1, v25);
            if ( v38 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0xC0u);
          }
          else
          {
            *(struct _LIST_ENTRY *)(v44 + 16LL * v46) = *v25;
            v46 = v37;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        if ( v31 )
          CBaseObject::Release(v31);
        WindowListForDesktop = v48;
      }
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v44);
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 62) + 32LL),
      *((struct CVisual **)this + 64),
      0LL,
      0,
      1);
    v39 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 65) + 64LL))(*((_QWORD *)this + 65));
    v3 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x62Cu);
LABEL_63:
      DynArrayImpl<0>::~DynArrayImpl<0>(&v44);
      return v3;
    }
    v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 64) + 64LL))(*((_QWORD *)this + 64));
    v3 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x62Du);
      goto LABEL_63;
    }
    v41 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 64LL))(*((_QWORD *)this + 63));
    v3 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x62Eu);
      goto LABEL_63;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v44);
LABEL_69:
    *((_DWORD *)this + 148) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 59));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5D8u);
  return v3;
}
