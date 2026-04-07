/*
 * XREFs of ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023280
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18001EF24 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z @ 0x180022970 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0M@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800391CC (-IsPPIEdition@@YA_NXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180051CE4 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x1800AD210 (-SetReverseRTLMirror@CButton@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateButtonVisuals(
        struct CButton **this,
        const struct CTopLevelWindow::WindowFrame *a2)
{
  int v2; // esi
  unsigned __int64 *v3; // rbp
  unsigned int v6; // edi
  int v7; // esi
  unsigned __int64 *v8; // r14
  int v9; // esi
  unsigned __int64 *v10; // r15
  int v11; // esi
  unsigned __int64 *v12; // r12
  struct CVisual *v13; // rdx
  struct CButton *v15; // rdx
  int v16; // eax
  int v17; // esi
  int SystemMetricsForDpi; // r9d
  unsigned int CaptionColor; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // r8
  int v23; // edx
  float v24; // xmm6_4
  char *v25; // rsi
  CButton *v26; // rcx
  const struct CBitmapSourceArray *v27; // r8
  __int64 v28; // rax
  int v29; // eax
  const struct CBitmapSourceArray *v30; // r8
  int v31; // eax
  __int64 v32; // rax
  int v33; // eax
  unsigned __int64 v34; // rdx
  bool v35; // cl
  char v36; // r8
  unsigned __int64 v37; // rcx
  bool v38; // dl
  char v39; // r8
  int v40; // eax
  unsigned __int64 v41; // rdx
  bool v42; // cl
  char v43; // r8
  int v44; // eax
  int inserted; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  unsigned __int64 v57; // rcx
  bool v58; // dl
  char v59; // r8
  int v60; // eax
  int v61; // eax
  unsigned int i; // edx
  unsigned __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  const struct CBitmapSourceArray *v66; // r8
  const struct CBitmapSourceArray *v67; // rbp
  int v68; // eax
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  unsigned __int64 v72; // rcx
  int v73; // eax
  int v74; // eax
  unsigned int v75; // [rsp+20h] [rbp-48h]
  __int64 v76; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (unsigned __int64 *)(this + 67);
  if ( ((_DWORD)this[78] & 0x100) != 0 )
  {
    if ( !*v3 )
    {
      v44 = CButton::Create(this + 67);
      v2 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0xAB0u, 0LL);
        v6 = v2;
        goto LABEL_76;
      }
      inserted = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v3, 0LL, 0, v75);
      v2 = inserted;
      v6 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0xAB2u, 0LL);
        goto LABEL_76;
      }
      *(_DWORD *)(*v3 + 200) = 8;
    }
    v34 = *v3;
    v35 = ((_DWORD)this[78] & 0x1000) != 0;
    v36 = *(_BYTE *)(*v3 + 288);
    if ( (v36 & 1) != v35 )
    {
      v53 = *(_DWORD *)(v34 + 88);
      *(_BYTE *)(v34 + 288) = v35 | v36 & 0xFE;
      if ( (v53 & 0x8000) == 0 )
      {
        *(_DWORD *)(v34 + 88) = v53 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v34);
      }
    }
LABEL_3:
    v6 = v2;
    if ( v2 >= 0 )
      goto LABEL_4;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x9DDu, 0LL);
    return v6;
  }
  if ( !*v3 )
    goto LABEL_3;
  v50 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v3);
  v2 = v50;
  v6 = v50;
  if ( v50 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0xABDu, 0LL);
    goto LABEL_76;
  }
  if ( !*v3 )
    goto LABEL_3;
  CBaseObject::Release((CBaseObject *)*v3);
  *v3 = 0LL;
LABEL_4:
  v7 = 0;
  v8 = (unsigned __int64 *)(this + 68);
  if ( ((_DWORD)this[78] & 0x200) != 0 )
  {
    if ( !*v8 )
    {
      v46 = CButton::Create(this + 68);
      v7 = v46;
      v6 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xAB0u, 0LL);
        goto LABEL_82;
      }
      v47 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v8, 0LL, 0, v75);
      v7 = v47;
      v6 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0xAB2u, 0LL);
        goto LABEL_82;
      }
      *(_DWORD *)(*v8 + 200) = 9;
    }
    v37 = *v8;
    v38 = ((_DWORD)this[78] & 0x2000) != 0;
    v39 = *(_BYTE *)(*v8 + 288);
    if ( (v39 & 1) != v38 )
    {
      v40 = *(_DWORD *)(v37 + 88);
      *(_BYTE *)(v37 + 288) = v38 | v39 & 0xFE;
      if ( (v40 & 0x8000) == 0 )
      {
        *(_DWORD *)(v37 + 88) = v40 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v37);
      }
    }
LABEL_6:
    v6 = v7;
    if ( v7 >= 0 )
      goto LABEL_7;
LABEL_82:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x9DEu, 0LL);
    return v6;
  }
  if ( !*v8 )
    goto LABEL_6;
  v51 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v8);
  v7 = v51;
  v6 = v51;
  if ( v51 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xABDu, 0LL);
    goto LABEL_82;
  }
  if ( !*v8 )
    goto LABEL_6;
  CBaseObject::Release((CBaseObject *)*v8);
  *v8 = 0LL;
LABEL_7:
  v9 = 0;
  v10 = (unsigned __int64 *)(this + 69);
  if ( ((_DWORD)this[78] & 0x400) != 0 )
  {
    if ( !*v10 )
    {
      v48 = CButton::Create(this + 69);
      v9 = v48;
      v6 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0xAB0u, 0LL);
        goto LABEL_87;
      }
      v49 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v10, 0LL, 0, v75);
      v9 = v49;
      v6 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0xAB2u, 0LL);
        goto LABEL_87;
      }
      *(_DWORD *)(*v10 + 200) = 20;
    }
    v41 = *v10;
    v42 = ((_DWORD)this[78] & 0x4000) != 0;
    v43 = *(_BYTE *)(*v10 + 288);
    if ( (v43 & 1) != v42 )
    {
      v54 = *(_DWORD *)(v41 + 88);
      *(_BYTE *)(v41 + 288) = v42 | v43 & 0xFE;
      if ( (v54 & 0x8000) == 0 )
      {
        *(_DWORD *)(v41 + 88) = v54 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v41);
      }
    }
LABEL_9:
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_10;
LABEL_87:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9DFu, 0LL);
    return v6;
  }
  if ( !*v10 )
    goto LABEL_9;
  v52 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), (struct CVisual *)*v10);
  v9 = v52;
  v6 = v52;
  if ( v52 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xABDu, 0LL);
    goto LABEL_87;
  }
  if ( !*v10 )
    goto LABEL_9;
  CBaseObject::Release((CBaseObject *)*v10);
  *v10 = 0LL;
LABEL_10:
  v11 = 0;
  v12 = (unsigned __int64 *)(this + 66);
  v13 = this[66];
  if ( ((_DWORD)this[78] & 0x800) != 0 )
  {
    if ( !v13 )
    {
      v55 = CButton::Create(this + 66);
      v11 = v55;
      v6 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0xAB0u, 0LL);
        goto LABEL_95;
      }
      v56 = VisualCollection::InsertRelative((struct CButton *)((char *)this[38] + 32), *v12, 0LL, 0, v75);
      v11 = v56;
      v6 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xAB2u, 0LL);
        goto LABEL_95;
      }
      *(_DWORD *)(*v12 + 200) = 21;
    }
    v57 = *v12;
    v58 = ((_DWORD)this[78] & 0x8000) != 0;
    v59 = *(_BYTE *)(*v12 + 288);
    if ( (v59 & 1) != v58 )
    {
      v60 = *(_DWORD *)(v57 + 88);
      *(_BYTE *)(v57 + 288) = v58 | v59 & 0xFE;
      if ( (v60 & 0x8000) == 0 )
      {
        *(_DWORD *)(v57 + 88) = v60 | 0x8000;
        CVisual::PropagateDirtyChildren((CVisual *)v57);
      }
    }
  }
  else if ( v13 )
  {
    v61 = VisualCollection::Remove((struct CButton *)((char *)this[38] + 32), v13);
    v11 = v61;
    v6 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xABDu, 0LL);
      goto LABEL_95;
    }
    if ( *v12 )
    {
      CBaseObject::Release((CBaseObject *)*v12);
      *v12 = 0LL;
      goto LABEL_13;
    }
  }
  v6 = v11;
  if ( v11 < 0 )
  {
LABEL_95:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x9E0u, 0LL);
    return v6;
  }
LABEL_13:
  if ( *((_DWORD *)this + 182) == -1 )
  {
    v15 = this[94];
    v16 = *((_DWORD *)v15 + 87);
    if ( v16 >= 192 )
    {
      *((_DWORD *)this + 182) = 3;
    }
    else if ( v16 >= 144 )
    {
      *((_DWORD *)this + 182) = 2;
    }
    else
    {
      *((_DWORD *)this + 182) = v16 >= 120;
    }
    v76 = *(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames;
    v17 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 72LL)
        + *(_DWORD *)(**(_QWORD **)(*(_QWORD *)CTopLevelWindow::s_rgpwfWindowFrames + 136LL) + 76LL);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)v15 + 87));
    if ( v17 + *(_DWORD *)(**(_QWORD **)(320LL * *((int *)this + 182) + v76 + 200) + 28LL) > SystemMetricsForDpi )
    {
      *((_DWORD *)this + 182) = 0;
      for ( i = 0; i < 3; *((_DWORD *)this + 182) = i )
      {
        if ( v17 + *(_DWORD *)(**(_QWORD **)(320LL * (int)i + v76 + 520) + 28LL) > SystemMetricsForDpi )
          break;
        ++i;
      }
    }
  }
  if ( a2 )
  {
    CaptionColor = CTopLevelWindow::GetCaptionColor((CTopLevelWindow *)this);
    v20 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor);
    v21 = (unsigned int)v20 + 2 * (unsigned __int8)CaptionColor;
    v22 = (unsigned int)v21 > 0x400 || (unsigned __int8)CDesktopManager::IsHighContrastMode(v21, v20) || IsPPIEdition();
    v23 = *((_DWORD *)this + 156);
    v24 = FLOAT_1_0;
    if ( (v23 & 0x40) == 0 && (*((_BYTE *)this[94] + 675) & 0x10) == 0 )
      v24 = FLOAT_0_40000001;
    v25 = (char *)a2 + 320 * *((int *)this + 182) + 200;
    v26 = (CButton *)*v3;
    if ( v22 )
    {
      if ( v26 )
      {
        if ( (v23 & 0x40000) != 0 )
          v27 = (const struct CBitmapSourceArray *)(v25 + 128);
        else
          v27 = (const struct CBitmapSourceArray *)(v25 + 96);
        v28 = 40LL;
        if ( (v23 & 0x800) != 0 )
          v28 = 8LL;
        v29 = CButton::SetVisualStates(v26, (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v28), v27, v24);
        v6 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xA31u, 0LL);
          return v6;
        }
      }
      if ( *v8 )
      {
        v30 = (const struct CBitmapSourceArray *)(((_BYTE)this[78] & 0x20) != 0 ? v25 + 128 : v25 + 64);
        v31 = CButton::SetVisualStates(
                (CButton *)*v8,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 8),
                v30,
                v24);
        v6 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xA3Cu, 0LL);
          return v6;
        }
      }
      if ( *v10 )
      {
        v32 = 136LL;
        if ( ((_DWORD)this[78] & 0xB00) == 0 )
          v32 = 168LL;
        v33 = CButton::SetVisualStates(
                (CButton *)*v10,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v32),
                (const struct CBitmapSourceArray *)v25,
                v24);
        v6 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xA48u, 0LL);
          return v6;
        }
        if ( (*((_BYTE *)this[94] + 672) & 0x40) != 0 )
        {
          v63 = *v10;
          *(_BYTE *)(v63 + 288) |= 0x10u;
          v64 = *(_DWORD *)(v63 + 88);
          if ( (v64 & 0x8000) == 0 )
          {
            *(_DWORD *)(v63 + 88) = v64 | 0x8000;
            CVisual::PropagateDirtyChildren((CVisual *)v63);
          }
        }
      }
      if ( !*v12 )
        return v6;
      v65 = CButton::SetVisualStates(
              (CButton *)*v12,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 40),
              (const struct CBitmapSourceArray *)(v25 + 32),
              v24);
      v6 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0xA56u, 0LL);
        return v6;
      }
    }
    else
    {
      if ( v26 )
      {
        if ( (v23 & 0x40000) != 0 )
          v66 = (const struct CBitmapSourceArray *)(v25 + 288);
        else
          v66 = (const struct CBitmapSourceArray *)(v25 + 256);
        v67 = (const struct CBitmapSourceArray *)(v25 + 288);
        v68 = CButton::SetVisualStates(
                v26,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + ((~(_WORD)v23 & 0x800 | 0x1200uLL) >> 6)),
                v66,
                v24);
        v6 = v68;
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xA67u, 0LL);
          return v6;
        }
      }
      else
      {
        v67 = (const struct CBitmapSourceArray *)(v25 + 288);
      }
      if ( *v8 )
      {
        if ( ((_BYTE)this[78] & 0x20) == 0 )
          v67 = (const struct CBitmapSourceArray *)(v25 + 224);
        v69 = CButton::SetVisualStates(
                (CButton *)*v8,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 72),
                v67,
                v24);
        v6 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xA72u, 0LL);
          return v6;
        }
      }
      if ( *v10 )
      {
        v70 = 168LL;
        if ( ((_DWORD)this[78] & 0xB00) != 0 )
          v70 = 136LL;
        v71 = CButton::SetVisualStates(
                (CButton *)*v10,
                (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + v70),
                (const struct CBitmapSourceArray *)(v25 + 160),
                v24);
        v6 = v71;
        if ( v71 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0xA7Eu, 0LL);
          return v6;
        }
        if ( (*((_BYTE *)this[94] + 672) & 0x40) != 0 )
        {
          v72 = *v10;
          *(_BYTE *)(v72 + 288) |= 0x10u;
          v73 = *(_DWORD *)(v72 + 88);
          if ( (v73 & 0x8000) == 0 )
          {
            *(_DWORD *)(v72 + 88) = v73 | 0x8000;
            CVisual::PropagateDirtyChildren((CVisual *)v72);
          }
        }
      }
      if ( !*v12 )
        return v6;
      v74 = CButton::SetVisualStates(
              (CButton *)*v12,
              (const struct CTopLevelWindow::WindowFrame *)((char *)a2 + 104),
              (const struct CBitmapSourceArray *)(v25 + 192),
              v24);
      v6 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0xA8Cu, 0LL);
        return v6;
      }
    }
    CButton::SetReverseRTLMirror((CButton *)*v12, (*((_DWORD *)this[94] + 103) & 8) != 0);
  }
  return v6;
}
