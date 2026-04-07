/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800087E0 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180018A58 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x180034840 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4 (-GetWindowColorizationColor@CTopLevelWindow@@AEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x1800364B4 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x1800E1218 (-GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(
        CTopLevelWindow *this,
        const struct CTopLevelWindow::WindowFrame *a2)
{
  int v2; // eax
  struct CVisual **v3; // rbp
  struct CVisual *v4; // r8
  int v5; // ebx
  unsigned int v8; // esi
  int v9; // eax
  struct CVisual **v10; // r14
  struct CVisual *v11; // r8
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  struct CVisual **v15; // r15
  struct CVisual *v16; // r8
  int v17; // eax
  int v18; // ebx
  struct CVisual **v19; // r12
  struct CVisual *v20; // r8
  int v21; // ebx
  CSystemBackdropVisual *v22; // rcx
  __int64 v23; // rax
  unsigned int CurrentBaseColor; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  bool v28; // r8
  int v29; // edx
  float v30; // xmm6_4
  char *v31; // rbx
  CButton *v32; // rcx
  const struct CBitmapSourceArray *v33; // r8
  __int64 v34; // rax
  int v35; // eax
  const struct CBitmapSourceArray *v36; // r8
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v41; // rdx
  int v42; // eax
  int SystemMetricsForDpi; // r10d
  unsigned int i; // edx
  bool v45; // cl
  char v46; // dl
  bool v47; // cl
  char v48; // dl
  bool v49; // cl
  char v50; // dl
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int inserted; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  bool v59; // cl
  char v60; // dl
  int v61; // eax
  char v62; // dl
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct CVisual *v67; // rcx
  const struct CBitmapSourceArray *v68; // r8
  int v69; // eax
  const struct CBitmapSourceArray *v70; // r8
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  struct CVisual *v74; // rcx
  int v75; // eax
  int v76; // [rsp+80h] [rbp+8h]
  __int64 v77; // [rsp+90h] [rbp+18h]

  v2 = *((_DWORD *)this + 152);
  v3 = (struct CVisual **)((char *)this + 512);
  v4 = (struct CVisual *)*((_QWORD *)this + 64);
  v5 = 0;
  if ( (v2 & 0x100) != 0 )
  {
    if ( !v4 )
    {
      v53 = CButton::Create((struct CButton **)this + 64);
      v5 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0xABCu);
        v8 = v5;
        goto LABEL_85;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *v3, 0LL, 0, 1);
      v5 = inserted;
      v8 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0xABEu);
        goto LABEL_85;
      }
      *((_DWORD *)*v3 + 50) = 8;
      v4 = *v3;
      v2 = *((_DWORD *)this + 152);
    }
    v47 = (v2 & 0x1000) != 0;
    v48 = *((_BYTE *)v4 + 288);
    if ( (v48 & 1) != v47 )
    {
      *((_BYTE *)v4 + 288) = v47 | v48 & 0xFE;
      CVisual::SetDirtyFlags(v4, 0x8000);
    }
LABEL_3:
    v8 = v5;
    if ( v5 >= 0 )
      goto LABEL_4;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x9E7u);
    return v8;
  }
  if ( !v4 )
    goto LABEL_3;
  v63 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), v4);
  v5 = v63;
  v8 = v63;
  if ( v63 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0xAC9u);
    goto LABEL_85;
  }
  if ( !*v3 )
    goto LABEL_3;
  CBaseObject::Release(*v3);
  *v3 = 0LL;
LABEL_4:
  v9 = *((_DWORD *)this + 152);
  v10 = (struct CVisual **)((char *)this + 520);
  v11 = (struct CVisual *)*((_QWORD *)this + 65);
  v12 = 0;
  if ( (v9 & 0x200) != 0 )
  {
    if ( !v11 )
    {
      v55 = CButton::Create((struct CButton **)this + 65);
      v12 = v55;
      v8 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0xABCu);
        goto LABEL_92;
      }
      v56 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *v10, 0LL, 0, 1);
      v12 = v56;
      v8 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v56, 0xABEu);
        goto LABEL_92;
      }
      *((_DWORD *)*v10 + 50) = 9;
      v11 = *v10;
      v9 = *((_DWORD *)this + 152);
    }
    v49 = (v9 & 0x2000) != 0;
    v50 = *((_BYTE *)v11 + 288);
    if ( (v50 & 1) != v49 )
    {
      *((_BYTE *)v11 + 288) = v49 | v50 & 0xFE;
      CVisual::SetDirtyFlags(v11, 0x8000);
    }
LABEL_6:
    v8 = v12;
    if ( v12 >= 0 )
      goto LABEL_7;
LABEL_92:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x9E8u);
    return v8;
  }
  if ( !v11 )
    goto LABEL_6;
  v64 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *((struct CVisual **)this + 65));
  v12 = v64;
  v8 = v64;
  if ( v64 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0xAC9u);
    goto LABEL_92;
  }
  if ( !*v10 )
    goto LABEL_6;
  CBaseObject::Release(*v10);
  *v10 = 0LL;
