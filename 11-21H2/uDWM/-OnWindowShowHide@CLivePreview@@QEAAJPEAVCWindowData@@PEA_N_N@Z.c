/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180023C58
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006983A (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x1800AD8E8 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x1800C2474 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x1800C262C (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42AC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800C42E4 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x1800C4D74 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800E43A4 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // r15d
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r14
  CLivePreview *v11; // rcx
  CTopLevelWindow *v12; // r15
  bool IsTrulyMaximized; // r12
  int v14; // eax
  struct CVisual *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  struct CVisual *v19; // rdx
  int v20; // eax
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rdx
  int v23; // eax
  CBaseObject *v24; // rcx
  __int64 v25; // rcx
  char *v26; // r12
  int v27; // eax
  bool v28; // r8
  bool v29; // r9
  char v30; // dl
  char v31; // cl
  unsigned int v32; // eax
  int v33; // eax
  struct CVisual *v34; // r15
  int v35; // eax
  int v36; // eax
  int v37; // eax
  struct CVisual *v38; // rsi
  int v39; // eax
  int inserted; // eax
  __int64 v41; // r15
  _QWORD *v42; // r12
  __int64 v43; // rdx
  CTopLevelWindow *v44; // rbx
  int v45; // eax
  CBaseObject *v46; // rcx
  int v47; // eax
  __int64 v48; // r13
  __int64 *v49; // r12
  __int64 v50; // rcx
  struct CVisual *v51; // rdx
  int v52; // eax
  struct CVisual *v53; // rdx
  int v54; // eax
  CBaseObject *v55; // rcx
  CTopLevelWindow *v56; // rcx
  int v57; // eax
  int v58; // r15d
  __int64 v59; // r12
  __int64 v60; // r8
  struct CWindowData **v61; // r13
  unsigned int v62; // ecx
  unsigned int i; // r9d
  __int64 v64; // rax
  __int64 v65; // rcx
  int updated; // eax
  char v67; // [rsp+30h] [rbp-D0h]
  struct CVisual *v68; // [rsp+38h] [rbp-C8h] BYREF
  CTopLevelWindow *v69; // [rsp+40h] [rbp-C0h]
  bool *v70; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v71; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+58h] [rbp-A8h]
  bool v73; // [rsp+68h] [rbp-98h]
  struct CVisual *v74; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 92);
  v5 = 0;
  v6 = *((_DWORD *)this + 84);
  v70 = a3;
  LODWORD(v68) = v6;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v67 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v41 = (unsigned int)(v4 - 1);
    if ( (int)v41 >= 0 )
    {
      v42 = (_QWORD *)((char *)this + 344);
      v43 = *((_QWORD *)this + 43);
      while ( *(struct CWindowData **)(v43 + 48 * v41 + 8) != a2 )
      {
        v41 = (unsigned int)(v41 - 1);
        if ( (int)v41 < 0 )
          goto LABEL_71;
      }
      v44 = *(CTopLevelWindow **)(v43 + 48 * v41);
      CTopLevelWindow::StopLivePreviewAnimation(v44);
      v45 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v44 + 3) + 32LL), v44);
      v5 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v45, 0x744u);
        return v5;
      }
      v46 = *(CBaseObject **)(*v42 + 48 * v41 + 16);
      if ( v46 )
      {
        CBaseObject::Release(v46);
        *(_QWORD *)(*v42 + 48 * v41 + 16) = 0LL;
      }
      v47 = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 344, (unsigned int)v41);
      v5 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x747u);
        return v5;
      }
      v6 = (int)v68;
    }
LABEL_71:
    v48 = (unsigned int)(v6 - 1);
    if ( (int)v48 >= 0 )
    {
      v49 = (__int64 *)((char *)this + 312);
      v50 = *((_QWORD *)this + 39);
      while ( *(struct CWindowData **)(v50 + 40 * v48) != a2 )
      {
        v48 = (unsigned int)(v48 - 1);
        if ( (int)v48 < 0 )
          goto LABEL_91;
      }
      v51 = *(struct CVisual **)(v50 + 40 * v48 + 8);
      if ( v51 )
      {
        v52 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v51 + 3) + 32LL), v51);
        v5 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x753u);
          return v5;
        }
        v50 = *v49;
        if ( *(_QWORD *)(*v49 + 40 * v48 + 8) )
        {
          CBaseObject::Release(*(CBaseObject **)(*v49 + 40 * v48 + 8));
          *(_QWORD *)(*v49 + 40 * v48 + 8) = 0LL;
          v50 = *((_QWORD *)this + 39);
        }
      }
      v53 = *(struct CVisual **)(v50 + 40 * v48 + 16);
      if ( v53 )
      {
        v54 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v53 + 3) + 32LL), v53);
        v5 = v54;
        if ( v54 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0x759u);
          return v5;
        }
        v55 = *(CBaseObject **)(*v49 + 40 * v48 + 16);
        if ( v55 )
        {
          CBaseObject::Release(v55);
          *(_QWORD *)(*v49 + 40 * v48 + 16) = 0LL;
        }
      }
      v56 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
      if ( v56 )
        CTopLevelWindow::StopLivePreviewAnimation(v56);
      v57 = DynArray<CPenContact,0>::RemoveAt((char *)this + 312, (unsigned int)v48);
      v5 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0x762u);
        return v5;
      }
      v67 = 1;
    }
