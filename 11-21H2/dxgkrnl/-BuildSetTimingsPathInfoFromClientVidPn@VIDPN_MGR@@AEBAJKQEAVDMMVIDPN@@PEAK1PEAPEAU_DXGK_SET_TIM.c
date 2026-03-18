/*
 * XREFs of ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0013194 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00131CC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0013234 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0013DE8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001EBB8 (-IsVidPnSourceOwnerDwm@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01A0358 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01BACB8 (-NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C01C4A20 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C01DE474 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 *     ?IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C01E5E54 (-IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 *     ?GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z @ 0x1C03A7EE0 (-GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z @ 0x1C03A7FDC (-IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
        VIDPN_MGR *this,
        int a2,
        VIDPN_MGR **a3,
        unsigned int *a4,
        unsigned int *a5,
        struct _DXGK_SET_TIMING_PATH_INFO **a6,
        unsigned int **a7,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a8,
        unsigned int **a9)
{
  __int64 v9; // rax
  struct D3DKMT_VIDPN_SOURCE_MASKS *v10; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rcx
  DMMVIDPNTOPOLOGY *v18; // r15
  DMMVIDPNTOPOLOGY *v19; // r14
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // kr00_8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  struct DMMVIDPN *v29; // r11
  __int64 v30; // r9
  _QWORD *v31; // rcx
  DMMVIDPNPRESENTPATH *v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r12
  int v36; // r15d
  int v37; // eax
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // rax
  UINT v42; // edi
  bool v43; // bl
  __int64 v44; // rax
  __int64 v45; // rax
  struct DMMVIDPNPRESENTPATH *v46; // rax
  int v47; // r11d
  struct DMMVIDPNPRESENTPATH *v48; // r12
  UINT v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v54; // eax
  unsigned int v55; // edx
  char v56; // al
  DXGADAPTER ***v57; // r14
  unsigned __int8 v58; // al
  __int64 v59; // r14
  DMMVIDPNPRESENTPATH *v60; // rcx
  bool IsVidPnVirtualRefreshRateMatch; // al
  DMMVIDPNPRESENTPATH *v62; // rcx
  __int64 v63; // r12
  char v64; // bl
  int v65; // eax
  int v66; // eax
  DMMVIDPNTOPOLOGY *v67; // rcx
  _QWORD *v68; // rdi
  DMMVIDPNPRESENTPATH *v69; // rdi
  DMMVIDPNPRESENTPATH *v70; // r12
  __int64 v71; // r13
  __int64 v72; // rbx
  unsigned int v73; // edx
  unsigned __int64 v74; // rax
  unsigned int v75; // r14d
  int v76; // r15d
  int v77; // eax
  int v78; // edx
  DMMVIDPNTOPOLOGY *v79; // rax
  int v80; // r13d
  const struct DMMVIDPNTOPOLOGY *v81; // rcx
  int v82; // r14d
  int v83; // edx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rdi
  unsigned int v87; // ebx
  __int64 v88; // rax
  int v89; // r15d
  int v90; // r12d
  int v91; // edi
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned __int8 IsVidPnSourceActive; // al
  unsigned int v94; // edx
  __int64 v95; // rcx
  struct _DXGK_SET_TIMING_PATH_INFO *v96; // r14
  unsigned int *v97; // r9
  unsigned int *p_InputFlags; // r8
  __int64 v99; // r10
  unsigned int v100; // ecx
  int v101; // eax
  int v102; // ecx
  unsigned int *v103; // rcx
  int v104; // eax
  int v105; // r8d
  int v106; // ecx
  int v107; // edx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  unsigned __int8 v110; // al
  D3DDDI_VIDEO_PRESENT_TARGET_ID v111; // eax
  unsigned int v112; // edx
  char v113; // al
  struct _DXGK_SET_TIMING_PATH_INFO *v114; // r14
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v115; // ebx
  __int64 v116; // rax
  __int64 v117; // rax
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v118; // rax
  D3DDDI_VIDEO_PRESENT_TARGET_ID v119; // eax
  DMMVIDEOPRESENTTARGET *v120; // r13
  unsigned int v121; // edx
  char v122; // al
  __int64 v123; // r8
  struct _DXGK_SET_TIMING_PATH_INFO *v124; // r9
  DMMVIDEOPRESENTTARGET *v125; // rdi
  unsigned int v126; // eax
  unsigned __int8 v127; // cl
  unsigned __int8 v128; // al
  int v129; // ecx
  unsigned int v130; // edx
  char v131; // al
  int v132; // eax
  int v133; // edx
  unsigned int v134; // ecx
  int NumPathsFromSource; // eax
  __int64 v136; // r9
  unsigned int *v137; // r15
  unsigned int *v138; // rax
  unsigned int i; // ecx
  int v140; // r10d
  unsigned int v141; // edx
  int v142; // [rsp+30h] [rbp-D0h]
  int v143; // [rsp+34h] [rbp-CCh]
  int v144; // [rsp+38h] [rbp-C8h]
  int v145; // [rsp+3Ch] [rbp-C4h]
  int v146; // [rsp+40h] [rbp-C0h]
  int v147; // [rsp+44h] [rbp-BCh]
  unsigned __int8 v148; // [rsp+48h] [rbp-B8h]
  unsigned int v149; // [rsp+4Ch] [rbp-B4h]
  unsigned int v150; // [rsp+50h] [rbp-B0h]
  int v151; // [rsp+54h] [rbp-ACh]
  bool v152; // [rsp+58h] [rbp-A8h]
  DMMVIDPNTOPOLOGY *v153; // [rsp+60h] [rbp-A0h]
  struct _DXGK_SET_TIMING_PATH_INFO *v154; // [rsp+68h] [rbp-98h]
  int v155; // [rsp+70h] [rbp-90h]
  __int64 v156; // [rsp+78h] [rbp-88h]
  int v157; // [rsp+80h] [rbp-80h]
  int v158; // [rsp+84h] [rbp-7Ch]
  int v159; // [rsp+84h] [rbp-7Ch]
  int v160; // [rsp+88h] [rbp-78h]
  int v161; // [rsp+88h] [rbp-78h]
  int v162; // [rsp+8Ch] [rbp-74h]
  int v163; // [rsp+90h] [rbp-70h]
  int v164; // [rsp+94h] [rbp-6Ch]
  int v165; // [rsp+98h] [rbp-68h]
  int v166; // [rsp+9Ch] [rbp-64h]
  int v167; // [rsp+9Ch] [rbp-64h]
  DMMVIDPNPRESENTPATH *v168; // [rsp+A0h] [rbp-60h]
  int v169; // [rsp+A8h] [rbp-58h]
  int v170; // [rsp+ACh] [rbp-54h]
  int v171; // [rsp+B0h] [rbp-50h]
  int v172; // [rsp+B4h] [rbp-4Ch]
  __int64 v173; // [rsp+B8h] [rbp-48h]
  unsigned int *v174; // [rsp+C0h] [rbp-40h]
  unsigned int v175; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int *v176; // [rsp+D0h] [rbp-30h]
  DMMVIDEOPRESENTTARGET *v177; // [rsp+D8h] [rbp-28h]
  __int64 v178; // [rsp+E0h] [rbp-20h]
  unsigned int v179; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v180; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v181; // [rsp+F8h] [rbp-8h] BYREF
  struct _D3DDDI_RATIONAL v182; // [rsp+100h] [rbp+0h] BYREF
  DMMVIDPNTOPOLOGY *v183; // [rsp+108h] [rbp+8h]
  __int64 v184; // [rsp+110h] [rbp+10h] BYREF
  __int64 v185; // [rsp+118h] [rbp+18h] BYREF
  unsigned int *v186; // [rsp+120h] [rbp+20h]
  __int64 v187; // [rsp+128h] [rbp+28h] BYREF
  __int64 v188; // [rsp+130h] [rbp+30h] BYREF
  DMMVIDPNPRESENTPATH *v189[2]; // [rsp+138h] [rbp+38h]
  int Value; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v194; // [rsp+1B8h] [rbp+B8h]

  v194 = a4;
  v9 = *((_QWORD *)this + 1);
  v10 = a8;
  v150 = 0;
  v174 = 0LL;
  v151 = 0;
  v13 = 0;
  v170 = 0;
  v14 = 0;
  v160 = 0;
  v15 = 0;
  v146 = 0;
  v142 = 0;
  v158 = 0;
  v147 = 0;
  v155 = 0;
  v162 = 0;
  v163 = 0;
  v166 = 0;
  v164 = 0;
  v171 = 0;
  v144 = 0;
  v145 = 0;
  v143 = 0;
  v172 = 0;
  *(_OWORD *)v189 = 0LL;
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *((_QWORD *)this + 1);
    a4 = v194;
  }
  v173 = *(_QWORD *)(v9 + 16);
  if ( a3 && a3[6] != this )
  {
    v13 = -1073741811;
    WdLogSingleEntry2(2LL, a3, -1073741811LL);
    return v13;
  }
  v16 = *((_QWORD *)this + 16);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 32));
    v17 = *((_QWORD *)this + 16);
  }
  else
  {
    v17 = 0LL;
  }
  v188 = v17;
  v18 = (DMMVIDPNTOPOLOGY *)((v17 + 96) & -(__int64)(v17 != 0));
  v183 = v18;
  v19 = (DMMVIDPNTOPOLOGY *)((unsigned __int64)(a3 + 12) & -(__int64)(a3 != 0LL));
  LODWORD(v17) = 0;
  v153 = v19;
  if ( v18 )
    v17 = *((_QWORD *)v18 + 5);
  LODWORD(v20) = 0;
  if ( v19 )
    v20 = *((_QWORD *)v19 + 5);
  v21 = (_DWORD)v17 + (_DWORD)v20 == 0;
  v22 = v17 + v20;
  v179 = v22;
  if ( v21 )
  {
    *a4 = 0;
    *a5 = 0;
    *a6 = 0LL;
    *a7 = 0LL;
    if ( a9 )
      *a9 = 0LL;
    goto LABEL_145;
  }
  v23 = v22;
  v25 = v22;
  v24 = 56LL * v22;
  if ( !is_mul_ok(v25, 0x38uLL) )
    v24 = -1LL;
  v154 = (struct _DXGK_SET_TIMING_PATH_INFO *)operator new[](v24, 0x4E506456u, 256LL, (__int64)a4);
  if ( !v154 )
  {
    v13 = -1073741801;
    WdLogSingleEntry2(6LL, v23, -1073741801LL);
    goto LABEL_145;
  }
  v27 = 4 * v23;
  if ( !is_mul_ok(v23, 4uLL) )
    v27 = -1LL;
  v28 = operator new[](v27, 0x4E506456u, 256LL, v26);
  v29 = 0LL;
  v176 = (unsigned int *)v28;
  v30 = v28;
  if ( !v28 )
  {
    v13 = -1073741801;
    WdLogSingleEntry2(6LL, v23, -1073741801LL);
    goto LABEL_214;
  }
  if ( !v18
    || (v31 = (_QWORD *)*((_QWORD *)v18 + 3), v31 == (_QWORD *)((char *)v18 + 24))
    || (v32 = (DMMVIDPNPRESENTPATH *)(v31 - 1), v168 = (DMMVIDPNPRESENTPATH *)(v31 - 1), v31 == (_QWORD *)8) )
  {
LABEL_70:
    if ( v19 )
    {
      v68 = (_QWORD *)*((_QWORD *)v19 + 3);
      if ( v68 == (_QWORD *)((char *)v19 + 24) )
        v69 = 0LL;
      else
        v69 = (DMMVIDPNPRESENTPATH *)(v68 - 1);
      if ( v69 )
      {
        v70 = v189[1];
        do
        {
          v181 = (unsigned __int64)v29;
          v71 = *((_QWORD *)v69 + 12);
          v72 = *(unsigned int *)(*((_QWORD *)v69 + 11) + 24LL);
          v73 = *(_DWORD *)(*((_QWORD *)v69 + 11) + 24LL);
          v177 = *(DMMVIDEOPRESENTTARGET **)(v71 + 96);
          if ( (unsigned int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v19, v73, &v181) || (v74 = v181) == 0 )
          {
            WdLogSingleEntry0(1LL);
            v74 = v181;
          }
          v75 = v74 != 1;
          v76 = 1 << v72;
          v77 = 1 << v72;
          v170 |= 1 << v72;
          v78 = *((_DWORD *)v177 + 139);
          if ( (v78 & 0x40) != 0 )
            v77 = 0;
          v144 |= v77;
          v143 |= *(_BYTE *)(*((_QWORD *)v177 + 67) + 172LL) != 0 ? v76 : 0;
          if ( (v76 & v151) == 0 )
            v147 |= v76;
          if ( (v78 & 0x100) != 0 && (v145 & 2) == 0 )
          {
            if ( !v70 || DMMVIDPNPRESENTPATH::IsVidPnPathSyncLockMatch(v70, v69) )
            {
              if ( !*((_DWORD *)a8 + 60) )
              {
                v189[1] = v69;
                *((_DWORD *)a8 + 61) = v72;
                v70 = v69;
                *((_DWORD *)a8 + 62) = 1;
                v182 = 0LL;
                DMMVIDPNPRESENTPATH::GetTargetModeRefreshRate(v69, &v182);
                *((_DWORD *)a8 + 63) = 1000000 * (unsigned __int64)v182.Denominator / v182.Numerator;
              }
              *((_DWORD *)a8 + v72 + 40) = *((_DWORD *)a8 + v72 + 40) & 0xFFFFFFF8 | 1;
              *((_DWORD *)a8 + 60) |= v76;
            }
            else
            {
              v145 |= 2u;
              DxgkLogCodePointPacket(0x65u, v72, 1u, v75, *(_QWORD *)(v173 + 404));
            }
          }
          v29 = 0LL;
          if ( !v183 || !DMMVIDPNTOPOLOGY::GetPathFromTarget(v183, *(_DWORD *)(v71 + 24)) )
          {
            v176[v150] = v72;
            v114 = &v154[v150];
            v115.Value = (unsigned int)v29;
            v116 = *(_QWORD *)(v71 + 104);
            ++v150;
            Value = 4;
            if ( v116 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v116 + 96));
              v117 = *(_QWORD *)(v71 + 104);
              v70 = v189[1];
            }
            else
            {
              v117 = (__int64)v29;
            }
            v187 = v117;
            v118 = *(D3DKMDT_WIRE_FORMAT_AND_PREFERENCE **)(v117 + 144);
            if ( v118 )
            {
              v115.0 = v118[33].0;
              Value = v118[34].Value;
            }
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v187, 0LL);
            v119 = *(_DWORD *)(v71 + 24);
            v120 = v177;
            v114->VidPnTargetId = v119;
            v114->InputFlags = v114->InputFlags & 0xFFFFFFFC | 1;
            v114->InputFlags ^= (v114->InputFlags ^ (4 * DMMVIDEOPRESENTTARGET::NeedToBeActive(v120))) & 4;
            v146 |= v76;
            v142 |= v76;
            v121 = v114->InputFlags & 0xFFFFFFF7 | (*((_BYTE *)v120 + 415) == 0 ? 8 : 0);
            v114->InputFlags = v121;
            v122 = v121 ^ (16 * *((_BYTE *)v120 + 416));
            v114->SelectedWireFormat = v115;
            v114->InputFlags = v121 ^ v122 & 0x10;
            v114->OutputColorSpace = Value;
            DMMVIDPNPRESENTPATH::UpdateGammaRamp(v69);
            v29 = 0LL;
            *((_BYTE *)v120 + 413) = 0;
          }
          v79 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v69 + 1);
          v19 = v153;
          v69 = (DMMVIDPNTOPOLOGY *)((char *)v79 - 8);
          if ( v79 == (DMMVIDPNTOPOLOGY *)((char *)v153 + 24) )
            v69 = v29;
        }
        while ( v69 );
      }
      else
      {
        v153 = v19;
      }
      v80 = v142;
      v81 = v19;
      v82 = v145;
      v83 = v144;
      v84 = v147;
      v85 = v143;
    }
    else
    {
      v81 = v18;
      v84 = 0;
      v83 = v144;
      v82 = 0;
      v85 = v143;
      v146 = v15;
      v80 = v142;
      v153 = v18;
      v170 = v151;
      v150 = v14;
    }
    v86 = v173;
    v87 = (unsigned int)v29;
    v88 = *(_QWORD *)(v173 + 2792);
    if ( *(_DWORD *)(v88 + 96) <= (unsigned int)v29 )
    {
LABEL_95:
      if ( a3 == (VIDPN_MGR **)v29 )
      {
        v96 = v154;
      }
      else
      {
        v94 = (unsigned int)v29;
        if ( *(_DWORD *)(v88 + 96) > (unsigned int)v29 )
        {
          do
          {
            v95 = *((_DWORD *)v10 + v94 + 40) & 7;
            if ( (*((_DWORD *)v10 + v94 + 40) & 7) != 0
              && (((1 << (*((_BYTE *)v10 + 4 * v94 + 160) & 7)) & v82) != 0
               || (v140 = *((_DWORD *)v10 + 4 * v95 + 56)) != 0 && ((v140 - 1) & v140) == 0) )
            {
              *((_DWORD *)v10 + v94 + 40) &= 0xFFFFFFF8;
              v82 |= 1 << v95;
              *((_DWORD *)v10 + 4 * v95 + 56) = 0;
              *((_DWORD *)v10 + 4 * v95 + 58) = 0;
            }
            ++v94;
          }
          while ( v94 < *(_DWORD *)(*(_QWORD *)(v86 + 2792) + 96LL) );
        }
        v96 = v154;
        if ( v150 )
        {
          v97 = v176;
          p_InputFlags = &v154->InputFlags;
          v99 = v150;
          do
          {
            v100 = *((_DWORD *)v10 + *v97 + 40) & 7;
            if ( v100 )
            {
              v141 = (32 * v100) | *p_InputFlags & 0xFFFFFF1F;
              *p_InputFlags = v141;
              *p_InputFlags = v141 ^ ((unsigned __int16)v141 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v10 + 4 * v100 + 58) << 8)) & 0xF00;
            }
            ++v97;
            p_InputFlags += 14;
            --v99;
          }
          while ( v99 );
        }
      }
      v161 = ~v155 & v160;
      if ( (v161 & v146) != v161 )
        WdLogSingleEntry0(1LL);
      if ( (v155 & v146) != 0 )
        WdLogSingleEntry0(1LL);
      v159 = ~v146 & v158;
      if ( (v155 & v159) != 0 )
        WdLogSingleEntry0(1LL);
      if ( (v80 & v155) != v155 )
        WdLogSingleEntry0(1LL);
      if ( (v161 & v80) != v161 )
        WdLogSingleEntry0(1LL);
      if ( (v80 & (v146 | v155)) != v80 )
        WdLogSingleEntry0(1LL);
      if ( (v146 & v147) != v147 )
        WdLogSingleEntry0(1LL);
      if ( (v80 & v147) != v147 )
        WdLogSingleEntry0(1LL);
      if ( (v147 & v151) != 0 )
        WdLogSingleEntry0(1LL);
      v101 = v155;
      if ( (v155 & v170) != 0 )
      {
        WdLogSingleEntry0(1LL);
        v101 = v155;
      }
      if ( (v151 | v147) != (v170 | v101) )
        WdLogSingleEntry0(1LL);
      v102 = v164;
      if ( (v170 & v164) != v164 )
      {
        WdLogSingleEntry0(1LL);
        v102 = v164;
      }
      if ( (v102 & v146) != 0 )
        WdLogSingleEntry0(1LL);
      v167 = ~v146 & v166;
      *v194 = v179;
      v103 = v176;
      *a5 = v150;
      *a6 = v96;
      *a7 = v103;
      if ( *(_DWORD *)v10 && *(_DWORD *)v10 != v151 )
        WdLogSingleEntry0(1LL);
      v104 = *((_DWORD *)v10 + 1);
      *(_DWORD *)v10 = v151;
      if ( v104 && v104 != v170 )
        WdLogSingleEntry0(1LL);
      *((_DWORD *)v10 + 10) = v159;
      *((_DWORD *)v10 + 3) = v155;
      *((_DWORD *)v10 + 14) = v161;
      *((_DWORD *)v10 + 5) = v162;
      *((_DWORD *)v10 + 6) = v163;
      *((_DWORD *)v10 + 12) = v167;
      *((_DWORD *)v10 + 13) = v164;
      *((_DWORD *)v10 + 39) = v143;
      *((_DWORD *)v10 + 64) = v172;
      *((_DWORD *)v10 + 1) = v170;
      *((_DWORD *)v10 + 2) = v146;
      *((_DWORD *)v10 + 7) = v80;
      *((_DWORD *)v10 + 4) = v147;
      *((_DWORD *)v10 + 17) = v171;
      *((_DWORD *)v10 + 21) = 0;
      *((_DWORD *)v10 + 18) = 0;
      if ( (a2 & 0x10000) != 0 )
      {
        *((_DWORD *)v10 + 15) = -1;
      }
      else
      {
        v105 = ~(v151 | v170) | v144;
        v106 = v171 | *((_DWORD *)v10 + 15) | v80 | ((v80 & v105) != 0 ? v105 : 0);
        v107 = v146 & v105;
        *((_DWORD *)v10 + 15) = v106;
        if ( (((v146 & v105) - 1) & v146 & v105) != 0 )
        {
          *((_DWORD *)v10 + 15) = v105 | v106;
        }
        else if ( v107 )
        {
          *((_DWORD *)v10 + 15) = v106 | v105 & ~v107;
        }
      }
      FillFailedStatus(v10, 0);
      if ( a9 )
      {
        *a9 = v174;
        v174 = 0LL;
      }
      v13 = 0;
      goto LABEL_143;
    }
    while ( 1 )
    {
      v89 = v83;
      v90 = v84;
      v175 = (unsigned int)v29;
      v91 = v85;
      MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v81, v87, &v175);
      v29 = 0LL;
      if ( MostImportantVidPnPathTargetsFromSource >= 0 )
      {
        if ( v175 != -1 )
        {
          PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v153, v175);
          v110 = DMMVIDEOPRESENTTARGET::NeedToBeActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)PathFromTarget + 12)
                                                                                 + 96LL));
          v80 = v142;
          v29 = 0LL;
          v83 = v144;
          v84 = v147;
          v82 = v145;
          v85 = v143;
          if ( v110 )
            v162 |= 1 << v87;
          goto LABEL_93;
        }
        v80 = v142;
        v83 = v144;
        v84 = v147;
        v85 = v143;
      }
      else if ( MostImportantVidPnPathTargetsFromSource == -1071774919 )
      {
        v142 = v80;
        v147 = v90;
        v144 = v89;
        v145 = v82;
        v143 = v91;
        IsVidPnSourceActive = ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v173 + 2792), v87);
        v29 = 0LL;
        v84 = v90;
        v83 = v89;
        v85 = v91;
        if ( IsVidPnSourceActive )
        {
          v142 = v80;
          v147 = v90;
          v162 |= 1 << v87;
          v144 = v89;
          v145 = v82;
          v143 = v91;
          goto LABEL_93;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        v83 = v144;
        v29 = 0LL;
        v84 = v147;
        v85 = v143;
        v80 = v142;
      }
      v82 = v145;
LABEL_93:
      v86 = v173;
      ++v87;
      v81 = v153;
      v88 = *(_QWORD *)(v173 + 2792);
      if ( v87 >= *(_DWORD *)(v88 + 96) )
      {
        v10 = a8;
        goto LABEL_95;
      }
    }
  }
  while ( 1 )
  {
    v186 = v174;
    v33 = 56LL * v14;
    v34 = *(_DWORD *)(*((_QWORD *)v32 + 11) + 24LL);
    *(_DWORD *)(v30 + 4LL * v14) = v34;
    v35 = *((_QWORD *)v32 + 12);
    v36 = 1 << v34;
    v151 |= 1 << v34;
    v149 = v34;
    v37 = 1 << v34;
    v38 = *(_QWORD *)(v35 + 96);
    v156 = v33;
    v177 = (DMMVIDEOPRESENTTARGET *)v35;
    v178 = v38;
    if ( (*(_BYTE *)(v38 + 556) & 0x40) != 0 )
      v37 = 0;
    v144 |= v37;
    v143 |= *(_BYTE *)(*(_QWORD *)(v38 + 536) + 172LL) != 0 ? v36 : 0;
    v21 = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v38, 0LL) == 13;
    v169 = 4;
    v41 = *(_QWORD *)(v35 + 104);
    v42 = v40;
    v43 = v21;
    v152 = v21;
    if ( v41 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v41 + 96));
      v44 = *(_QWORD *)(v35 + 104);
    }
    else
    {
      v44 = v40;
    }
    v184 = v44;
    v45 = *(_QWORD *)(v44 + 144);
    if ( v45 )
    {
      v42 = *(_DWORD *)(v45 + 132);
      v169 = *(_DWORD *)(v45 + 136);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v184, v39);
    if ( v153 )
      break;
    v111 = *(_DWORD *)(v35 + 24);
    v63 = v156;
    *(UINT *)((char *)&v154->InputFlags + v156) &= 0xFFFFFFFC;
    *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v154->VidPnTargetId + v156) = v111;
    *(UINT *)((char *)&v154->InputFlags + v156) ^= (*(UINT *)((char *)&v154->InputFlags + v156) ^ (4
                                                                                                 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v38))) & 4;
    v112 = *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFF7 | (*(_BYTE *)(v38 + 415) == 0 ? 8 : 0);
    *(UINT *)((char *)&v154->InputFlags + v156) = v112;
    v113 = v112 ^ (16 * *(_BYTE *)(v38 + 416));
    *(UINT *)((char *)&v154->SelectedWireFormat.Value + v156) = v42;
    *(UINT *)((char *)&v154->InputFlags + v156) = v112 ^ v113 & 0x10;
    *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v154->OutputColorSpace + v156) = v169;
    if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v38) == 0) != (*(_BYTE *)(v38 + 418) == 0) )
    {
      v163 |= v36;
      v21 = !v43;
      v64 = v149;
      if ( !v21 )
        *(UINT *)((char *)&v154->InputFlags + v156) = *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFFC | 1;
      goto LABEL_63;
    }
    if ( v43
      || (a2 & 0x4000) != 0
      || ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*(DXGADAPTER ***)(v173 + 2792), v149)
      || *(_BYTE *)(v38 + 414) )
    {
      v15 |= v36;
      *(UINT *)((char *)&v154->InputFlags + v156) = *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFFC | (!v43 + 1);
      v146 = v15;
    }
LABEL_62:
    v64 = v149;
LABEL_63:
    v19 = v153;
LABEL_64:
    v29 = 0LL;
LABEL_65:
    v65 = *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v154->OutputColorSpace + v63);
    if ( v65 == 12 || (v21 = v65 == 32, v66 = 0, v21) )
      v66 = 1;
    v18 = v183;
    v172 |= v66 << v64;
    v67 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v168 + 1);
    v32 = (DMMVIDPNTOPOLOGY *)((char *)v67 - 8);
    if ( v67 == (DMMVIDPNTOPOLOGY *)((char *)v183 + 24) )
      v32 = 0LL;
    v14 = v150 + 1;
    v168 = v32;
    ++v150;
    if ( !v32 )
      goto LABEL_70;
    v30 = (__int64)v176;
  }
  v165 = !v43 + 1;
  v46 = DMMVIDPNTOPOLOGY::GetPathFromTarget(v153, *(_DWORD *)(*((_QWORD *)v168 + 12) + 24LL));
  v157 = 4;
  v48 = v46;
  v49 = 0;
  if ( !v46 )
    goto LABEL_187;
  v50 = *((_QWORD *)v46 + 12);
  v51 = *(_QWORD *)(v50 + 104);
  if ( v51 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v51 + 96));
    v52 = *(_QWORD *)(v50 + 104);
  }
  else
  {
    v52 = 0LL;
  }
  v185 = v52;
  v53 = *(_QWORD *)(v52 + 144);
  if ( v53 )
  {
    v49 = *(_DWORD *)(v53 + 132);
    v157 = *(_DWORD *)(v53 + 136);
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v185, 0LL);
  if ( *(_DWORD *)(*((_QWORD *)v48 + 11) + 24LL) == v149 )
  {
    v54 = *((_DWORD *)v177 + 6);
    *(UINT *)((char *)&v154->InputFlags + v156) &= 0xFFFFFFFC;
    *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v154->VidPnTargetId + v156) = v54;
    *(UINT *)((char *)&v154->InputFlags + v156) ^= (*(UINT *)((char *)&v154->InputFlags + v156) ^ (4
                                                                                                 * DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v38))) & 4;
    v55 = *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFF7 | (*(_BYTE *)(v38 + 415) == 0 ? 8 : 0);
    *(UINT *)((char *)&v154->InputFlags + v156) = v55;
    v56 = v55 ^ (16 * *(_BYTE *)(v38 + 416));
    *(UINT *)((char *)&v154->SelectedWireFormat.Value + v156) = v49;
    *(UINT *)((char *)&v154->InputFlags + v156) = v55 ^ v56 & 0x10;
    *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v154->OutputColorSpace + v156) = v157;
    if ( (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v38, 0LL) == 13 )
    {
      v15 |= v36;
      v146 = v15;
    }
    if ( (DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v38) == 0) != (*(_BYTE *)(v38 + 418) == 0) )
      v163 |= v36;
    if ( *(_BYTE *)(v173 + 2625) && (a2 & 0x400000) != 0 )
    {
      v57 = (DXGADAPTER ***)(v173 + 2792);
    }
    else
    {
      v57 = (DXGADAPTER ***)(v173 + 2792);
      if ( !*(_BYTE *)(*(_QWORD *)(v173 + 2792) + 289LL) )
        goto LABEL_162;
    }
    v148 = 1;
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwnerDwm(*v57, v149) )
    {
LABEL_42:
      if ( v152 || (a2 & 0x4000) != 0 )
      {
        v59 = v178;
      }
      else
      {
        v58 = ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(*v57, v149);
        v59 = v178;
        if ( !v58
          && !*(_BYTE *)(v178 + 414)
          && !*(_BYTE *)(v178 + 420)
          && DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(v168, v48, v148) )
        {
          if ( v42 == v49 && v169 == v157 )
          {
            v60 = v168;
            if ( *((_DWORD *)v168 + 29) != *((_DWORD *)v48 + 29) )
            {
              v158 |= v36;
              goto LABEL_52;
            }
            if ( !*((_BYTE *)this + 520) )
            {
LABEL_52:
              if ( (v36 & v15) != 0 )
              {
                v62 = v168;
              }
              else
              {
                IsVidPnVirtualRefreshRateMatch = DMMVIDPNPRESENTPATH::IsVidPnVirtualRefreshRateMatch(v60, v48);
                v62 = v168;
                if ( IsVidPnVirtualRefreshRateMatch )
                {
                  if ( *((_DWORD *)v168 + 26) != *((_DWORD *)v48 + 26) || *((_WORD *)v168 + 54) != *((_WORD *)v48 + 54) )
                    v166 |= v36;
                }
                else
                {
                  v164 |= v36;
                }
              }
              if ( *(_BYTE *)(v59 + 413) )
              {
                v171 |= v36;
                *(_BYTE *)(v59 + 413) = 0;
              }
              if ( v42 == v49 && v169 == v157 )
                DMMVIDPNPRESENTPATH::SetGammaRamp(v48, *((const struct DXGK_GAMMA_RAMP **)v62 + 23));
              else
                DMMVIDPNPRESENTPATH::UpdateGammaRamp(v48);
              v63 = v156;
              goto LABEL_62;
            }
LABEL_166:
            v15 |= v36;
            v146 = v15;
            goto LABEL_52;
          }
LABEL_165:
          v60 = v168;
          goto LABEL_166;
        }
      }
      *(UINT *)((char *)&v154->InputFlags + v156) = v165 | *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFFC;
      goto LABEL_165;
    }
LABEL_162:
    v148 = 0;
    goto LABEL_42;
  }
  v47 = v165;
LABEL_187:
  v123 = v156;
  v124 = v154;
  v125 = v177;
  *(D3DDDI_VIDEO_PRESENT_TARGET_ID *)((char *)&v154->VidPnTargetId + v156) = *((_DWORD *)v177 + 6);
  if ( !v48 )
    v47 = 3;
  v126 = v47 | *(UINT *)((_BYTE *)&v154->InputFlags + v156) & 0xFFFFFFFC;
  *(UINT *)((char *)&v154->InputFlags + v156) = v126;
  if ( v48 )
  {
    v128 = DMMVIDEOPRESENTTARGET::NeedToBeActive((DMMVIDEOPRESENTTARGET *)v38);
    v123 = v156;
    v124 = v154;
    v127 = v128;
    v126 = *(UINT *)((char *)&v154->InputFlags + v156);
  }
  else
  {
    v127 = 0;
  }
  v129 = v126 ^ ((unsigned __int8)v126 ^ (unsigned __int8)(4 * v127)) & 4;
  *(UINT *)((char *)&v124->InputFlags + v123) = v129;
  v130 = v129 & 0xFFFFFFF7 | (*(_BYTE *)(v38 + 415) == 0 ? 8 : 0);
  *(UINT *)((char *)&v124->InputFlags + v123) = v130;
  v131 = v130 ^ (16 * *(_BYTE *)(v38 + 416));
  *(UINT *)((char *)&v124->SelectedWireFormat.Value + v123) = v49;
  v132 = v130 ^ v131 & 0x10;
  v133 = v36 | v142;
  *(UINT *)((char *)&v124->InputFlags + v123) = v132;
  *(D3DDDI_COLOR_SPACE_TYPE *)((char *)&v124->OutputColorSpace + v123) = v157;
  v142 |= v36;
  if ( v48 )
  {
    v134 = *(_DWORD *)(*((_QWORD *)v48 + 11) + 24LL);
    v15 |= 1 << v134;
    v176[v150] = v134;
    v146 = v15;
    v142 = (1 << v134) | v133;
    DMMVIDPNPRESENTPATH::UpdateGammaRamp(v48);
  }
  v19 = v153;
  v180 = 0LL;
  v64 = v149;
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v153, v149, &v180);
  v29 = 0LL;
  if ( NumPathsFromSource < 0 )
  {
    if ( NumPathsFromSource == -1071774919 && !v180 )
    {
LABEL_203:
      v155 |= v36;
LABEL_205:
      v63 = v156;
      goto LABEL_65;
    }
    WdLogSingleEntry0(1LL);
    v29 = 0LL;
  }
  if ( !v180 )
    goto LABEL_203;
  v160 |= v36;
  v15 |= v36;
  v146 = v15;
  if ( !a9 )
  {
    v174 = v186;
    v137 = v186;
    if ( !v186 )
      goto LABEL_205;
    goto LABEL_207;
  }
  v137 = v174;
  if ( v174 )
  {
LABEL_207:
    for ( i = 0; i < 0x10; ++i )
    {
      if ( v137[16 * v149 + i] == -1 )
      {
        v137[16 * v149 + i] = *((_DWORD *)v125 + 6);
        goto LABEL_205;
      }
    }
    WdLogSingleEntry0(1LL);
    v63 = v156;
    goto LABEL_64;
  }
  v138 = (unsigned int *)operator new[](0x400uLL, 0x4E506456u, 256LL, v136);
  v174 = v138;
  v137 = v138;
  if ( v138 )
  {
    memset(v138, -1, 0x400uLL);
    v29 = 0LL;
    goto LABEL_207;
  }
  v13 = -1073741801;
  WdLogSingleEntry3(6LL, *(int *)(v173 + 408), *(unsigned int *)(v173 + 404), -1073741801LL);
LABEL_214:
  operator delete[](v154);
LABEL_143:
  if ( v174 )
    operator delete[](v174);
LABEL_145:
  auto_rc<DMMVIDPN const>::reset(&v188, 0LL);
  return v13;
}