LABEL_7:
  v13 = *((_DWORD *)this + 152);
  v14 = 0;
  v15 = (struct CVisual **)((char *)this + 528);
  v16 = (struct CVisual *)*((_QWORD *)this + 66);
  if ( (v13 & 0x400) != 0 )
  {
    if ( !v16 )
    {
      v51 = CButton::Create((struct CButton **)this + 66);
      v14 = v51;
      v8 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0xABCu);
        goto LABEL_100;
      }
      v52 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *v15, 0LL, 0, 1);
      v14 = v52;
      v8 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0xABEu);
        goto LABEL_100;
      }
      *((_DWORD *)*v15 + 50) = 20;
      v16 = *v15;
      v13 = *((_DWORD *)this + 152);
    }
    v45 = (v13 & 0x4000) != 0;
    v46 = *((_BYTE *)v16 + 288);
    if ( (v46 & 1) != v45 )
    {
      *((_BYTE *)v16 + 288) = v45 | v46 & 0xFE;
      CVisual::SetDirtyFlags(v16, 0x8000);
    }
LABEL_9:
    v8 = v14;
    if ( v14 >= 0 )
      goto LABEL_10;
LABEL_100:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x9E9u);
    return v8;
  }
  if ( !v16 )
    goto LABEL_9;
  v65 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *((struct CVisual **)this + 66));
  v14 = v65;
  v8 = v65;
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0xAC9u);
    goto LABEL_100;
  }
  if ( !*v15 )
    goto LABEL_9;
  CBaseObject::Release(*v15);
  *v15 = 0LL;
LABEL_10:
  v17 = *((_DWORD *)this + 152);
  v18 = 0;
  v19 = (struct CVisual **)((char *)this + 504);
  v20 = (struct CVisual *)*((_QWORD *)this + 63);
  if ( (v17 & 0x800) != 0 )
  {
    if ( !v20 )
    {
      v57 = CButton::Create((struct CButton **)this + 63);
      v18 = v57;
      v8 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0xABCu);
        goto LABEL_107;
      }
      v58 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *v19, 0LL, 0, 1);
      v18 = v58;
      v8 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0xABEu);
        goto LABEL_107;
      }
      *((_DWORD *)*v19 + 50) = 21;
      v20 = *v19;
      v17 = *((_DWORD *)this + 152);
    }
    v59 = (v17 & 0x8000) != 0;
    v60 = *((_BYTE *)v20 + 288);
    if ( (v60 & 1) != v59 )
    {
      *((_BYTE *)v20 + 288) = v59 | v60 & 0xFE;
      CVisual::SetDirtyFlags(v20, 0x8000);
    }
  }
  else if ( v20 )
  {
    v66 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 36) + 32LL), *((struct CVisual **)this + 63));
    v18 = v66;
    v8 = v66;
    if ( v66 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v66, 0xAC9u);
      goto LABEL_107;
    }
    if ( *v19 )
    {
      CBaseObject::Release(*v19);
      *v19 = 0LL;
      goto LABEL_13;
    }
  }
  v8 = v18;
  if ( v18 < 0 )
  {
LABEL_107:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x9EAu);
    return v8;
  }