LABEL_91:
    v58 = *((_DWORD *)this + 108) - 1;
    if ( v58 >= 0 )
    {
      v59 = 16LL * v58;
      do
      {
        v60 = *((_QWORD *)this + 51);
        v61 = *(struct CWindowData ***)(v59 + v60);
        if ( v61[94] == a2 )
        {
          v62 = *((_DWORD *)this + 108);
          if ( v58 < v62 )
          {
            for ( i = v58; i < v62 - 1; v62 = *((_DWORD *)this + 108) )
            {
              v64 = 2LL * i;
              v65 = 2LL * ++i;
              *(_OWORD *)(v60 + 8 * v64) = *(_OWORD *)(v60 + 8 * v65);
            }
            *((_DWORD *)this + 108) = v62 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x194u);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), (struct CVisual *)v61);
        }
        v59 -= 16LL;
        --v58;
      }
      while ( v58 >= 0 );
    }
    v10 = 0;
    if ( !v67 )
      goto LABEL_103;
    goto LABEL_102;
  }
  if ( *((_BYTE *)this + 288)
    && !CLivePreview::_IsInLivePreview(this, a2)
    && (!GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) || (unsigned int)_o__wcsicmp(ClassName, aSysshadow_0)) )
  {
    v69 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
    v12 = v69;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    v14 = CVisual::RenderRecursive(v69);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x784u);
      return v5;
    }
    v10 = 1;
    v68 = (struct CVisual *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    v15 = v68;
    if ( IsTrulyMaximized )
    {
      v16 = 0LL;
      if ( v6 > 0 )
      {
        v17 = *((_QWORD *)this + 39);
        while ( !*(_BYTE *)(v17 + 40 * v16 + 24) || *(struct CVisual **)(v17 + 40 * v16 + 32) != v68 )
        {
          v16 = (unsigned int)(v16 + 1);
          if ( (int)v16 >= v6 )
            goto LABEL_30;
        }
        v18 = 5 * v16;
        v19 = *(struct CVisual **)(v17 + 40 * v16 + 8);
        if ( v19 )
        {
          v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v19);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x791u);
            return v5;
          }
          v17 = *((_QWORD *)this + 39);
          v21 = *(CBaseObject **)(v17 + 8 * v18 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v18 + 8) = 0LL;
            v17 = *((_QWORD *)this + 39);
          }
        }
        v22 = *(struct CVisual **)(v17 + 8 * v18 + 16);
        if ( v22 )
        {
          v23 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 65) + 32LL), v22);
          v5 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x797u);
            return v5;
          }
          v17 = *((_QWORD *)this + 39);
          v24 = *(CBaseObject **)(v17 + 8 * v18 + 16);
          if ( v24 )
          {
            CBaseObject::Release(v24);
            *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v18 + 16) = 0LL;
            v17 = *((_QWORD *)this + 39);
          }
        }
        v15 = v68;
        *(_BYTE *)(*(_QWORD *)(v17 + 8 * v18) + 667LL) |= 1u;
        v25 = *(_QWORD *)(*((_QWORD *)this + 39) + 8 * v18);
        v12 = v69;
        *(_BYTE *)(v25 + 666) |= 0x80u;
      }
    }
LABEL_30:
    v73 = IsTrulyMaximized;
    v71 = a2;
    v26 = (char *)this + 312;
    v74 = v15;
    v72 = 0LL;
    v27 = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 312, &v71);
    v5 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x7A4u);
      return v5;
    }
    v30 = *((_BYTE *)a2 + 666);
    if ( *((_DWORD *)this + 144) < 0x1Eu )
    {
      v31 = v30 & 0x7F | (*((_QWORD *)a2 + 53) != 0LL ? 0x80 : 0);
      *((_BYTE *)a2 + 666) = v31;
      v32 = *((_DWORD *)this + 145);
      if ( v32 >= 0xA )
      {
        *((_BYTE *)a2 + 667) |= 1u;
      }
      else
      {
        *((_DWORD *)this + 145) = v32 + 1;
        v31 = *((_BYTE *)a2 + 666);
      }
      if ( v31 >= 0 )
      {
        if ( (*((_BYTE *)a2 + 667) & 1) != 0 )
        {
LABEL_47:
          if ( v31 >= 0 )
          {
            v68 = 0LL;
            v37 = CTopLevelWindow::CloneVisualTreeForLivePreview(v69, 1, v28, v29, &v68);
            v5 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0x7C4u);
              return v5;
            }
            v38 = v68;
            v39 = CVisual::RenderRecursive(v68);
            v5 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x7C5u);
              return v5;
            }
            inserted = VisualCollection::InsertRelative(
                         (VisualCollection *)(*((_QWORD *)this + 65) + 32LL),
                         v38,
                         0LL,
                         0,
                         1);
            v5 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x7C6u);
              return v5;
            }
            *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v38;
          }
          ++*((_DWORD *)this + 144);
          goto LABEL_102;
        }
      }
      else if ( (*((_BYTE *)a2 + 667) & 1) != 0 )
      {
LABEL_102:
        updated = CLivePreview::_UpdateResources(this);
        v5 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x7DAu);
          return v5;
        }
        goto LABEL_103;
      }
      v68 = 0LL;
      v33 = CTopLevelWindow::CloneVisualTreeForLivePreview(v12, 0, v28, v29, &v68);
      v5 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x7BAu);
        return v5;
      }
      v34 = v68;
      v35 = CVisual::RenderRecursive(v68);
      v5 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x7BBu);
        return v5;
      }
      v36 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v34, 0LL, 0, 1);
      v5 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x7BCu);
        return v5;
      }
      *(_QWORD *)(*(_QWORD *)v26 + 8LL) = v34;
      v31 = *((_BYTE *)a2 + 666);
      goto LABEL_47;
    }
    *((_BYTE *)a2 + 667) |= 1u;
    *((_BYTE *)a2 + 666) = v30 | 0x80;
  }
LABEL_103:
  if ( v70 )
    *v70 = v10;
  return v5;
}
