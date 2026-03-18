/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 * Callees:
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C003120C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C003284C (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0032864 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0034674 (PhysicalToLogicalInPlaceRect.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C00A4994 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00D1BD4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00D1C18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00D1E30 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C00DAC74 (-bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C01A7EE8 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01B9860 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01B995C (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *a1, HRGN *a2, int a3)
{
  __int64 right; // rdx
  struct tagWND *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  int v10; // r15d
  char *v11; // r9
  int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r8
  LONG v16; // ecx
  LONG v17; // eax
  int top; // ecx
  LONG v19; // eax
  struct tagWND *v20; // r13
  HRGN v21; // rsi
  HRGN v22; // r8
  _QWORD *v23; // rbx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  char *v31; // r14
  unsigned __int16 v32; // bx
  __int64 v33; // rbx
  __int64 v34; // r8
  char *v35; // r15
  HRGN v36; // r14
  LONG left; // edx
  LONG v38; // ecx
  LONG v39; // edx
  LONG bottom; // ecx
  int v41; // ebx
  int v42; // ebx
  struct tagWND *v43; // rax
  LONG v44; // ecx
  LONG v45; // edx
  int v46; // ecx
  struct tagWND *v47; // r12
  int v48; // esi
  int v49; // ecx
  int v50; // r15d
  struct tagWND *v51; // r13
  int v52; // eax
  struct tagWND *v53; // rdi
  int v54; // r14d
  LONG *v55; // rbx
  unsigned int v56; // eax
  bool v57; // zf
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  char v61; // cl
  HRGN v62; // r12
  __int64 v63; // rdi
  int v64; // r14d
  LONG *v65; // rbx
  unsigned int v66; // eax
  bool v67; // zf
  __int64 v68; // rcx
  int v69; // eax
  int v70; // r14d
  int v71; // r13d
  struct _RECTL *v72; // rbx
  const struct tagWND **v73; // rdi
  struct _RECTL *v74; // r15
  __int64 v75; // r12
  const struct tagWND **v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // r10
  struct _RECTL *v79; // rbx
  HRGN *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  HRGN EmptyRgn; // r15
  __int64 i; // rbx
  const struct tagWND **v87; // rdi
  __int64 v88; // r9
  HRGN v89; // rdi
  HRGN v90; // rsi
  HRGN *v91; // rbx
  __int64 v92; // r8
  int v93; // r15d
  const struct tagWND *v94; // r13
  struct tagWND *v95; // r9
  const struct tagWND *v96; // rbx
  struct tagWND *v97; // r12
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r9
  struct tagWND *v101; // rdi
  int v102; // esi
  struct tagWND *v103; // r14
  BOOL v104; // edi
  unsigned int v105; // ebx
  int v107; // [rsp+38h] [rbp-D0h]
  char *v108; // [rsp+40h] [rbp-C8h]
  struct tagWND *v109; // [rsp+48h] [rbp-C0h] BYREF
  HRGN v110; // [rsp+50h] [rbp-B8h]
  __int64 v111; // [rsp+58h] [rbp-B0h]
  HRGN v112; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v113; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v114; // [rsp+78h] [rbp-90h]
  HRGN *v115; // [rsp+80h] [rbp-88h]
  __int128 v116; // [rsp+88h] [rbp-80h] BYREF
  __int128 v117; // [rsp+98h] [rbp-70h]
  HRGN v118; // [rsp+A8h] [rbp-60h]
  struct _RECTL *v119; // [rsp+B0h] [rbp-58h]
  _QWORD *v120; // [rsp+B8h] [rbp-50h]
  __int64 v121; // [rsp+C0h] [rbp-48h] BYREF
  char v122[40]; // [rsp+C8h] [rbp-40h] BYREF
  int v123; // [rsp+F0h] [rbp-18h]
  __int64 v124; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v125; // [rsp+108h] [rbp+0h] BYREF
  struct _RECTL v126; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v127[240]; // [rsp+128h] [rbp+20h] BYREF
  struct _RECTL v128; // [rsp+218h] [rbp+110h] BYREF

  LODWORD(v111) = a3;
  v115 = a2;
  v109 = a1;
  v126 = 0LL;
  LODWORD(v114) = 0;
  memset_0(v127, 0, sizeof(v127));
  v4 = v109;
  v110 = 0LL;
  v116 = 0LL;
  v118 = 0LL;
  v5 = *((_QWORD *)v109 + 13);
  v117 = 0LL;
  if ( v5 )
  {
    v6 = *((_QWORD *)v109 + 3);
    if ( !v6 || (v7 = *(_QWORD *)(v6 + 8)) == 0 || v5 != *(_QWORD *)(v7 + 24) )
    {
      v8 = (char *)v109 + 40;
      v108 = (char *)v109 + 40;
      right = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 288LL) >> 8;
      LOWORD(right) = (*(_DWORD *)(*((_QWORD *)v109 + 5) + 288LL) >> 8) ^ right;
      if ( (right & 0x1FF) != 0 )
      {
        WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v109);
        if ( WindowCoordinateSpaceDpi == GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v109 + 13)) )
        {
          v10 = 0;
          v14 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v8 + 256LL));
          v107 = 0;
          if ( !v14 )
            goto LABEL_8;
          v15 = *(_DWORD *)(*(_QWORD *)v8 + 288LL) >> 8;
          LOWORD(v15) = v15 & 0x1FF;
          GetMonitorRectForDpi(&v124, v14, v15);
          if ( *(_QWORD *)(*(_QWORD *)(v14 + 40) + 28LL) == v124 )
          {
            v107 = 0;
            goto LABEL_8;
          }
        }
        v10 = 1;
        v107 = 1;
LABEL_8:
        v4 = v109;
        v11 = (char *)v109 + 40;
        goto LABEL_9;
      }
    }
  }
  v10 = 0;
  v11 = (char *)v109 + 40;
  v108 = (char *)v109 + 40;
  v107 = 0;
