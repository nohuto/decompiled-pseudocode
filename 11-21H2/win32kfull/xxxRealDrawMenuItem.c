/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C0248CAC
 * Callers:
 *     xxxDrawState @ 0x1C024DD1C (xxxDrawState.c)
 * Callees:
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0023360 (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GreCreateDIBitmapReal @ 0x1C002BC78 (GreCreateDIBitmapReal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     xxxGetWindowSmIcon @ 0x1C0085264 (xxxGetWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00BE738 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00C1F98 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00C37D8 (PrepareHDCBITSBitmap.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0239A8C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0246DE4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02475D8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C024DBD4 (BltColor.c)
 *     xxxPSMTextOut @ 0x1C0250058 (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025AE7C (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025D454 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  bool v17; // zf
  int DpiForSystem; // eax
  int v19; // r8d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rbx
  int v29; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v31; // rax
  unsigned __int64 *v32; // rbx
  __int64 WindowSmIcon; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // ecx
  unsigned int v38; // r14d
  unsigned int v39; // r8d
  __int64 v40; // rax
  int v41; // r13d
  int DpiDependentMetric; // r14d
  int v43; // ebx
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // eax
  int ObjectW; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  LONG v52; // r11d
  __int64 v53; // r12
  __int64 v54; // r15
  HDC CompatibleDC; // rbx
  __int64 v56; // rax
  unsigned __int8 *v57; // r9
  __int64 v58; // r10
  unsigned int v59; // r8d
  int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r9
  _WORD *v65; // r15
  int v66; // ebx
  __int64 DPIMetrics; // rax
  __int64 v68; // r10
  __int64 v69; // rdx
  int v70; // r8d
  int v71; // eax
  unsigned int CharPosition; // r12d
  unsigned int v73; // r11d
  int v74; // eax
  __int64 v75; // r10
  int v76; // r13d
  int v77; // r14d
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  char *v81; // rax
  __int64 v82; // r9
  int v83; // r13d
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // esi
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // r14
  HDC v90; // r15
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r9
  int v94; // ebx
  int v95; // eax
  __int16 *v96; // rbx
  int v97; // r11d
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r9
  __int64 v101; // rcx
  int v102; // ebx
  __int64 v103; // rcx
  unsigned int v105; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+80h] [rbp-80h]
  int v108; // [rsp+80h] [rbp-80h]
  int v110; // [rsp+88h] [rbp-78h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v112; // [rsp+90h] [rbp-70h] BYREF
  BOOL v113; // [rsp+98h] [rbp-68h]
  __int64 v114; // [rsp+A0h] [rbp-60h]
  __int64 *v115[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-48h]
  __int128 v117; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v118; // [rsp+D0h] [rbp-30h]
  _OWORD v119[3]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v120[28]; // [rsp+110h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v115, 0LL);
  v9 = *a2;
  v116 = 0LL;
  v118 = 0LL;
  v10 = 0;
  v113 = 0;
  v117 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v115, v9);
  v11 = a2[1];
  v12 = *(_QWORD *)(*v115[0] + 40);
  v13 = *(_DWORD *)(v12 + 40) & 1;
  v105 = *(_DWORD *)(v12 + 40) & 1;
  if ( v105 )
  {
    v14 = 2;
    v15 = *v115[0];
    if ( *(int *)(*(_QWORD *)(*v115[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v16 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v17 = *(_QWORD *)(v16 + 24) == 0LL;
        else
          v17 = *(_QWORD *)(v16 + 32) == 0LL;
        LOBYTE(v10) = !v17;
      }
      else
      {
        v10 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v11);
      }
      v15 = *(_QWORD *)(*v115[0] + 40);
      if ( (*(_DWORD *)(v15 + 40) & 0x4000000) == 0
        || (v15 = *(_QWORD *)v11, !*(_QWORD *)(*(_QWORD *)v11 + 96LL))
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v14 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v15, *v115[0]);
          v14 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
        }
      }
      v13 = v105;
    }
    else
    {
      v14 = 4;
    }
  }
  else
  {
    v14 = 0;
    v15 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v15 != -2147352576 )
      v113 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_101;
  if ( v10 )
  {
    v15 = *v115[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_101;
  }
  if ( a5 )
    goto LABEL_63;
  v15 = *(_QWORD *)v11;
  v19 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v20 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v19 & 0x20000000) != 0 )
  {
    if ( v20 == 1 )
      goto LABEL_51;
    v21 = v14;
    if ( v20 > 7 )
      goto LABEL_39;
    v22 = v20 - 2;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v26 = 21;
            goto LABEL_38;
          }
          if ( v25 == 1 )
          {
            v26 = 25;
            v21 = v14 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v21, 2, v26, 1);
LABEL_101:
            v38 = v105;
            goto LABEL_102;
          }
LABEL_39:
          if ( PrepareHDCBITSBitmap(0LL, v14) )
          {
            v28 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v29 = GetDpiForSystem(*(_QWORD *)v11, v27);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v28 + 79), v29);
            BltColor(
              a1,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_101;
        }
        v26 = 18;
      }
      else
      {
        v26 = 22;
        v21 = v14 + 2;
      }
    }
    else
    {
      v26 = 26;
    }
    if ( (v19 & 0x80u) != 0 )
      ++v26;
    goto LABEL_38;
  }
  if ( v20 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, v115, v11, 1, v14, 0LL);
    goto LABEL_101;
  }
  if ( *(_WORD *)(gptiCurrent + 632LL) > 0x400u
    || (!*(_QWORD *)(v15 + 56) || *(_QWORD *)(v11 + 24))
    && ((_DWORD)v13
     || (v15 = *v115[0], v11 != *(_QWORD *)(*v115[0] + 88))
     || (v15 = *v115[0], *(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 44LL) <= 1u)
     || (v15 = *(_QWORD *)(*(_QWORD *)(*v115[0] + 88) + 96LL), *(_QWORD *)(v15 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v40 = *(_QWORD *)v11;
    v41 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( (_DWORD)v13 )
    {
      v43 = (*(_DWORD *)(v40 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v40 + 76) - DpiDependentMetric <= 0 )
        v43 = 0;
      v110 = v43;
    }
    else
    {
      v44 = GetDpiForSystem(v15, v13);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v44) )
      {
        v47 = GetDpiForSystem(v46, v45);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v47);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v43 = 0;
      v110 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v14 += *(_DWORD *)(GetDPIMetrics(0LL, v45) + 8);
    }
    v114 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v114 )
      goto LABEL_101;
    memset(v120, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v120);
    v52 = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v120[11]) != 32 || v120[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v120[4]) * HIWORD(v120[4]) == 1 )
          v60 = 12060490;
        else
          v60 = (unsigned int)MNDrawHilite((__int64)v115, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v113 + v14, v113 + v43, v41, DpiDependentMetric, ghdcMem2, v52, v52, v60, 0xFFFFFF, v52);
      }
      goto LABEL_100;
    }
    v53 = 0LL;
    v107 = 33488896;
    v54 = 0LL;
    if ( a6 )
    {
      v112 = 0LL;
      memset(v119, 0, 44);
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v49, v50, v51);
      if ( !CompatibleDC )
        goto LABEL_87;
      memset((char *)&v119[1] + 4, 0, 24);
      LODWORD(v119[0]) = 40;
      *(_QWORD *)((char *)v119 + 4) = __PAIR64__(DpiDependentMetric, v41);
      *(_QWORD *)((char *)v119 + 12) = 2097153LL;
      v56 = GreCreateDIBitmapReal(CompatibleDC, 0LL, 0LL, (unsigned int *)v119, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v112);
      v53 = v56;
      if ( v56 )
      {
        v54 = GreSelectBitmap(CompatibleDC, v56);
        if ( v54 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            v41,
            DpiDependentMetric,
            ghdcMem2,
            0,
            0,
            v41,
            DpiDependentMetric,
            33488896);
          if ( v41 * DpiDependentMetric > 0 )
          {
            v57 = v112;
            v58 = (unsigned int)(v41 * DpiDependentMetric);
            do
            {
              v59 = (29 * v57[2] + 150 * v57[1] + 77 * (unsigned int)*v57 + 129) >> 8;
              *(_DWORD *)v57 = v59 | ((v59 | ((v59 | (v57[3] << 8)) << 8)) << 8);
              v57 = v112 + 4;
              v112 += 4;
              --v58;
            }
            while ( v58 );
          }
          BYTE2(v107) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = (HDC)ghdcMem2;
      if ( !ghdcMem2 )
        goto LABEL_85;
    }
    NtGdiAlphaBlend(
      a1,
      v113 + v14,
      v113 + v110,
      v41,
      DpiDependentMetric,
      CompatibleDC,
      0,
      0,
      v41,
      DpiDependentMetric,
      v107);
