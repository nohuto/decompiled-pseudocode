/*
 * XREFs of xxxScrollWindowEx @ 0x1C00BFE8C
 * Callers:
 *     NtUserScrollWindowEx @ 0x1C00BFCA0 (NtUserScrollWindowEx.c)
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     _IsDescendant @ 0x1C00205E8 (_IsDescendant.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C09C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     UnionRect @ 0x1C00C1640 (UnionRect.c)
 *     zzzInternalShowCaret @ 0x1C00C2D88 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00C33BC (zzzInternalHideCaret.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     MirrorRegion @ 0x1C00F9228 (MirrorRegion.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     GetDCOrgOnScreen @ 0x1C014C0D4 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxScrollWindowEx(
        struct tagWND *a1,
        int a2,
        int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        HRGN a6,
        struct tagRECT *a7,
        __int16 a8)
{
  int v8; // r10d
  __int64 v9; // r14
  HRGN v10; // r11
  int v11; // r12d
  struct tagWND *v12; // rbx
  __int64 v14; // rax
  int v15; // edx
  int v16; // edx
  __int64 v17; // r9
  __int16 v18; // si
  int v19; // edi
  int v21; // eax
  unsigned int v22; // edi
  HDC DCEx; // r15
  int v24; // r15d
  int v25; // r12d
  int v26; // edi
  HDC v27; // rdi
  __int64 v28; // rax
  HRGN v29; // rcx
  __int64 v30; // rcx
  int v31; // edx
  int v32; // eax
  struct tagRECT *v33; // r13
  bool v34; // zf
  __int64 v35; // rdx
  int v36; // edx
  LONG v37; // eax
  LONG v38; // edx
  int v39; // eax
  struct tagRECT *v40; // r13
  __int128 v41; // xmm0
  int v42; // r8d
  __int64 v43; // rax
  int v44; // ecx
  int v45; // edx
  int v46; // edi
  int v47; // edx
  int v48; // ecx
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 DesktopWindow; // rax
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rcx
  unsigned __int64 *i; // rdi
  unsigned __int64 v62; // rax
  int v63; // r9d
  int v64; // eax
  unsigned __int64 v65; // r8
  __int64 v66; // rdx
  int v67; // [rsp+50h] [rbp-B0h]
  _BYTE v68[4]; // [rsp+54h] [rbp-ACh] BYREF
  int v69; // [rsp+58h] [rbp-A8h]
  int v70; // [rsp+5Ch] [rbp-A4h]
  int v71; // [rsp+60h] [rbp-A0h]
  struct tagRECT *v72; // [rsp+68h] [rbp-98h]
  HRGN v73; // [rsp+70h] [rbp-90h]
  HDC v74[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT *v75[2]; // [rsp+90h] [rbp-70h] BYREF
  int v76; // [rsp+A0h] [rbp-60h]
  unsigned int v77; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v78; // [rsp+ACh] [rbp-54h]
  int v79; // [rsp+B0h] [rbp-50h]
  int v80; // [rsp+B4h] [rbp-4Ch]
  int v81; // [rsp+B8h] [rbp-48h]
  int v82; // [rsp+BCh] [rbp-44h]
  int v83; // [rsp+C0h] [rbp-40h]
  int v84; // [rsp+C4h] [rbp-3Ch]
  struct tagRECT *v85[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v86; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v87; // [rsp+E8h] [rbp-18h]
  __int128 v88; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v89; // [rsp+100h] [rbp+0h]
  __int128 v90; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT *v91[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v92; // [rsp+130h] [rbp+30h] BYREF
  __int128 v93; // [rsp+140h] [rbp+40h] BYREF

  v71 = 0;
  v8 = 0;
  v77 = 0;
  v78 = 0;
  v9 = 0LL;
  v10 = a6;
  v11 = a2;
  v89 = 0LL;
  v12 = a1;
  v87 = 0LL;
  v72 = a4;
  v70 = a3;
  v69 = a2;
  v85[0] = a4;
  v91[0] = a5;
  v73 = a6;
  v75[0] = a7;
  v67 = 0;
  v92 = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  if ( !a1 )
  {
    v14 = *(_QWORD *)(gptiCurrent + 456LL);
    v71 = 1;
    v12 = *(struct tagWND **)(*(_QWORD *)(v14 + 8) + 24LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 0x40) != 0 )
  {
    v11 = -a2;
    v69 = -a2;
    MirrorRegion(v12, a6, 1LL);
    if ( a4 )
    {
      v15 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->left;
      a4->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a4->right;
      a4->right = v15;
    }
    v10 = v73;
    v8 = 0;
    if ( a5 )
    {
      v16 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->left;
      a5->left = *(_DWORD *)(*((_QWORD *)v12 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)v12 + 5) + 104LL) - a5->right;
      a5->right = v16;
    }
  }
  if ( !(v11 | v70) )
    goto LABEL_25;
  if ( (unsigned int)IsVisible((__int64)v12) )
  {
    v18 = a8;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x20) != 0 )
  {
LABEL_25:
    v18 = a8;
  }
  else
  {
    v18 = a8;
    if ( (a8 & 1) != 0 && !v17 )
    {
      v8 = 1;
      v18 = a8 & 0xFFFD;
      v67 = 1;
    }
  }
  if ( v10 )
  {
    SetEmptyRgn(v10);
    v8 = v67;
  }
  if ( a7 )
    *a7 = 0LL;
  if ( !v8 )
    return 1LL;
LABEL_15:
  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v68);
  v76 = 0;
  if ( v71 )
    ThreadLock((__int64)v12, (__int64 *)&v88);
  if ( !v67 )
  {
    v9 = *(_QWORD *)(gptiCurrent + 432LL) + 296LL;
    if ( *(_QWORD *)v9 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)v9, (__int64)v12) )
      {
        v76 = 1;
        zzzInternalHideCaret();
      }
    }
  }
  v83 = v18 & 1;
  if ( v18 < 0 )
  {
    v19 = (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v12 + 17) + 8LL) + 8LL) & 0x60) != 0 ? 0x10000 : 65538;
    if ( (v18 & 1) != 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 )
      v19 = 589826;
  }
  else
  {
    v21 = 65538;
    if ( (v18 & 1) != 0 )
      v21 = 589826;
    v19 = v21;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v22 = v19 | 0x40000000;
  DCEx = (HDC)_GetDCEx(v12, 0LL, v22);
  v74[0] = DCEx;
  v84 = v18 & 2;
  if ( (v18 & 2) != 0 )
  {
    GetDCOrgOnScreen(DCEx, &v77);
    if ( !v73 )
      v73 = (HRGN)ghrgnSW;
  }
  if ( !v72 )
  {
    v85[0] = (struct tagRECT *)&v92;
    GetRect((__int64)v12, (__int64)&v92, 17);
    if ( (v22 & 2) == 0 )
      GreTransformPoints(DCEx, 0);
  }
  v24 = v11;
  v25 = v70;
  v90 = (__int128)*v85[0];
  v26 = v22 & 2;
  if ( !v26 )
  {
    GreTransformPoints(v74[0], 1);
    v80 = 0;
    v79 = 0;
    v81 = v69;
    v82 = v25;
    GreTransformPoints(v74[0], 1);
    v24 = v81 - v79;
    v25 = v82 - v80;
  }
  if ( v67 )
  {
    v27 = v74[0];
    v69 = 1;
  }
  else
  {
    v28 = *((_QWORD *)v12 + 5);
    v29 = *(HRGN *)(v28 + 136);
    if ( v18 < 0 && (*(_BYTE *)(v28 + 21) & 1) == 0 )
    {
      if ( (unsigned __int64)v29 > 1 )
      {
        v93 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v29, &v93) )
        {
          v30 = *((_QWORD *)v12 + 5);
          v31 = v25 - *(_DWORD *)(v30 + 108);
          v32 = v24 - *(_DWORD *)(v30 + 104);
          HIDWORD(v93) += v31;
          DWORD1(v93) += v31;
          LODWORD(v93) = v32 + v93;
          DWORD2(v93) += v32;
          xxxRedrawWindow(v12, (int *)&v93, 0LL, 133);
        }
      }
      v29 = 0LL;
    }
    v33 = v75[0];
    v34 = v26 == 0;
    v27 = v74[0];
    v69 = InternalScrollDC(v12, v74[0], v69, v70, v85[0], v91[0], v29, v73, v75[0], v34);
    if ( v33 )
    {
      v35 = *((_QWORD *)v12 + 5);
      if ( (*(_BYTE *)(v35 + 26) & 0x40) != 0 )
      {
        v36 = *(_DWORD *)(v35 + 112) - *(_DWORD *)(v35 + 104);
        v37 = v36 - v33->right;
        v38 = v36 - v33->left;
        v33->left = v37;
        v33->right = v38;
      }
    }
  }
  _ReleaseDC(v27);
  v39 = v67;
  v40 = v72;
  if ( !v67 )
  {
    if ( *(_QWORD *)(gpDispInfo + 32LL) )
    {
      if ( v72 )
      {
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v41 = v90;
          v92 = v90;
          v42 = v90;
        }
        else
        {
          v43 = *((_QWORD *)v12 + 5);
          v44 = *(_DWORD *)(v43 + 104);
          v42 = v44 + v90;
          v45 = *(_DWORD *)(v43 + 108);
          DWORD2(v92) = DWORD2(v90) + v44;
          LODWORD(v92) = v44 + v90;
          DWORD1(v92) = v45 + DWORD1(v90);
          HIDWORD(v92) = v45 + HIDWORD(v90);
          v41 = v92;
        }
        LODWORD(v75[1]) = v24 + DWORD2(v41);
        HIDWORD(v75[1]) = v25 + HIDWORD(v41);
        HIDWORD(v75[0]) = v25 + DWORD1(v41);
        LODWORD(v75[0]) = v42 + v24;
        UnionRect(v75, v75, &v92);
      }
      else
      {
        *(_OWORD *)v75 = *(_OWORD *)(*((_QWORD *)v12 + 5) + 104LL);
      }
      SpbCheckRect(v12, (struct tagRECT *)v75, 0);
    }
    v39 = 0;
  }
  v46 = v83;
  if ( !v83 )
    goto LABEL_76;
  *(_OWORD *)v91 = 0LL;
  if ( v39 || v12 != *(struct tagWND **)v9 )
  {
LABEL_70:
    if ( !v40 )
      goto LABEL_74;
    goto LABEL_71;
  }
  if ( !v40
    || (v47 = *(_DWORD *)(v9 + 24),
        LODWORD(v91[0]) = *(_DWORD *)(v9 + 20),
        LODWORD(v91[1]) = *(_DWORD *)(v9 + 32) + LODWORD(v91[0]),
        v48 = *(_DWORD *)(v9 + 28),
        HIDWORD(v91[0]) = v47,
        HIDWORD(v91[1]) = v47 + v48,
        (unsigned int)IntersectRect(v91, (int *)v91, (int *)&v90)) )
  {
    *(_DWORD *)(v9 + 20) += v24;
    *(_DWORD *)(v9 + 24) += v25;
    goto LABEL_70;
  }
LABEL_71:
  if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
  {
    *(_OWORD *)v91 = v90;
  }
  else
  {
    v49 = *((_QWORD *)v12 + 5);
    v50 = *(_DWORD *)(v49 + 104);
    v51 = *(_DWORD *)(v49 + 108);
    LODWORD(v91[0]) = v50 + v90;
    LODWORD(v91[1]) = v50 + DWORD2(v90);
    HIDWORD(v91[0]) = v51 + DWORD1(v90);
    HIDWORD(v91[1]) = v51 + HIDWORD(v90);
  }
LABEL_74:
  if ( *((_QWORD *)v12 + 14) )
  {
    OffsetChildren(v12, v24, v25, (int *)((unsigned __int64)v91 & -(__int64)(v40 != 0LL)));
    zzzLockDisplayAreaAndInvalidateDCCache(
      (__int64)v12,
      (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 2) != 0 ? 4 : 2,
      0LL);
  }
LABEL_76:
  if ( v84 )
  {
    if ( v73 != (HRGN)ghrgnSW )
      GreCombineRgn(ghrgnSW, v73, 0LL, 5LL);
    GreOffsetRgn(ghrgnSW, v77, v78);
    xxxInternalInvalidate(v12, ghrgnSW, v18 & 4 | 0x81);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v68, v52, v53);
  zzzEndDeferWinEventNotify();
  if ( v46 )
  {
    *(_OWORD *)v85 = 0LL;
    *(_OWORD *)v74 = 0LL;
    if ( v40 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v12);
      if ( v54 == DesktopWindow )
      {
        LODWORD(v74[0]) = v24 + v90;
        LODWORD(v74[1]) = v24 + DWORD2(v90);
        HIDWORD(v74[0]) = v25 + DWORD1(v90);
        v58 = v25 + HIDWORD(v90);
      }
      else
      {
        v59 = *(_QWORD *)(v54 + 40);
        v54 = (unsigned int)(v24 + *(_DWORD *)(v59 + 104));
        v56 = (unsigned int)(v25 + *(_DWORD *)(v59 + 108));
        LODWORD(v74[0]) = v54 + v90;
        LODWORD(v74[1]) = v54 + DWORD2(v90);
        HIDWORD(v74[0]) = v56 + DWORD1(v90);
        v58 = v56 + HIDWORD(v90);
      }
      HIDWORD(v74[1]) = v58;
    }
    v60 = gptiCurrent;
    *(_QWORD *)&v86 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v86;
    *((_QWORD *)&v86 + 1) = 0LL;
    for ( i = (unsigned __int64 *)*((_QWORD *)v12 + 14); i; i = (unsigned __int64 *)i[11] )
    {
      if ( !v40 || (unsigned int)IntersectRect(v85, (int *)v74, (int *)(i[5] + 88)) )
      {
        ThreadLockExchangeAlways(i, &v86);
        if ( v12 == (struct tagWND *)GetDesktopWindow((__int64)v12) )
        {
          v62 = i[5];
          v63 = *(unsigned __int16 *)(v62 + 108);
          v64 = *(unsigned __int16 *)(v62 + 104);
        }
        else
        {
          v65 = i[5];
          v66 = *((_QWORD *)v12 + 5);
          v63 = (unsigned __int16)(*(_WORD *)(v65 + 108) - *(_WORD *)(v66 + 108));
          v64 = (unsigned __int16)(*(_WORD *)(v65 + 104) - *(_WORD *)(v66 + 104));
        }
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(i, 3u, 0LL, v64 | (v63 << 16), 0, 0, 0LL, 1, 0);
      }
    }
    ThreadUnlock1(v60, v54, v56);
  }
  if ( v76 )
    zzzInternalShowCaret();
  if ( v71 )
    ThreadUnlock1(v55, v54, v56);
  return (unsigned int)v69;
}