LABEL_9:
  v12 = v111;
  v13 = *(_QWORD *)v11;
  if ( (v111 & 1) != 0 )
  {
    v126 = *(struct _RECTL *)(v13 + 88);
  }
  else
  {
    v126 = *(struct _RECTL *)(v13 + 104);
    right = (unsigned int)v126.right;
    v16 = _mm_cvtsi128_si32((__m128i)v126);
    if ( v16 <= *(_DWORD *)(v13 + 88) )
      v16 = *(_DWORD *)(v13 + 88);
    v126.left = v16;
    v17 = *(_DWORD *)(v13 + 96);
    if ( v126.right >= v17 )
      right = (unsigned int)v17;
    v126.right = right;
    if ( v16 >= (int)right )
      goto LABEL_25;
    top = v126.top;
    right = (unsigned int)v126.bottom;
    if ( v126.top <= *(_DWORD *)(v13 + 92) )
      top = *(_DWORD *)(v13 + 92);
    v126.top = top;
    v19 = *(_DWORD *)(v13 + 100);
    if ( v126.bottom >= v19 )
      right = (unsigned int)v19;
    v126.bottom = right;
    if ( top >= (int)right )
LABEL_25:
      v126 = 0LL;
  }
  v20 = v4;
  v21 = (HRGN)*((_QWORD *)v4 + 13);
  v22 = *(HRGN *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL) + 24LL);
  v112 = v22;
  v23 = (_QWORD *)*((_QWORD *)v22 + 13);
  v120 = v23;
  if ( !v21 )
  {
LABEL_241:
    v62 = v110;
LABEL_242:
    SetOrCreateRectRgnIndirectPublic(v115, gZero);
    v105 = 0;
    goto LABEL_243;
  }
  if ( v21 != (HRGN)v23 )
  {
    while ( 1 )
    {
      if ( *((_QWORD **)v21 + 13) == v23 && (*(_WORD *)(*((_QWORD *)v21 + 5) + 42LL) & 0x2FFF) != 0x29D )
        goto LABEL_241;
      if ( (v12 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v21 + 5) + 42LL) & 0x2FFF) == 0x29D )
        goto LABEL_93;
      if ( (v12 & 0x4000) != 0 )
      {
        v24 = *(_DWORD *)(*((_QWORD *)v20 + 5) + 24LL);
        if ( ((v24 & 0x80000) != 0 || (v24 & 0x20000000) != 0) && ((v24 & 0x2000000) == 0 || v21 == v22) )
          goto LABEL_93;
      }
      if ( (v12 & 0x8000000) != 0 && (*(_WORD *)(*((_QWORD *)v21 + 5) + 42LL) & 0x2FFF) == 0x29D )
      {
        v25 = IsWindowDesktopComposed(v21);
        v11 = v108;
        v4 = v109;
        if ( v25 )
        {
          v22 = v112;
          LOWORD(v12) = v111;
          goto LABEL_93;
        }
      }
      v26 = v114;
      v27 = *((_QWORD *)v21 + 5);
      if ( *(_QWORD *)(v27 + 168) )
        v26 = 1;
      LODWORD(v114) = v26;
      if ( v10 )
        goto LABEL_70;
      v28 = *((_QWORD *)v21 + 13);
      if ( !v28
        || (v29 = *((_QWORD *)v21 + 3)) != 0 && (v30 = *(_QWORD *)(v29 + 8)) != 0 && v28 == *(_QWORD *)(v30 + 24)
        || (v31 = v11,
            (((unsigned __int16)(*(_DWORD *)(v27 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v28 + 40)
                                                                                             + 288LL) >> 8)) & 0x1FF) == 0) )
      {
        v35 = (char *)v4 + 224;
        v113 = *(_OWORD *)(v27 + 104);
        goto LABEL_54;
      }
      v32 = GetWindowCoordinateSpaceDpi((const struct tagWND *)v21);
      if ( v32 != GetWindowCoordinateSpaceDpi(*((const struct tagWND **)v21 + 13)) )
        goto LABEL_68;
      v108 = v31;
      v33 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v21 + 5) + 256LL));
      if ( !v33 )
      {
LABEL_70:
        v42 = 0;
        v43 = v109;
        v113 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 104LL);
        v35 = (char *)v109 + 224;
        if ( v107 )
          goto LABEL_71;
      }
      else
      {
        v34 = *(_DWORD *)(*((_QWORD *)v21 + 5) + 288LL) >> 8;
        LOWORD(v34) = v34 & 0x1FF;
        GetMonitorRectForDpi(&v125, v33, v34);
        if ( *(_QWORD *)(*(_QWORD *)(v33 + 40) + 28LL) != v125 )
        {
LABEL_68:
          v42 = 0;
          v107 = 1;
          v108 = v31;
          v43 = v109;
          v113 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 104LL);
          v35 = (char *)v109 + 224;
LABEL_71:
          v36 = v21 + 56;
          if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v113, v21 + 56, v21, &v126, v35, v43) )
          {
            v42 = 1;
          }
          else
          {
            LogicalToPhysicalInPlaceRectWithSubpixel(v21, &v113, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v109, &v113, 0LL);
          }
          if ( v42 )
            goto LABEL_65;
          goto LABEL_55;
        }
        v35 = (char *)v109 + 224;
        v108 = v31;
        v113 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 104LL);
      }
