/*
 * XREFs of ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180004094 (-InsertAt@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x1800129D8 (-ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAIIAEBQEAVCWindowData@@@Z @ 0x18001D4CC (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAIIAEBQEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001E120 (-GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18001EB10 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18001F274 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180023170 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002F838 (-InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18003595C (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180063470 (-ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097BAC (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800CB1E0 (-ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 *     ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180103CE0 (-GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowList::ZOrder(struct CVisual **this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  CProjectedShadowScene *v6; // r14
  int v7; // ebx
  struct CWindowData *v8; // rsi
  CProjectedShadowScene *v9; // rax
  CWindowData *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  struct _RTL_GENERIC_TABLE *v13; // rbx
  char *v14; // rax
  CWindowData *v15; // r12
  struct CWindowData *v16; // rsi
  int v17; // ebx
  CProjectedShadowScene *v18; // rax
  CWindowData *v19; // rax
  int v20; // eax
  CWindowData *v21; // rdx
  CWindowData **v22; // rcx
  CWindowData *v23; // rax
  CWindowList *v24; // rcx
  int v25; // eax
  CWindowData *v26; // rsi
  char v27; // di
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  const struct _LIST_ENTRY *v31; // rax
  const struct _LIST_ENTRY *v32; // r15
  CWindowData *v33; // rbx
  __int64 v34; // rax
  char ShouldBeAutoParented; // al
  CWindowList *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // r12
  int v40; // eax
  unsigned int v41; // r15d
  struct CVisual *v42; // rax
  struct CWindowData *v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rbx
  CAccentBlurBehind *v46; // rcx
  struct CVisual *v47; // rdx
  int inserted; // eax
  struct CVisual *v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  int ProjectedShadowSceneForDesktop; // eax
  CProjectedShadowScene *v53; // rbx
  __int64 v54; // rbx
  struct _LIST_ENTRY *WindowListForDesktopCanFail; // rax
  CProjectedShadowScene *v56; // rcx
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 *v59; // rcx
  struct _RTL_CRITICAL_SECTION *v61; // [rsp+30h] [rbp-49h] BYREF
  struct _RTL_CRITICAL_SECTION *v62; // [rsp+38h] [rbp-41h] BYREF
  __int64 Buffer; // [rsp+40h] [rbp-39h] BYREF
  __int64 v64; // [rsp+48h] [rbp-31h]
  __int128 v65; // [rsp+50h] [rbp-29h]
  __int128 v66; // [rsp+60h] [rbp-19h]
  __int128 v67; // [rsp+70h] [rbp-9h]
  __int64 v68; // [rsp+80h] [rbp+7h]
  char v69; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  CWindowData *v71; // [rsp+E8h] [rbp+6Fh] BYREF
  CProjectedShadowScene *v72; // [rsp+F8h] [rbp+7Fh] BYREF

  v62 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  v71 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
  {
    v9 = (CProjectedShadowScene *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                                    WPF::g_pProcessHeap,
                                    840LL);
    v72 = v9;
    if ( !v9 || (v10 = CWindowData::CWindowData(v9), (v8 = v10) == 0LL) )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
      goto LABEL_8;
    }
    *((_QWORD *)v10 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
    *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    v7 = CWindowList::SyncWindowData((CWindowList *)this, a2, v8);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x824u);
LABEL_8:
      v11 = v7;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xDD8u);
      goto LABEL_102;
    }
  }
  v71 = v8;
  v11 = v7;
  if ( !v8 )
  {
    v11 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xDDAu);
    goto LABEL_102;
  }
  v12 = *((_QWORD *)v8 + 17);
  v13 = (struct _RTL_GENERIC_TABLE *)(this + 1);
  v64 = 0LL;
  v65 = 0LL;
  v68 = -1LL;
  v69 = 0;
  v66 = 0LL;
  v67 = 0LL;
  Buffer = v12;
  v14 = (char *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(this + 1), &Buffer);
  if ( !v14 || (v15 = (CWindowData *)(v14 + 80), v14 == (char *)-80LL) )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xDDDu);
    goto LABEL_102;
  }
  v16 = (struct CWindowData *)(v14 + 80);
  if ( a3 )
  {
    v17 = 0;
    v16 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( !v16 && (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 16LL))(a3) )
    {
      v18 = (CProjectedShadowScene *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                       WPF::g_pProcessHeap,
                                       840LL);
      v72 = v18;
      if ( !v18 || (v19 = CWindowData::CWindowData(v18), (v16 = v19) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x820u);
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xDE5u);
        goto LABEL_102;
      }
      *((_QWORD *)v19 + 3) = a3;
      (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v19);
      *((_QWORD *)v16 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
      v20 = CWindowList::SyncWindowData((CWindowList *)this, a3, v16);
      v17 = v20;
      v11 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x824u);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xDE5u);
        goto LABEL_102;
      }
    }
    v11 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xDE5u);
      goto LABEL_102;
    }
    if ( !v16 )
    {
      v11 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0xDE8u);
      goto LABEL_102;
    }
    v13 = (struct _RTL_GENERIC_TABLE *)(this + 1);
  }
  if ( v71 == *(CWindowData **)v16 )
    goto LABEL_102;
  v21 = *(CWindowData **)v71;
  v22 = (CWindowData **)*((_QWORD *)v71 + 1);
  if ( *(CWindowData **)(*(_QWORD *)v71 + 8LL) != v71
    || *v22 != v71
    || (*v22 = v21,
        *((_QWORD *)v21 + 1) = v22,
        v23 = v71,
        v24 = *(CWindowList **)v16,
        *(struct CWindowData **)(*(_QWORD *)v16 + 8LL) != v16) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v71 = v24;
  *((_QWORD *)v23 + 1) = v16;
  *((_QWORD *)v24 + 1) = v23;
  *(_QWORD *)v16 = v23;
  if ( v21 )
  {
    if ( v21 != v15 )
    {
      v25 = CWindowList::ReevaluateAutoParenting((CWindowList *)this, v21, 0);
      v11 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xDF6u);
        goto LABEL_102;
      }
    }
  }
  v26 = v71;
  if ( !*((_QWORD *)v71 + 55) )
  {
LABEL_88:
    v54 = *((_QWORD *)v26 + 75);
    if ( v54 && *(_DWORD *)(v54 + 632) > 1u )
    {
      v72 = 0LL;
      WindowListForDesktopCanFail = CWindowList::GetWindowListForDesktopCanFail(
                                      (CWindowList *)this,
                                      *((_QWORD *)v26 + 17));
      if ( WindowListForDesktopCanFail )
      {
        v56 = *(CProjectedShadowScene **)v71;
        if ( *(struct _LIST_ENTRY **)v71 != WindowListForDesktopCanFail )
        {
          while ( *((_QWORD *)v56 + 75) != v54 )
          {
            v56 = *(CProjectedShadowScene **)v56;
            if ( v56 == (CProjectedShadowScene *)WindowListForDesktopCanFail )
              goto LABEL_96;
          }
          v6 = v56;
          v72 = v56;
        }
      }
LABEL_96:
      if ( v6 )
      {
        DynArray<CWindowData *,0>::Remove(v54 + 608, &v71);
        v58 = DynArray<CWindowData *,0>::Find(v54 + 608, v57, (__int64 *)&v72);
        DynArray<CWindowData *,0>::InsertAt(v59, &v71, v58);
      }
      else if ( *(CWindowData **)(*(_QWORD *)(v54 + 608) + 8LL * (unsigned int)(*(_DWORD *)(v54 + 632) - 1)) != v71 )
      {
        DynArray<CWindowData *,0>::Remove(v54 + 608, &v71);
        DynArray<CWindowData *,0>::AddMultipleAndSet(v54 + 608, &v71);
      }
    }
    goto LABEL_102;
  }
  v27 = 1;
  if ( *(CWindowData **)v71 == v71 )
  {
    if ( (*((_BYTE *)v71 + 670) & 8) != 0 )
    {
      v28 = CWindowList::ToggleAutoParenting(v24, v71);
      v11 = v28;
      if ( v28 < 0 )
      {
        v29 = 8740LL;
        goto LABEL_58;
      }
LABEL_54:
      v26 = v71;
    }
    v37 = *((_QWORD *)v26 + 17);
    v64 = 0LL;
    v65 = 0LL;
    v68 = -1LL;
    v69 = 0;
    v66 = 0LL;
    v67 = 0LL;
    Buffer = v37;
    v38 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(this + 1), &Buffer);
    if ( v38 )
      v39 = v38[3];
    else
      v39 = 0LL;
    v40 = CTopLevelWindow3D::OnZOrderUpdated(*((CTopLevelWindow3D **)v71 + 56), 0);
    v11 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0xE01u);
      goto LABEL_102;
    }
    v26 = v71;
    v41 = 0;
    if ( *((_DWORD *)this + 154) )
    {
      do
      {
        v42 = this[74];
        if ( *((_DWORD *)v42 + 4 * v41 + 2) == 3 )
        {
          v43 = (struct CWindowData *)*((_QWORD *)v42 + 2 * v41);
          v44 = *((_QWORD *)v43 + 55);
          if ( v44 )
          {
            if ( !v26 || *((_QWORD *)v43 + 17) == *((_QWORD *)v26 + 17) )
            {
              v45 = *(_QWORD *)(v44 + 280);
              if ( v45 )
              {
                v46 = *(CAccentBlurBehind **)(v45 + 344);
                if ( v46 )
                {
                  if ( *((_QWORD *)v43 + 5) == *(_QWORD *)(v45 + 408)
                    || CAccentBlurBehind::IsBlurBehindDirty(
                         v46,
                         v43,
                         (const struct tagRECT *)(v45 + 624),
                         *(_QWORD *)(v45 + 416),
                         *(HWND *)(v45 + 408)) )
                  {
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 24LL))(v45, 0x10000LL);
                  }
                }
              }
            }
          }
        }
        ++v41;
      }
      while ( v41 < *((_DWORD *)this + 154) );
      v26 = v71;
    }
    if ( (*((_BYTE *)v26 + 669) & 0x10) != 0 )
    {
      v47 = this[70];
      if ( v47 )
      {
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(v39 + 32),
                     v47,
                     *((struct CVisual **)v26 + 55),
                     0,
                     1);
        v11 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xE07u);
          goto LABEL_102;
        }
        v26 = v71;
      }
    }
    v49 = (struct CVisual *)*((_QWORD *)v26 + 58);
    if ( v49 )
    {
      v50 = VisualCollection::InsertRelative((VisualCollection *)(v39 + 32), v49, *((struct CVisual **)v26 + 55), 1, 1);
      v11 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0xE0Du);
        goto LABEL_102;
      }
      v26 = v71;
    }
    v51 = *((_QWORD *)v26 + 55);
    if ( v51 && (*(_BYTE *)(v51 + 249) & 0x20) != 0 )
    {
      v72 = 0LL;
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v72);
      ProjectedShadowSceneForDesktop = CWindowList::GetProjectedShadowSceneForDesktop(
                                         (CWindowList *)this,
                                         *((_QWORD *)v71 + 17),
                                         0,
                                         &v72);
      v11 = ProjectedShadowSceneForDesktop;
      if ( ProjectedShadowSceneForDesktop < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ProjectedShadowSceneForDesktop, 0xE14u);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v72);
        goto LABEL_102;
      }
      v53 = v72;
      v61 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(v53);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v61);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v72);
      v26 = v71;
    }
    goto LABEL_88;
  }
  v30 = *((_QWORD *)v71 + 17);
  v64 = 0LL;
  v65 = 0LL;
  v68 = -1LL;
  v69 = 0;
  v66 = 0LL;
  v67 = 0LL;
  Buffer = v30;
  v31 = (const struct _LIST_ENTRY *)RtlLookupElementGenericTable(v13, &Buffer);
  v32 = v31 + 5;
  if ( !v31 )
    v32 = 0LL;
  v33 = v26;
  while ( 1 )
  {
    if ( !v27 )
    {
      if ( (*((_BYTE *)v33 + 664) & 1) == 0 )
        goto LABEL_51;
      v34 = *((_QWORD *)v33 + 55);
      if ( !v34 || !*(_QWORD *)(v34 + 24) )
        goto LABEL_51;
    }
    ShouldBeAutoParented = CWindowData::ShouldBeAutoParented(v33, v32);
    v36 = (CWindowList *)*((unsigned __int8 *)v33 + 670);
    LOBYTE(v36) = ((unsigned __int8)v36 & 8) != 0;
    if ( ShouldBeAutoParented == (_BYTE)v36 )
      break;
    v28 = CWindowList::ToggleAutoParenting(v36, v33);
    v11 = v28;
    if ( v28 < 0 )
    {
      v29 = 8756LL;
      goto LABEL_58;
    }
LABEL_51:
    v27 = 0;
    v33 = *(CWindowData **)v33;
    if ( !v33 || v33 == (CWindowData *)v32 || v33 == v26 )
      goto LABEL_54;
  }
  if ( !v27 )
    goto LABEL_54;
  v28 = CWindowList::InsertIntoVisualTree((CWindowList *)this, v33);
  v11 = v28;
  if ( v28 >= 0 )
    goto LABEL_51;
  v29 = 8763LL;
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v28);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xDFDu);
LABEL_102:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v62);
  return v11;
}
