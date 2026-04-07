/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002FD80
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180003098 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180032960 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     floor @ 0x180060EC8 (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  CVisual *v7; // rcx
  int v8; // esi
  char v9; // r9
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // esi
  int v14; // r14d
  int v15; // r15d
  int v16; // ebx
  int SystemMetricsForDpi; // eax
  int v18; // ecx
  int MetricsForCaptionBar; // ebp
  int v20; // ebx
  int v21; // r12d
  int v22; // r12d
  float v23; // xmm6_4
  int v24; // r12d
  __int64 *v25; // rcx
  _DWORD *v26; // rcx
  int updated; // ebx
  int v29; // eax
  int v30; // eax
  float v31; // xmm1_4
  int v32; // r13d
  __int64 *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // r12d
  int v37; // eax
  double v38; // xmm0_8
  int v39; // r13d
  __int64 *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // r12d
  int v44; // eax
  int v45; // eax
  int v46; // r13d
  __int64 *v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v51; // ebx
  int v52; // eax
  __int64 v53; // rax
  _DWORD *v54; // rcx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  char v67; // r12
  unsigned int v68; // eax
  int v69; // eax
  double v70; // xmm0_8
  int v71; // r12d
  __int64 *v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  __int128 v79; // [rsp+30h] [rbp-58h]
  int v80; // [rsp+90h] [rbp+8h] BYREF
  int v81; // [rsp+94h] [rbp+Ch]

  if ( *((_QWORD *)this + 62) )
  {
    v2 = *((_DWORD *)this + 153);
    v3 = (_DWORD *)*((_QWORD *)this + 70);
    if ( v3[34] != v2 )
    {
      v3[34] = v2;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 70);
    }
    v4 = *((_DWORD *)this + 155);
    if ( v3[36] != v4 )
    {
      v3[36] = v4;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 70);
    }
    v5 = *((_DWORD *)this + 154);
    if ( v3[35] != v5 )
    {
      v3[35] = v5;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
      v3 = (_DWORD *)*((_QWORD *)this + 70);
    }
    v6 = *((_DWORD *)this + 156);
    if ( v3[37] != v6 )
    {
      v3[37] = v6;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
    }
    v7 = (CVisual *)*((_QWORD *)this + 39);
    if ( v7 )
      CVisual::SetInsetFromParent(v7, (const struct _MARGINS *)(*((_QWORD *)this + 70) + 136LL));
  }
  v8 = *((_DWORD *)this + 154);
  if ( v8 <= 0 )
    v8 = *(_DWORD *)(*((_QWORD *)this + 94) + 112LL);
  if ( (*((_BYTE *)this + 608) & 2) != 0 )
  {
    v9 = 1;
    ++v8;
  }
  else
  {
    v9 = 0;
  }
  v10 = *((_DWORD *)this + 153);
  v11 = *((_BYTE *)this + 248) & 4 | 0xA1LL;
  v12 = *(_QWORD *)((char *)this + 4 * v11);
  v13 = v8 - 1;
  v79 = *(_OWORD *)((char *)this + 4 * v11);
  if ( v13 <= HIDWORD(v12) + 1 )
    v13 = HIDWORD(*(_QWORD *)((char *)this + 4 * v11)) + 1;
  if ( (*((_BYTE *)this + 248) & 4) != 0 )
    v14 = v10 + 2;
  else
    v14 = 2 * v10 - v12;
  if ( v9 )
  {
    v15 = *(_QWORD *)((char *)this + 4 * v11 + 8);
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 94), 0x35u, 0);
    v20 = *((_DWORD *)this + 155) - MetricsForCaptionBar - 2;
    if ( v20 <= SDWORD2(v79) )
      v20 = DWORD2(v79);
  }
  else
  {
    v15 = *(_QWORD *)((char *)this + 4 * v11 + 8);
    v16 = *((_DWORD *)this + 159) - DWORD2(v79);
    SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 94) + 348LL));
    v18 = DWORD2(v79);
    MetricsForCaptionBar = SystemMetricsForDpi + *(_DWORD *)(*((_QWORD *)this + 94) + 112LL);
    if ( MetricsForCaptionBar >= v16 )
      MetricsForCaptionBar = v16;
    v20 = DWORD2(v79);
    if ( MetricsForCaptionBar < 0 )
      MetricsForCaptionBar = 0;
    if ( (*((_BYTE *)this + 248) & 4) != 0 && (v18 = DWORD2(v79), *((_DWORD *)this + 167) > *((_DWORD *)this + 163)) )
    {
      if ( --MetricsForCaptionBar < 0 )
        MetricsForCaptionBar = 0;
    }
    else
    {
      v20 = v18 + 1;
    }
  }
  v21 = MetricsForCaptionBar;
  if ( *((_QWORD *)this + 66) )
  {
    if ( (*((_BYTE *)this + 608) & 2) != 0 )
    {
      v76 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 94), 0x35u, 0);
      v32 = (int)floor((float)((float)v76 * 0.95454544) + 0.5);
      v21 = v32;
    }
    else
    {
      v29 = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 94) + 348LL));
      v30 = (int)floor((float)((float)v29 * 0.95454544) + 0.5);
      if ( (*((_DWORD *)this + 152) & 0xB00) != 0 )
        v31 = FLOAT_2_2272727;
      else
        v31 = FLOAT_1_6363636;
      v32 = (int)floor((float)((float)v30 * v31) + 0.5);
    }
    v33 = (__int64 *)*((_QWORD *)this + 66);
    if ( *((_DWORD *)v33 + 36) != v20 )
    {
      v58 = *v33;
      *((_DWORD *)v33 + 36) = v20;
      (*(void (__fastcall **)(__int64 *, __int64))(v58 + 24))(v33, 2LL);
      v33 = (__int64 *)*((_QWORD *)this + 66);
    }
    if ( *((_DWORD *)v33 + 35) != v13 )
    {
      v59 = *v33;
      *((_DWORD *)v33 + 35) = v13;
      (*(void (__fastcall **)(__int64 *, __int64))(v59 + 24))(v33, 2LL);
      v33 = (__int64 *)*((_QWORD *)this + 66);
    }
    v34 = *v33;
    v80 = v32;
    v81 = v21;
    v35 = (*(__int64 (__fastcall **)(__int64 *, int *))(v34 + 96))(v33, &v80);
    v36 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0xD57u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0xCEFu);
      return v36;
    }
    v13 += *(_DWORD *)(*((_QWORD *)this + 66) + 128LL);
  }
  v22 = MetricsForCaptionBar;
  v23 = FLOAT_2_1818182;
  if ( !*((_QWORD *)this + 65) )
    goto LABEL_29;
  if ( (*((_BYTE *)this + 608) & 2) != 0 )
  {
    v77 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 94), 0x35u, 0);
    v39 = (int)floor((float)((float)v77 * 0.95454544) + 0.5);
    v22 = v39;
  }
  else
  {
    v37 = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 94) + 348LL));
    v38 = floor((float)((float)v37 * 0.95454544) + 0.5);
    v39 = (int)floor((float)((float)(int)v38 * 2.1818182) + 0.5);
  }
  v40 = (__int64 *)*((_QWORD *)this + 65);
  if ( *((_DWORD *)v40 + 36) != v20 )
  {
    v60 = *v40;
    *((_DWORD *)v40 + 36) = v20;
    (*(void (__fastcall **)(__int64 *, __int64))(v60 + 24))(v40, 2LL);
    v40 = (__int64 *)*((_QWORD *)this + 65);
  }
  if ( *((_DWORD *)v40 + 35) != v13 )
  {
    v61 = *v40;
    *((_DWORD *)v40 + 35) = v13;
    (*(void (__fastcall **)(__int64 *, __int64))(v61 + 24))(v40, 2LL);
    v40 = (__int64 *)*((_QWORD *)this + 65);
  }
  v41 = *v40;
  v80 = v39;
  v81 = v22;
  v42 = (*(__int64 (__fastcall **)(__int64 *, int *))(v41 + 96))(v40, &v80);
  v43 = v42;
  if ( v42 >= 0 )
  {
    v13 += *(_DWORD *)(*((_QWORD *)this + 65) + 128LL);
LABEL_29:
    v24 = MetricsForCaptionBar;
    if ( !*((_QWORD *)this + 64) )
      goto LABEL_30;
    if ( (*((_BYTE *)this + 608) & 2) != 0 )
    {
      v78 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 94), 0x35u, 0);
      v46 = (int)floor((float)((float)v78 * 0.95454544) + 0.5);
      v24 = v46;
    }
    else
    {
      v44 = GetSystemMetricsForDpi(31LL, *(unsigned int *)(*((_QWORD *)this + 94) + 348LL));
      v45 = (int)floor((float)((float)v44 * 0.95454544) + 0.5);
      if ( !*((_QWORD *)this + 63) )
        v23 = FLOAT_2_2272727;
      v46 = (int)floor((float)((float)v45 * v23) + 0.5);
    }
    v47 = (__int64 *)*((_QWORD *)this + 64);
    if ( *((_DWORD *)v47 + 36) != v20 )
    {
      v62 = *v47;
      *((_DWORD *)v47 + 36) = v20;
      (*(void (__fastcall **)(__int64 *, __int64))(v62 + 24))(v47, 2LL);
      v47 = (__int64 *)*((_QWORD *)this + 64);
    }
    if ( *((_DWORD *)v47 + 35) != v13 )
    {
      v63 = *v47;
      *((_DWORD *)v47 + 35) = v13;
      (*(void (__fastcall **)(__int64 *, __int64))(v63 + 24))(v47, 2LL);
      v47 = (__int64 *)*((_QWORD *)this + 64);
    }
    v48 = *v47;
    v80 = v46;
    v81 = v24;
    v49 = (*(__int64 (__fastcall **)(__int64 *, int *))(v48 + 96))(v47, &v80);
    v43 = v49;
    if ( v49 >= 0 )
    {
      v13 += *(_DWORD *)(*((_QWORD *)this + 64) + 128LL);
LABEL_30:
      if ( *((_QWORD *)this + 63) )
      {
        if ( (*((_BYTE *)this + 608) & 2) != 0 )
        {
          v67 = 1;
          v68 = 53;
        }
        else
        {
          v67 = 0;
          v68 = 31;
        }
        v69 = CWindowData::GetMetricsForCaptionBar(*((CWindowData **)this + 94), v68, 0);
        v70 = floor((float)((float)v69 * 0.95454544) + 0.5);
        if ( v67 )
        {
          v71 = (int)v70;
          MetricsForCaptionBar = (int)v70;
        }
        else
        {
          v71 = (int)floor((float)((float)(int)v70 * 2.2272727) + 0.5);
        }
        CVisual::SetInsetFromParentTop(*((CVisual **)this + 63), v20);
        v72 = (__int64 *)*((_QWORD *)this + 63);
        if ( *((_DWORD *)v72 + 35) != v13 )
        {
          v75 = *v72;
          *((_DWORD *)v72 + 35) = v13;
          (*(void (__fastcall **)(__int64 *, __int64))(v75 + 24))(v72, 2LL);
          v72 = (__int64 *)*((_QWORD *)this + 63);
        }
        v73 = *v72;
        v80 = v71;
        v81 = MetricsForCaptionBar;
        v74 = (*(__int64 (__fastcall **)(__int64 *, int *))(v73 + 96))(v72, &v80);
        updated = v74;
        if ( v74 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0xD57u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xCF2u);
          return (unsigned int)updated;
        }
        v13 += *(_DWORD *)(*((_QWORD *)this + 63) + 128LL);
      }
      v25 = (__int64 *)*((_QWORD *)this + 68);
      if ( !v25 )
      {
LABEL_32:
        v26 = (_DWORD *)*((_QWORD *)this + 67);
        if ( !v26 )
          goto LABEL_33;
        if ( v26[36] != v15 )
        {
          v64 = *(_QWORD *)v26;
          v26[36] = v15;
          (*(void (__fastcall **)(_DWORD *, __int64))(v64 + 24))(v26, 2LL);
          v26 = (_DWORD *)*((_QWORD *)this + 67);
        }
        if ( v26[34] != v14 )
        {
          v57 = *(_QWORD *)v26;
          v26[34] = v14;
          (*(void (__fastcall **)(_DWORD *, __int64))(v57 + 24))(v26, 2LL);
          v26 = (_DWORD *)*((_QWORD *)this + 67);
        }
        if ( v26[35] != v13 )
        {
          v65 = *(_QWORD *)v26;
          v26[35] = v13;
          (*(void (__fastcall **)(_DWORD *, __int64))(v65 + 24))(v26, 2LL);
          v26 = (_DWORD *)*((_QWORD *)this + 67);
        }
        v80 = v26[32];
        v81 = *((_DWORD *)this + 155) - v15;
        updated = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v26 + 96LL))(v26, &v80);
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xD17u);
        }
        else
        {
LABEL_33:
          updated = CTopLevelWindow::UpdatePinnedParts(this);
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xD1Au);
        }
        return (unsigned int)updated;
      }
      v50 = *((_QWORD *)this + 94);
      if ( *(_QWORD *)(v50 + 152) || (*((_DWORD *)this + 152) & 0x10000) == 0 )
      {
        v51 = GetSystemMetricsForDpi(49LL, *(unsigned int *)(v50 + 348));
        v52 = GetSystemMetricsForDpi(50LL, *(unsigned int *)(*((_QWORD *)this + 94) + 348LL));
        v25 = (__int64 *)*((_QWORD *)this + 68);
      }
      else
      {
        v52 = 0;
        v51 = 0;
      }
      v81 = v52;
      v53 = *v25;
      v80 = v51;
      updated = (*(__int64 (__fastcall **)(__int64 *, int *))(v53 + 96))(v25, &v80);
      if ( updated >= 0 )
      {
        v54 = (_DWORD *)*((_QWORD *)this + 68);
        v55 = v15 + (*((_DWORD *)this + 155) - v54[33] - v15) / 2;
        if ( v54[36] != v55 )
        {
          v54[36] = v55;
          (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v54 + 24LL))(v54, 2LL);
          v54 = (_DWORD *)*((_QWORD *)this + 68);
        }
        if ( v54[34] != v14 )
        {
          v66 = *(_QWORD *)v54;
          v54[34] = v14;
          (*(void (__fastcall **)(_DWORD *, __int64))(v66 + 24))(v54, 2LL);
          v54 = (_DWORD *)*((_QWORD *)this + 68);
        }
        v56 = v54[32];
        if ( v56 > 0 )
          v14 += v56 + 5;
        goto LABEL_32;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xD03u);
      return (unsigned int)updated;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v49, 0xD57u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0xCF1u);
    return v43;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0xD57u);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0xCF0u);
  return v43;
}