LABEL_54:
      PhysicalToLogicalInPlaceRect(v20, &v113);
      v36 = v21 + 56;
LABEL_55:
      left = v126.left;
      v38 = v126.right;
      if ( v126.left <= (int)v113 )
        left = v113;
      v126.left = left;
      if ( v126.right >= SDWORD2(v113) )
        v38 = DWORD2(v113);
      v126.right = v38;
      if ( left >= v38 )
        goto LABEL_240;
      v39 = v126.top;
      bottom = v126.bottom;
      if ( v126.top <= SDWORD1(v113) )
        v39 = DWORD1(v113);
      v126.top = v39;
      if ( v126.bottom >= SHIDWORD(v113) )
        bottom = HIDWORD(v113);
      v126.bottom = bottom;
      if ( v39 >= bottom )
      {
LABEL_240:
        v126 = 0LL;
        goto LABEL_241;
      }
LABEL_65:
      v41 = 0;
      v113 = *(_OWORD *)(*((_QWORD *)v21 + 5) + 88LL);
      if ( v107 )
      {
        if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v113, v36, v21, &v126, v35, v109) )
        {
          v41 = 1;
        }
        else
        {
          LogicalToPhysicalInPlaceRectWithSubpixel(v21, &v113, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(v109, &v113, 0LL);
        }
        if ( v41 )
          goto LABEL_90;
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v20, &v113);
      }
      v44 = v126.left;
      v45 = v126.right;
      if ( v126.left <= (int)v113 )
        v44 = v113;
      v126.left = v44;
      if ( v126.right >= SDWORD2(v113) )
        v45 = DWORD2(v113);
      v126.right = v45;
      if ( v44 >= v45 )
        goto LABEL_240;
      v46 = v126.top;
      right = (unsigned int)v126.bottom;
      if ( v126.top <= SDWORD1(v113) )
        v46 = DWORD1(v113);
      v126.top = v46;
      if ( v126.bottom >= SHIDWORD(v113) )
        right = HIDWORD(v113);
      v126.bottom = right;
      if ( v46 >= (int)right )
        goto LABEL_240;