LABEL_85:
    if ( !a6 )
    {
LABEL_100:
      GreSelectBitmap(ghdcMem2, v114);
      goto LABEL_101;
    }
    if ( v54 == -1 )
    {
LABEL_88:
      if ( v53 )
      {
        GreDecBitmapExclusiveRefCnt(v53, v49);
        GreDeleteObject(v53);
      }
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      goto LABEL_100;
    }
LABEL_87:
    GreSelectBitmap(CompatibleDC, v54);
    goto LABEL_88;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v115[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v115, (_QWORD *)v11);
    v31 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    v32 = (unsigned __int64 *)v31;
    if ( v31 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadLock(v31, (__int64 *)&v117);
  WindowSmIcon = xxxGetWindowSmIcon(v32, 0);
  ThreadUnlock1(v35, v34, v36);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C032CB00;
LABEL_59:
  v37 = a3 - 4;
  v38 = v105;
  v39 = a4 - 2;
  if ( v105 && v39 < v37 )
    v37 = a4 - 2;
  DrawIconEx(a1, v14 + 4, 1, WindowSmIcon, v37, v39, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_102:
  v61 = v116;
  if ( !v116 )
    v61 = *v115[0];
  if ( (unsigned int)MNGetpItemIndex(v61, v11) == -1 )
    goto LABEL_146;
  if ( a5 != (_DWORD)v64 )
    goto LABEL_146;
  v65 = *(_WORD **)(v11 + 24);
  if ( !v65 )
    goto LABEL_146;
  v66 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v66 )
    goto LABEL_146;
  v111 = *(_QWORD *)(v11 + 88);
  if ( !v38 || (v63 = *v115[0], *(_DWORD *)(*v115[0] + 72) == (_DWORD)v64) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v64 )
      v14 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v63 = *v115[0];
    v14 = *(_DWORD *)(*v115[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v63, v62);
  v68 = *(_QWORD *)v11;
  v69 = DPIMetrics;
  v112 = (unsigned __int8 *)DPIMetrics;
  v70 = *(_DWORD *)(DPIMetrics + 20);
  v108 = v70;
  v71 = *(_DWORD *)(v68 + 76) - *(_DWORD *)(DPIMetrics + 12) - v70 - 1;
  if ( v71 > 0 )
  {
    v69 = (__int64)v112;
    v108 = v71 / 2 + v70;
  }
  if ( !v38 && !*(_QWORD *)(v68 + 96) )
    v14 += *(_DWORD *)(v69 + 8);
  if ( *v65 == 8 && !v38 )
  {
    ++v65;
    if ( !--v66 )
      goto LABEL_146;
  }
  CharPosition = FindCharPosition(v65, 9LL);
  v74 = FindCharPosition(v65, v73);
  v76 = *(_DWORD *)(v75 + 72);
  v77 = v74;
  v80 = GetDpiForSystem(v79, v78);
  v81 = GetOemBitmapInfoForDpi(63LL, v80);
  v82 = 0LL;
  v83 = v76 - *((__int16 *)v81 + 2) - 2;
  if ( !v77 || v77 == v66 )
  {
    if ( CharPosition && v77 == v66 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v114 = 0LL;
        xxxPSMGetTextExtent(a1);
        v99 = v116;
        if ( !v116 )
          v99 = *v115[0];
        if ( (unsigned int)MNGetpItemIndex(v99, v11) == -1 )
          goto LABEL_146;
        v89 = v111;
        if ( v111 != *(_QWORD *)(v11 + 88) )
          goto LABEL_146;
        v14 = v83 - v114;
        if ( v105 == (_DWORD)v100 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v100 )
          v14 += *((_DWORD *)v112 + 2);
      }
      else
      {
        v89 = v111;
      }
      xxxDrawMenuItemText(
        v115,
        v11,
        a1,
        v113 + v14,
        v113 + v108,
        (__int64)v65,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 40LL) & 4);
      v101 = v116;
      if ( !v116 )
        v101 = *v115[0];
      if ( (unsigned int)MNGetpItemIndex(v101, v11) == -1 || v89 != *(_QWORD *)(v11 + 88) )
        goto LABEL_146;
      goto LABEL_175;
    }
LABEL_174:
    v89 = v111;
    goto LABEL_175;
  }
  if ( (**(_DWORD **)v11 & 0x2000) != 0 && v105 )
  {
    v114 = 0LL;
    xxxPSMGetTextExtent(a1);
    v84 = v116;
    if ( !v116 )
      v84 = *v115[0];
    if ( (unsigned int)MNGetpItemIndex(v84, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
      goto LABEL_146;
    v14 = v83 - v114;
  }
  xxxDrawMenuItemText(
    v115,
    v11,
    a1,
    v113 + v14,
    v113 + v108,
    (__int64)v65,
    v77,
    *(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 40LL) & 4);
  v85 = v116;
  if ( !v116 )
    v85 = *v115[0];
  if ( (unsigned int)MNGetpItemIndex(v85, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
    goto LABEL_146;
  if ( CharPosition <= v77 + 1 )
    goto LABEL_174;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v105 == (_DWORD)v82 )
  {
    v114 = v82;
    v86 = CharPosition - v77;
    xxxPSMGetTextExtent(a1);
    v87 = v116;
    if ( !v116 )
      v87 = *v115[0];
    if ( (unsigned int)MNGetpItemIndex(v87, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
      goto LABEL_146;
  }
  else
  {
    v86 = CharPosition - v77;
  }
  xxxPSMTextOut(a1, v86 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 40LL) << 18) & 0x100000);
  v88 = v116;
  if ( !v116 )
    v88 = *v115[0];
  if ( (unsigned int)MNGetpItemIndex(v88, v11) == -1 || (v89 = v111, v111 != *(_QWORD *)(v11 + 88)) )
  {
LABEL_146:
    v90 = a1;
    goto LABEL_147;
  }
LABEL_175:
  if ( CharPosition >= v66 - 1 )
    goto LABEL_146;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v105 == (_DWORD)v82 )
  {
    v102 = v66 - CharPosition;
  }
  else
  {
    v114 = v82;
    v102 = v66 - CharPosition;
    xxxPSMGetTextExtent(a1);
    v103 = v116;
    if ( !v116 )
      v103 = *v115[0];
    if ( (unsigned int)MNGetpItemIndex(v103, v11) == -1 || v89 != *(_QWORD *)(v11 + 88) )
      goto LABEL_146;
  }
  v90 = a1;
  xxxPSMTextOut(a1, v102 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v115[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_147:
  v91 = v116;
  if ( !v116 )
    v91 = *v115[0];
  if ( (unsigned int)MNGetpItemIndex(v91, v11) != -1
    && a5 == (_DWORD)v93
    && v105 != (_DWORD)v93
    && *(_QWORD *)(v11 + 16) != v93 )
  {
    v94 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v95 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000), v92);
    v96 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v94 + 62), v95);
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= v96[3] )
    {
      if ( PrepareHDCBITSBitmap(0LL, *(_QWORD *)v11) )
      {
        v97 = v96[3];
        v98 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v97 - 2) / 2;
        if ( v98 <= 0 )
          v98 = 0;
        BltColor(v90, v98, v96[2], v97, *v96, v96[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v115);
  return 1LL;
}
