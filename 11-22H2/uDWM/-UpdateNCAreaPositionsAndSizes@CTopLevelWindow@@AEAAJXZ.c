/*
 * XREFs of ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002ADE0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180026780 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z @ 0x180013E98 (-GetMetricsForCaptionBar@CWindowData@@QEBAHH_N@Z.c)
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002DD30 (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180042020 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180047388 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     floor @ 0x18005D2C8 (floor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetInsetFromParentRight@CVisual@@QEAAXH@Z @ 0x180105B38 (-SetInsetFromParentRight@CVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaPositionsAndSizes(CTopLevelWindow *this)
{
  int v2; // eax
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  int v5; // eax
  _DWORD *v6; // rcx
  int v7; // eax
  _DWORD *v8; // rcx
  int v9; // eax
  CVisual *v10; // rcx
  int v11; // edi
  char v12; // dl
  int v13; // r14d
  __int64 v14; // r9
  __m128i v15; // xmm0
  __int64 v16; // r10
  int v17; // edi
  int v18; // r14d
  CWindowData **v19; // r15
  int v20; // esi
  int MetricsForCaptionBar; // ebp
  int v22; // ecx
  int v23; // r12d
  int v24; // r12d
  float v25; // xmm6_4
  int v26; // r12d
  __int64 *v27; // rcx
  int updated; // eax
  unsigned int v29; // ebx
  int SystemMetricsForDpi; // eax
  int v32; // eax
  float v33; // xmm1_4
  int v34; // r13d
  __int64 *v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  unsigned int v39; // r12d
  int v40; // eax
  double v41; // xmm0_8
  int v42; // r13d
  __int64 *v43; // rcx
  __int64 *v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // r13d
  __int64 *v50; // rcx
  __int64 *v51; // rcx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // ebp
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // ebp
  _DWORD *v59; // rcx
  int v60; // eax
  __int64 *v61; // rcx
  int v62; // ecx
  __int64 *v63; // rcx
  __int64 *v64; // rcx
  _DWORD *v65; // rcx
  int v66; // eax
  unsigned int v67; // edi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // edx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  char v82; // r12
  unsigned int v83; // eax
  int v84; // eax
  double v85; // xmm0_8
  int v86; // r12d
  __int64 v87; // rcx
  int v88; // eax
  unsigned int v89; // esi
  int v90; // [rsp+90h] [rbp+8h] BYREF
  int v91; // [rsp+94h] [rbp+Ch]

  if ( *((_QWORD *)this + 65) )
  {
    v2 = *((_DWORD *)this + 157);
    v3 = (_DWORD *)*((_QWORD *)this + 74);
    if ( v3[34] != v2 )
    {
      v3[34] = v2;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 2LL);
    }
    v4 = (_DWORD *)*((_QWORD *)this + 74);
    v5 = *((_DWORD *)this + 159);
    if ( v4[36] != v5 )
    {
      v4[36] = v5;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 2LL);
    }
    v6 = (_DWORD *)*((_QWORD *)this + 74);
    v7 = *((_DWORD *)this + 158);
    if ( v6[35] != v7 )
    {
      v6[35] = v7;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 2LL);
    }
    v8 = (_DWORD *)*((_QWORD *)this + 74);
    v9 = *((_DWORD *)this + 160);
    if ( v8[37] != v9 )
    {
      v8[37] = v9;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 2LL);
    }
    v10 = (CVisual *)*((_QWORD *)this + 42);
    if ( v10 )
      CVisual::SetInsetFromParent(v10, (const struct _MARGINS *)(*((_QWORD *)this + 74) + 136LL));
  }
  v11 = *((_DWORD *)this + 158);
  if ( v11 <= 0 )
    v11 = *(_DWORD *)(*((_QWORD *)this + 94) + 112LL);
  if ( (*((_DWORD *)this + 156) & 2) != 0 )
    ++v11;
  v12 = *((_BYTE *)this + 248);
  v13 = *((_DWORD *)this + 157);
  v14 = 676LL;
  if ( (v12 & 4) == 0 )
    v14 = 660LL;
  v15 = *(__m128i *)((char *)this + v14);
  v16 = *(_QWORD *)((char *)this + v14);
  v17 = v11 - 1;
  if ( v17 <= HIDWORD(v16) + 1 )
    v17 = HIDWORD(*(_QWORD *)((char *)this + v14)) + 1;
  if ( (v12 & 4) != 0 )
    v18 = v13 + 2;
  else
    v18 = 2 * v13 - v16;
  v19 = (CWindowData **)((char *)this + 752);
  if ( (*((_DWORD *)this + 156) & 2) != 0 )
  {
    MetricsForCaptionBar = CWindowData::GetMetricsForCaptionBar(*v19, 0x35u, 0);
    v78 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    v20 = *((_DWORD *)this + 159) - MetricsForCaptionBar - 2;
    if ( v20 <= v78 )
      v20 = v78;
  }
  else
  {
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    MetricsForCaptionBar = GetSystemMetricsForDpi(31LL, *((unsigned int *)*v19 + 87)) + *((_DWORD *)*v19 + 28);
    v22 = v20;
    if ( MetricsForCaptionBar >= *((_DWORD *)this + 163) - v20 )
      MetricsForCaptionBar = *((_DWORD *)this + 163) - v20;
    if ( MetricsForCaptionBar < 0 )
      MetricsForCaptionBar = 0;
    if ( (*((_BYTE *)this + 248) & 4) != 0 && (v22 = v20, *((_DWORD *)this + 171) > *((_DWORD *)this + 167)) )
    {
      if ( --MetricsForCaptionBar < 0 )
        MetricsForCaptionBar = 0;
    }
    else
    {
      v20 = v22 + 1;
    }
  }
  v23 = MetricsForCaptionBar;
  if ( *((_QWORD *)this + 69) )
  {
    if ( (*((_BYTE *)this + 624) & 2) != 0 )
    {
      v79 = CWindowData::GetMetricsForCaptionBar(*v19, 0x35u, 0);
      v34 = (int)floor((float)((float)v79 * 0.95454544) + 0.5);
      v23 = v34;
    }
    else
    {
      SystemMetricsForDpi = GetSystemMetricsForDpi(31LL, *((unsigned int *)*v19 + 87));
      v32 = (int)floor((float)((float)SystemMetricsForDpi * 0.95454544) + 0.5);
      if ( (*((_DWORD *)this + 156) & 0xB00) != 0 )
        v33 = FLOAT_2_2272727;
      else
        v33 = FLOAT_1_6363636;
      v34 = (int)floor((float)((float)v32 * v33) + 0.5);
    }
    v35 = (__int64 *)*((_QWORD *)this + 69);
    if ( *((_DWORD *)v35 + 36) != v20 )
    {
      v68 = *v35;
      *((_DWORD *)v35 + 36) = v20;
      (*(void (__fastcall **)(__int64 *, __int64))(v68 + 24))(v35, 2LL);
    }
    v36 = (__int64 *)*((_QWORD *)this + 69);
    if ( *((_DWORD *)v36 + 35) != v17 )
    {
      v69 = *v36;
      *((_DWORD *)v36 + 35) = v17;
      (*(void (__fastcall **)(__int64 *, __int64))(v69 + 24))(v36, 2LL);
    }
    v37 = *((_QWORD *)this + 69);
    v90 = v34;
    v91 = v23;
    v38 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 104LL))(v37, &v90);
    v39 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xD5Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xCC3u, 0LL);
      return v39;
    }
    v17 += *(_DWORD *)(*((_QWORD *)this + 69) + 128LL);
  }
  v24 = MetricsForCaptionBar;
  v25 = FLOAT_2_1818182;
  if ( *((_QWORD *)this + 68) )
  {
    if ( (*((_BYTE *)this + 624) & 2) != 0 )
    {
      v80 = CWindowData::GetMetricsForCaptionBar(*v19, 0x35u, 0);
      v42 = (int)floor((float)((float)v80 * 0.95454544) + 0.5);
      v24 = v42;
    }
    else
    {
      v40 = GetSystemMetricsForDpi(31LL, *((unsigned int *)*v19 + 87));
      v41 = floor((float)((float)v40 * 0.95454544) + 0.5);
      v42 = (int)floor((float)((float)(int)v41 * 2.1818182) + 0.5);
    }
    v43 = (__int64 *)*((_QWORD *)this + 68);
    if ( *((_DWORD *)v43 + 36) != v20 )
    {
      v70 = *v43;
      *((_DWORD *)v43 + 36) = v20;
      (*(void (__fastcall **)(__int64 *, __int64))(v70 + 24))(v43, 2LL);
    }
    v44 = (__int64 *)*((_QWORD *)this + 68);
    if ( *((_DWORD *)v44 + 35) != v17 )
    {
      v71 = *v44;
      *((_DWORD *)v44 + 35) = v17;
      (*(void (__fastcall **)(__int64 *, __int64))(v71 + 24))(v44, 2LL);
    }
    v45 = *((_QWORD *)this + 68);
    v90 = v42;
    v91 = v24;
    v46 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v45 + 104LL))(v45, &v90);
    v39 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xD5Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xCC4u, 0LL);
      return v39;
    }
    v17 += *(_DWORD *)(*((_QWORD *)this + 68) + 128LL);
  }
  v26 = MetricsForCaptionBar;
  if ( !*((_QWORD *)this + 67) )
    goto LABEL_32;
  if ( (*((_BYTE *)this + 624) & 2) != 0 )
  {
    v81 = CWindowData::GetMetricsForCaptionBar(*v19, 0x35u, 0);
    v49 = (int)floor((float)((float)v81 * 0.95454544) + 0.5);
    v26 = v49;
  }
  else
  {
    v47 = GetSystemMetricsForDpi(31LL, *((unsigned int *)*v19 + 87));
    v48 = (int)floor((float)((float)v47 * 0.95454544) + 0.5);
    if ( !*((_QWORD *)this + 66) )
      v25 = FLOAT_2_2272727;
    v49 = (int)floor((float)((float)v48 * v25) + 0.5);
  }
  v50 = (__int64 *)*((_QWORD *)this + 67);
  if ( *((_DWORD *)v50 + 36) != v20 )
  {
    v72 = *v50;
    *((_DWORD *)v50 + 36) = v20;
    (*(void (__fastcall **)(__int64 *, __int64))(v72 + 24))(v50, 2LL);
  }
  v51 = (__int64 *)*((_QWORD *)this + 67);
  if ( *((_DWORD *)v51 + 35) != v17 )
  {
    v73 = *v51;
    *((_DWORD *)v51 + 35) = v17;
    (*(void (__fastcall **)(__int64 *, __int64))(v73 + 24))(v51, 2LL);
  }
  v52 = *((_QWORD *)this + 67);
  v90 = v49;
  v91 = v26;
  v53 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 104LL))(v52, &v90);
  v39 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xD5Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0xCC5u, 0LL);
    return v39;
  }
  v17 += *(_DWORD *)(*((_QWORD *)this + 67) + 128LL);
LABEL_32:
  if ( *((_QWORD *)this + 66) )
  {
    if ( (*((_BYTE *)this + 624) & 2) != 0 )
    {
      v82 = 1;
      v83 = 53;
    }
    else
    {
      v82 = 0;
      v83 = 31;
    }
    v84 = CWindowData::GetMetricsForCaptionBar(*v19, v83, 0);
    v85 = floor((float)((float)v84 * 0.95454544) + 0.5);
    if ( v82 )
    {
      v86 = (int)v85;
      MetricsForCaptionBar = (int)v85;
    }
    else
    {
      v86 = (int)floor((float)((float)(int)v85 * 2.2272727) + 0.5);
    }
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 66), v20);
    CVisual::SetInsetFromParentRight(*((CVisual **)this + 66), v17);
    v87 = *((_QWORD *)this + 66);
    v90 = v86;
    v91 = MetricsForCaptionBar;
    v88 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 104LL))(v87, &v90);
    v89 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v88, 0xD5Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0xCC6u, 0LL);
      return v89;
    }
    v17 += *(_DWORD *)(*((_QWORD *)this + 66) + 128LL);
  }
  if ( *((_QWORD *)this + 72) )
  {
    if ( *((_QWORD *)*v19 + 19) || (*((_DWORD *)this + 156) & 0x10000) == 0 )
    {
      v54 = GetSystemMetricsForDpi(49LL, *((unsigned int *)*v19 + 87));
      v55 = GetSystemMetricsForDpi(50LL, *((unsigned int *)*v19 + 87));
    }
    else
    {
      v55 = 0;
      v54 = 0;
    }
    v56 = *((_QWORD *)this + 72);
    v91 = v55;
    v90 = v54;
    v57 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 104LL))(v56, &v90);
    v58 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xCD7u, 0LL);
      return v58;
    }
    v59 = (_DWORD *)*((_QWORD *)this + 72);
    v60 = v15.m128i_i32[2] + (*((_DWORD *)this + 159) - v59[33] - v15.m128i_i32[2]) / 2;
    if ( v59[36] != v60 )
    {
      v59[36] = v60;
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v59 + 24LL))(v59, 2LL);
    }
    v61 = (__int64 *)*((_QWORD *)this + 72);
    if ( *((_DWORD *)v61 + 34) != v18 )
    {
      v75 = *v61;
      *((_DWORD *)v61 + 34) = v18;
      (*(void (__fastcall **)(__int64 *, __int64))(v75 + 24))(v61, 2LL);
    }
    v62 = *(_DWORD *)(*((_QWORD *)this + 72) + 128LL);
    if ( v62 > 0 )
      v18 += v62 + 5;
  }
  v27 = (__int64 *)*((_QWORD *)this + 70);
  if ( !v27 )
    goto LABEL_35;
  if ( *((_DWORD *)v27 + 36) != v15.m128i_i32[2] )
  {
    v76 = *v27;
    *((_DWORD *)v27 + 36) = v15.m128i_i32[2];
    (*(void (__fastcall **)(__int64 *, __int64))(v76 + 24))(v27, 2LL);
  }
  v63 = (__int64 *)*((_QWORD *)this + 70);
  if ( *((_DWORD *)v63 + 34) != v18 )
  {
    v74 = *v63;
    *((_DWORD *)v63 + 34) = v18;
    (*(void (__fastcall **)(__int64 *, __int64))(v74 + 24))(v63, 2LL);
  }
  v64 = (__int64 *)*((_QWORD *)this + 70);
  if ( *((_DWORD *)v64 + 35) != v17 )
  {
    v77 = *v64;
    *((_DWORD *)v64 + 35) = v17;
    (*(void (__fastcall **)(__int64 *, __int64))(v77 + 24))(v64, 2LL);
  }
  v65 = (_DWORD *)*((_QWORD *)this + 70);
  v90 = v65[32];
  v91 = *((_DWORD *)this + 159) - v15.m128i_i32[2];
  v66 = (*(__int64 (__fastcall **)(_DWORD *, int *))(*(_QWORD *)v65 + 104LL))(v65, &v90);
  v67 = v66;
  if ( v66 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v66, 0xCEBu, 0LL);
    return v67;
  }
  else
  {
LABEL_35:
    updated = CTopLevelWindow::UpdatePinnedParts(this);
    v29 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xCEEu, 0LL);
    return v29;
  }
}