LABEL_90:
      v23 = v120;
      v20 = (struct tagWND *)v21;
      v21 = (HRGN)*((_QWORD *)v21 + 13);
      v11 = v108;
      v4 = v109;
      v22 = v112;
      v12 = v111;
      if ( v21 == (HRGN)v120 )
        goto LABEL_93;
      v10 = v107;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)v11 + 42LL) & 0x2FFF) != 0x29D )
    goto LABEL_241;
LABEL_93:
  v47 = (struct tagWND *)*((_QWORD *)v4 + 13);
  v48 = 0;
  *((_QWORD *)&v117 + 1) = v127;
  *(_QWORD *)((char *)&v116 + 4) = 0x1E00000000LL;
  v49 = v12 & 0x10;
  *(_QWORD *)&v117 = v127;
  v50 = 30;
  v51 = v4;
  if ( v47 == (struct tagWND *)v23 )
  {
    v62 = v110;
    goto LABEL_133;
  }
  v52 = v12 & 0x4000;
  LODWORD(v110) = v52;
  do
  {
    if ( v52 )
    {
      right = *((_QWORD *)v51 + 5);
      if ( (*(_BYTE *)(right + 27) & 0x20) != 0
        && ((*(_DWORD *)(right + 24) & 0x2000000) == 0 || v47 == (struct tagWND *)v22) )
      {
        break;
      }
    }
    if ( !v49 )
      goto LABEL_130;
    v53 = (struct tagWND *)*((_QWORD *)v47 + 14);
    if ( v53 == v51 )
      goto LABEL_130;
    v54 = 0;
    if ( !v53 )
      goto LABEL_130;
    while ( v53 != v51 )
    {
      right = *((_QWORD *)v53 + 5);
      v55 = (LONG *)(right + 88);
      if ( !v54 )
      {
        v56 = *(_DWORD *)(*(_QWORD *)v11 + 288LL);
        if ( *(_QWORD *)(*(_QWORD *)v11 + 256LL) == *(_QWORD *)(right + 256) )
        {
          v57 = (((unsigned __int16)(v56 >> 8) ^ (unsigned __int16)(*(_DWORD *)(right + 288) >> 8)) & 0x1FF) == 0;
        }
        else
        {
          if ( (v56 & 0xF) != 2 )
            goto LABEL_109;
          v57 = (*(_DWORD *)(right + 288) & 0xF) == 2;
        }
        if ( !v57 )
LABEL_109:
          v54 = 1;
      }
      if ( (*(_BYTE *)(right + 31) & 0x10) == 0
        || (*(_BYTE *)(right + 26) & 8) != 0
        || (*(_BYTE *)(right + 24) & 0x20) != 0 )
      {
        goto LABEL_116;
      }
      if ( v54 )
      {
        if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v55, (char *)v53 + 224, v53, &v126, (char *)v4 + 224, v4) )
          goto LABEL_115;
      }
      else if ( v126.left >= *(_DWORD *)(right + 96)
             || *v55 >= v126.right
             || v126.top >= *(_DWORD *)(right + 100)
             || *(_DWORD *)(right + 92) >= v126.bottom )
      {
        goto LABEL_116;
      }
      if ( *v55 >= v55[2] || v55[1] >= v55[3] )
      {
LABEL_115:
        v11 = v108;
        goto LABEL_116;
      }
      if ( v48 == v50 )
      {
        if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v116) )
        {
LABEL_161:
          v62 = v118;
          goto LABEL_242;
        }
        v50 = DWORD2(v116);
        v48 = DWORD1(v116);
      }
      v11 = v108;
      v59 = v48++;
      DWORD1(v116) = v48;
      *(_QWORD *)(v117 + 8 * v59) = v53;
LABEL_116:
      v53 = (struct tagWND *)*((_QWORD *)v53 + 11);
      v4 = v109;
      if ( !v53 )
        break;
    }
    v58 = v107;
    v23 = v120;
    if ( v54 )
      v58 = 1;
    v107 = v58;
LABEL_130:
    v60 = *((_QWORD *)v47 + 5);
    v51 = v47;
    v47 = (struct tagWND *)*((_QWORD *)v47 + 13);
    v22 = v112;
    v61 = *(_BYTE *)(v60 + 31);
    v52 = (int)v110;
    v49 = v61 & 4;
  }
  while ( v47 != (struct tagWND *)v23 );
  v62 = v118;
  LOBYTE(v12) = v111;
  v110 = v118;