LABEL_13:
  v21 = 2;
  if ( *((_DWORD *)this + 178) == -1 )
  {
    v41 = *((_QWORD *)this + 94);
    v42 = *(_DWORD *)(v41 + 348);
    if ( v42 >= 192 )
    {
      *((_DWORD *)this + 178) = 3;
    }
    else if ( v42 >= 144 )
    {
      *((_DWORD *)this + 178) = 2;
    }
    else
    {
      *((_DWORD *)this + 178) = v42 >= 120;
    }
    v77 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v76 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(v41 + 348));
    if ( v76 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 178) + v77 + 200) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 178) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 178) = i )
      {
        if ( v76 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v77 + 520) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( !a2 )
    return v8;
  v22 = (CSystemBackdropVisual *)*((_QWORD *)this + 38);
  if ( v22 )
  {
    CurrentBaseColor = CSystemBackdropVisual::GetCurrentBaseColor(v22);
  }
  else
  {
    v23 = *((_QWORD *)this + 94);
    if ( (*((_BYTE *)this + 608) & 0x40) != 0 || (*(_BYTE *)(v23 + 667) & 0x10) != 0 )
      v21 = 1;
    if ( *(_DWORD *)(v23 + 96) == 0x7FFFFFFF
      && *(_DWORD *)(v23 + 100) == 0x7FFFFFFF
      && *(_DWORD *)(v23 + 104) == 0x7FFFFFFF
      && *(_DWORD *)(v23 + 108) == 0x7FFFFFFF )
    {
      v21 |= 0x40u;
    }
    if ( (*(_BYTE *)(v23 + 669) & 4) != 0 )
      v21 |= 0x80u;
    CurrentBaseColor = CTopLevelWindow::GetWindowColorizationColor(this, v21 | 8u);
  }
  v27 = BYTE2(CurrentBaseColor) + 5 * BYTE1(CurrentBaseColor) + 2 * (unsigned int)(unsigned __int8)CurrentBaseColor;
  v28 = (unsigned int)v27 > 0x400
     || CDesktopManager::IsHighContrastMode(v27, CurrentBaseColor, v25, v26)
     || IsPPIEdition();
  v29 = *((_DWORD *)this + 152);
  v30 = FLOAT_1_0;
  if ( (v29 & 0x40) == 0 && (*(_BYTE *)(*((_QWORD *)this + 94) + 667LL) & 0x10) == 0 )
    v30 = FLOAT_0_40000001;
  v31 = (char *)a2 + 320 * *((int *)this + 178) + 200;
  v32 = *v3;
  if ( !v28 )
  {
    if ( v32 )
    {
      v68 = (const struct CBitmapSourceArray *)(v31 + 288);
      if ( (v29 & 0x40000) == 0 )
        v68 = (const struct CBitmapSourceArray *)(v31 + 256);
      v69 = CButton::SetVisualStates(
              v32,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v29 & 0x800 | 0x1200uLL) >> 6)),
              v68,
              v30);
      v8 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v69, 0xA73u);
        return v8;
      }
    }
    if ( *v10 )
    {
      v70 = (const struct CBitmapSourceArray *)(v31 + 288);
      if ( (*((_BYTE *)this + 608) & 0x20) == 0 )
        v70 = (const struct CBitmapSourceArray *)(v31 + 224);
      v71 = CButton::SetVisualStates(*v10, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 72), v70, v30);
      v8 = v71;
      if ( v71 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v71, 0xA7Eu);
        return v8;
      }
    }
    if ( *v15 )
    {
      v72 = 168LL;
      if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
        v72 = 136LL;
      v73 = CButton::SetVisualStates(
              *v15,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v72),
              (const struct CBitmapSourceArray *)(v31 + 160),
              v30);
      v8 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0xA8Au);
        return v8;
      }
      if ( (*(_BYTE *)(*((_QWORD *)this + 94) + 664LL) & 0x40) != 0 )
      {
        v74 = *v15;
        *((_BYTE *)v74 + 288) |= 0x10u;
        CVisual::SetDirtyFlags(v74, 0x8000);
      }
    }
    if ( !*v19 )
      return v8;
    v75 = CButton::SetVisualStates(
            *v19,
            (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 104),
            (const struct CBitmapSourceArray *)(v31 + 192),
            v30);
    v8 = v75;
    if ( v75 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v75, 0xA98u);
      return v8;
    }
    v62 = (*(_DWORD *)(*((_QWORD *)this + 94) + 412LL) & 8) != 0;
LABEL_83:
    CButton::SetReverseRTLMirror(*v19, v62);
    return v8;
  }
  if ( v32 )
  {
    if ( (v29 & 0x40000) != 0 )
      v33 = (const struct CBitmapSourceArray *)(v31 + 128);
    else
      v33 = (const struct CBitmapSourceArray *)(v31 + 96);
    v34 = 40LL;
    if ( (v29 & 0x800) != 0 )
      v34 = 8LL;
    v35 = CButton::SetVisualStates(v32, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v34), v33, v30);
    v8 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xA3Du);
      return v8;
    }
  }
  if ( *v10 )
  {
    v36 = (const struct CBitmapSourceArray *)((*((_BYTE *)this + 608) & 0x20) != 0 ? v31 + 128 : v31 + 64);
    v37 = CButton::SetVisualStates(*v10, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 8), v36, v30);
    v8 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v37, 0xA48u);
      return v8;
    }
  }
  if ( *v15 )
  {
    v38 = 136LL;
    if ( (*((_DWORD *)this + 152) & 0xB00) == 0 )
      v38 = 168LL;
    v39 = CButton::SetVisualStates(
            *v15,
            (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v38),
            (const struct CBitmapSourceArray *)v31,
            v30);
    v8 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0xA54u);
      return v8;
    }
    if ( (*(_BYTE *)(*((_QWORD *)this + 94) + 664LL) & 0x40) != 0 )
    {
      v67 = *v15;
      *((_BYTE *)v67 + 288) |= 0x10u;
      CVisual::SetDirtyFlags(v67, 0x8000);
    }
  }
  if ( *v19 )
  {
    v61 = CButton::SetVisualStates(
            *v19,
            (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 40),
            (const struct CBitmapSourceArray *)(v31 + 32),
            v30);
    v8 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v61, 0xA62u);
      return v8;
    }
    v62 = (*(_BYTE *)(*((_QWORD *)this + 94) + 412LL) & 8) != 0;
    goto LABEL_83;
  }
  return v8;
}