LABEL_133:
  if ( (v12 & 8) == 0 )
    goto LABEL_165;
  v63 = *((_QWORD *)v4 + 14);
  if ( !v63 )
    goto LABEL_165;
  v64 = 0;
  while ( 2 )
  {
    right = *(_QWORD *)(v63 + 40);
    v65 = (LONG *)(right + 88);
    if ( !v64 )
    {
      v22 = *(HRGN *)v11;
      v66 = *(_DWORD *)(*(_QWORD *)v11 + 288LL);
      if ( *(_QWORD *)(*(_QWORD *)v11 + 256LL) == *(_QWORD *)(right + 256) )
      {
        v67 = (((unsigned __int16)(v66 >> 8) ^ (unsigned __int16)(*(_DWORD *)(right + 288) >> 8)) & 0x1FF) == 0;
        goto LABEL_141;
      }
      if ( (v66 & 0xF) != 2 )
        goto LABEL_142;
      v67 = (*(_DWORD *)(right + 288) & 0xF) == 2;
LABEL_141:
      if ( !v67 )
LABEL_142:
        v64 = 1;
    }
    if ( (*(_BYTE *)(right + 31) & 0x10) != 0
      && (*(_BYTE *)(right + 26) & 8) == 0
      && (*(_BYTE *)(right + 24) & 0x20) == 0 )
    {
      if ( v64 )
      {
        if ( !(unsigned int)DpiRectIntersectsRectWithSubpixel(v65, v63 + 224, v63, &v126, (char *)v4 + 224, v4) )
          goto LABEL_148;
        goto LABEL_155;
      }
      if ( v126.left < *(_DWORD *)(right + 96)
        && *v65 < v126.right
        && v126.top < *(_DWORD *)(right + 100)
        && *(_DWORD *)(right + 92) < v126.bottom )
      {
LABEL_155:
        if ( *v65 >= v65[2] || v65[1] >= v65[3] )
        {
LABEL_148:
          v11 = v108;
        }
        else
        {
          if ( v48 == v50 )
          {
            if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v116) )
              goto LABEL_161;
            v50 = DWORD2(v116);
            v48 = DWORD1(v116);
          }
          v11 = v108;
          v68 = v48++;
          DWORD1(v116) = v48;
          *(_QWORD *)(v117 + 8 * v68) = v63;
        }
      }
    }
    v63 = *(_QWORD *)(v63 + 88);
    if ( v63 )
    {
      v4 = v109;
      continue;
    }
    break;
  }
  v69 = v107;
  v62 = v118;
  if ( v64 )
    v69 = 1;
  v108 = v11;
  v107 = v69;
  v110 = v118;
LABEL_165:
  if ( v48 <= 0 )
  {
    if ( *(char *)(*(_QWORD *)v11 + 19LL) < 0 )
      v126 = 0LL;
    v91 = v115;
    if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v115, &v126) )
      goto LABEL_210;
    goto LABEL_242;
  }
  v70 = 0;
  v71 = 0;
  if ( v48 > 30 )
  {
    v119 = (struct _RECTL *)Win32AllocPoolWithQuotaZInit(16LL * v48, 1769370453LL);
    v72 = v119;
    if ( v119 )
      goto LABEL_169;
    goto LABEL_242;
  }
  v72 = &v128;
  v119 = &v128;
LABEL_169:
  v73 = (const struct tagWND **)v117;
  v74 = v72;
  v75 = (unsigned int)v48;
  v76 = (const struct tagWND **)v117;
  do
  {
    v77 = *((_QWORD *)*v73 + 5);
    if ( *(_QWORD *)(v77 + 168) )
    {
      ++v71;
      *v76++ = *v73;
    }
    else
    {
      ++v70;
      *v74++ = *(struct _RECTL *)(v77 + 88);
      if ( v107 && IsDpiBoundaryBetweenWindows(v109, *v73) )
      {
        v79 = &v72[v78];
        LogicalToPhysicalInPlaceRectWithSubpixel(v11, v79, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v109, v79, 0LL);
        v72 = v119;
      }
    }
    ++v73;
    --v75;
  }
  while ( v75 );
  v80 = v115;
  if ( !*v115 )
    *v80 = (HRGN)CreateEmptyRgn(v77, right, v22, v11);
  if ( v70 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v121, *v80, 0, 0);
    if ( v121 && !RGNOBJAPI::bSubtract((RGNOBJAPI *)&v121, &v126, v72, v70) && v121 )
      RGNOBJ::vSet((RGNOBJ *)&v121);
    if ( !v123 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)&v121);
    if ( v121 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v121 + 12));
      v110 = v118;
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v122);
  }
  else
  {
    SetRectRgnIndirect(*v80, &v126);
  }
  EmptyRgn = v110;
  if ( !v110 )
  {
    EmptyRgn = (HRGN)CreateEmptyRgn(v82, v81, v83, v84);
    v110 = EmptyRgn;
  }
  if ( v71 > 0 )
  {
    for ( i = 0LL; i < v71; ++i )
    {
      v87 = (const struct tagWND **)(v117 + 8 * i);
      SetRectRgnIndirect(EmptyRgn, *((_QWORD *)*v87 + 5) + 88LL);
      GreCombineRgn(EmptyRgn, EmptyRgn, *(_QWORD *)(*((_QWORD *)*v87 + 5) + 168LL), 1LL);
      if ( v107 && IsDpiBoundaryBetweenWindows(v109, *v87) )
      {
        v112 = EmptyRgn;
        v89 = 0LL;
        if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v88, &v112, 1LL) )
          v89 = v112;
        v90 = 0LL;
        if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v109, &v112, 1) )
          v90 = v112;
        if ( v112 != EmptyRgn )
          GreCombineRgn(EmptyRgn, v112, 0LL, 5LL);
        if ( v89 )
          GreDeleteObject(v89);
        if ( v90 )
          GreDeleteObject(v90);
      }
      if ( (unsigned int)GreCombineRgn(*v115, *v115, EmptyRgn, 4LL) == 1 )
        break;
    }
  }
  if ( v119 != &v128 )
    Win32FreePool(v119);
  v91 = v115;
  v62 = v110;
LABEL_210:
  v92 = *(_QWORD *)(*(_QWORD *)v108 + 168LL);
  if ( v92 )
    GreCombineRgn(*v91, *v91, v92, 1LL);
  if ( (_DWORD)v114 )
  {
    v93 = 0;
    v94 = (const struct tagWND *)v120;
    v95 = v109;
    v96 = (const struct tagWND *)*((_QWORD *)v109 + 13);
    if ( v96 != (const struct tagWND *)v120 )
    {
      v97 = v109;
      while ( 1 )
      {
        v98 = *((_QWORD *)v96 + 5);
        v109 = *(struct tagWND **)(v98 + 168);
        if ( !v109 )
          goto LABEL_237;
        v99 = *((_QWORD *)v95 + 5);
        if ( (*(_BYTE *)(v99 + 26) & 8) == 0 || (*(_DWORD *)(v99 + 232) & 2) != 0 )
        {
          if ( (v111 & 0x1000000) != 0 )
          {
            v93 = 1;
          }
          else if ( !v93 )
          {
            goto LABEL_227;
          }
        }
        else
        {
          v93 = 1;
        }
        if ( (*(_WORD *)(v98 + 42) & 0x2FFF) == 0x29D )
          goto LABEL_238;
LABEL_227:
        if ( IsDpiBoundaryBetweenWindows(v97, v96) )
        {
          v101 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v96, &v109, 1LL) )
            v101 = v109;
          v102 = PhysicalToLogicalInPlaceRgnWorker(v97, (HRGN *)&v109, 1);
          if ( v102 && v101 )
            GreDeleteObject(v101);
        }
        else
        {
          v102 = PhysicalToLogicalInPlaceRgn(v100, (__int64)&v109);
        }
        v103 = v109;
        v104 = GreCombineRgn(*v115, *v115, v109, 1LL) == 1;
        if ( v102 )
          GreDeleteObject(v103);
        if ( v104 )
        {
LABEL_238:
          v62 = v110;
          break;
        }
LABEL_237:
        v95 = v96;
        v96 = (const struct tagWND *)*((_QWORD *)v96 + 13);
        if ( v96 == v94 )
          goto LABEL_238;
      }
    }
  }
  v105 = 1;
LABEL_243:
  if ( v62 )
    GreDeleteObject(v62);
  if ( (_DWORD)v116 )
    Win32FreePool((void *)v117);
  return v105;
}
