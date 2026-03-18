/*
 * XREFs of GreDrawStream @ 0x1C003C990
 * Callers:
 *     NtGdiDrawStream @ 0x1C00E7520 (NtGdiDrawStream.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C003DD48 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0088DC0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0106F1C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0123E40 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C0289314 (--0SURFREFDC@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, int *a3)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // r11d
  char *v7; // r10
  int v8; // r9d
  struct SURFACE *v9; // rdx
  struct SURFACE *v10; // rdi
  struct PALETTE *v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  int v14; // eax
  _DWORD *v15; // rbx
  unsigned int v16; // r8d
  unsigned int v17; // esi
  int v18; // r11d
  int v19; // r8d
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // r10d
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // eax
  LONG *v30; // rdx
  char *v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  struct SURFACE *v37; // rbx
  HDC v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  LONG left; // edx
  LONG top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  __int64 v45; // rdi
  __int64 v46; // rbx
  struct PALETTE *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 cEntries; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct SURFACE *v55; // rbx
  __int16 v57; // ax
  __int64 v58; // rcx
  unsigned int v61; // [rsp+64h] [rbp-9Ch]
  int v62; // [rsp+68h] [rbp-98h]
  int v63; // [rsp+6Ch] [rbp-94h]
  __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  char *v65; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  struct SURFACE *v69; // [rsp+98h] [rbp-68h]
  struct SURFACE *v70; // [rsp+A0h] [rbp-60h]
  struct _XLATEOBJ *v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  int v73; // [rsp+B8h] [rbp-48h]
  int v74; // [rsp+BCh] [rbp-44h]
  struct _XLATEOBJ *v75; // [rsp+C0h] [rbp-40h]
  _QWORD v76[6]; // [rsp+C8h] [rbp-38h] BYREF
  HDC v77; // [rsp+F8h] [rbp-8h]
  struct PALETTE *v78; // [rsp+100h] [rbp+0h]
  _BYTE v79[32]; // [rsp+108h] [rbp+8h] BYREF
  struct SURFACE *v80; // [rsp+128h] [rbp+28h]
  __int128 v81; // [rsp+130h] [rbp+30h] BYREF
  __int64 v82; // [rsp+140h] [rbp+40h]
  int v83; // [rsp+148h] [rbp+48h]
  _QWORD v84[2]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v85[32]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  __int64 v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  __int128 v90; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v91; // [rsp+1B0h] [rbp+B0h]
  __int128 v92; // [rsp+1C0h] [rbp+C0h]
  __int128 v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1E0h] [rbp+E0h]
  struct _RECTL v95; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v96; // [rsp+200h] [rbp+100h] BYREF

  v77 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v76);
  SURFREFDC::SURFREFDC((SURFREFDC *)v79);
  v4 = 0LL;
  LODWORD(v5) = 0;
  v72 = 0LL;
  v74 = 0;
  v84[0] = 0LL;
  v84[1] = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v85);
  v6 = 0;
  v7 = 0LL;
  v86 = 256;
  v8 = 0;
  v81 = 0LL;
  v9 = 0LL;
  v82 = 0LL;
  v83 = 0;
  v10 = 0LL;
  v84[0] = 0LL;
  v11 = 0LL;
  v89 = 0LL;
  v12 = 0LL;
  v88 = 0LL;
  v13 = 0LL;
  v87 = 0LL;
  v78 = gppalRGB;
  v69 = 0LL;
  v70 = 0LL;
  v75 = 0LL;
  v71 = 0LL;
  v62 = 0;
  v65 = 0LL;
  v94 = 0LL;
  v63 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  if ( a2 < 4 )
    goto LABEL_119;
  v14 = *a3;
  v15 = a3 + 1;
  v67 = v15;
  if ( v14 != 1148352339 )
    goto LABEL_119;
  v16 = a2 - 4;
  v61 = v16;
  if ( v16 < 4 )
  {
LABEL_116:
    LODWORD(v5) = 1;
    goto LABEL_110;
  }
  while ( 1 )
  {
    if ( !*v15 )
    {
      if ( v7 )
        goto LABEL_80;
      v17 = 24;
      if ( v16 < 0x18 )
        goto LABEL_109;
      v38 = (HDC)(int)v15[1];
      if ( v38 != v77 )
        goto LABEL_109;
      if ( !v8 )
      {
        XDCOBJ::vLock((XDCOBJ *)v76, v38);
        v8 = v63;
      }
      if ( !v76[0]
        || (*(_DWORD *)(v76[0] + 36LL) & 0x10000) != 0
        || !v8 && !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v81, (struct XDCOBJ *)v76, 0) )
      {
        goto LABEL_109;
      }
      v73 = *(_DWORD *)(*(_QWORD *)(v76[0] + 976LL) + 208LL);
      v74 = *(_DWORD *)(*(_QWORD *)(v76[0] + 976LL) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v76[0] + 976LL) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v72, (struct XDCOBJ *)v76, 0x204u, 0);
        v39 = v72;
      }
      else
      {
        v39 = v76[0] + 320LL;
        v72 = v76[0] + 320LL;
      }
      v40 = *(_DWORD *)(v39 + 32);
      if ( (v40 & 1) == 0 )
        goto LABEL_109;
      left = v15[2];
      top = v15[3];
      right = v15[4];
      bottom = v15[5];
      v95.left = left;
      v95.top = top;
      v95.right = right;
      v95.bottom = bottom;
      if ( (v40 & 0x43) != 0x43 )
      {
        bCvtPts1(v39, &v95, 2LL);
        bottom = v95.bottom;
        right = v95.right;
        top = v95.top;
        left = v95.left;
      }
      if ( v74 )
      {
        ++left;
        ++right;
        v95.left = left;
        v95.right = right;
      }
      if ( left > right )
      {
        v95.left = right;
        v95.right = left;
      }
      if ( top > bottom )
      {
        v95.top = bottom;
        v95.bottom = top;
      }
      if ( (*(_DWORD *)(v76[0] + 36LL) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v76, (struct ERECTL *)&v95);
      v9 = *(struct SURFACE **)(v76[0] + 496LL);
      v69 = v9;
      if ( !v9 )
        goto LABEL_109;
      v12 = *((_QWORD *)v9 + 16);
      v13 = *(_QWORD *)(v76[0] + 88LL);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 24) & 0x2000) != 0 )
          goto LABEL_109;
      }
      v63 = 1;
      goto LABEL_76;
    }
    if ( *v15 == 1 )
    {
      if ( v7 )
        goto LABEL_80;
      SURFREFDC::vUnlock((SURFREFDC *)v79);
      v17 = 8;
      if ( v61 < 8 )
        goto LABEL_109;
      if ( !v63 )
        goto LABEL_109;
      LOBYTE(v32) = 5;
      v70 = (struct SURFACE *)HmgShareLockCheck((int)v15[1], v32);
      v10 = v70;
      v80 = v70;
      if ( !v70 )
        goto LABEL_109;
      if ( v70 != SURFACE::pdibDefault )
      {
        GreAcquireHmgrSemaphore(v34, v33, v35, v36);
        v37 = v80;
        INC_SHARE_REF_CNT(v80);
        ++*((_DWORD *)v37 + 42);
        DEC_SHARE_REF_CNT(v80);
        GreReleaseHmgrSemaphore();
        v10 = v80;
        v15 = v67;
        v70 = v80;
      }
      if ( !v10 )
        goto LABEL_109;
      v4 = *((_QWORD *)v10 + 16);
      v11 = ppalDefault;
      if ( !v4
        || (*(_DWORD *)(v4 + 24) & 0x2000) != 0
        || v10 == v69
        || *((_DWORD *)v10 + 24) != 6
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&v71,
                            0LL,
                            *(_DWORD *)(v76[0] + 120LL),
                            v4,
                            v12,
                            (__int64)ppalDefault,
                            v13,
                            *(_DWORD *)(*(_QWORD *)(v76[0] + 976LL) + 184LL),
                            *(_DWORD *)(*(_QWORD *)(v76[0] + 976LL) + 176LL),
                            0,
                            0) )
      {
        goto LABEL_109;
      }
      v9 = v69;
      v75 = v71;
      goto LABEL_76;
    }
    if ( *v15 != 9 )
      goto LABEL_109;
    v17 = 60;
    if ( v16 < 0x3C )
      goto LABEL_109;
    v18 = v15[9];
    if ( (v18 & 0xFFFFFF80) != 0 )
      goto LABEL_109;
    if ( !v10 )
      goto LABEL_109;
    v19 = v15[5];
    if ( v19 < 0 )
      goto LABEL_109;
    v20 = v15[6];
    if ( v20 < 0 )
      goto LABEL_109;
    v21 = v15[7];
    if ( v21 > *((_DWORD *)v10 + 14) )
      goto LABEL_109;
    v22 = v15[8];
    if ( v22 > *((_DWORD *)v10 + 15) )
      goto LABEL_109;
    v23 = v21 - v19;
    v24 = v22 - v20;
    if ( v23 <= 0 )
      goto LABEL_109;
    if ( v24 <= 0 )
      goto LABEL_109;
    if ( (v18 & 0x20) == 0 )
    {
      v25 = v15[10];
      if ( v25 < 0 )
        goto LABEL_109;
      v26 = v15[11];
      if ( v26 < 0 )
        goto LABEL_109;
      v27 = v15[12];
      if ( v27 < 0 )
        goto LABEL_109;
      v28 = v15[13];
      if ( v28 < 0 || v25 > v23 || v26 > v23 || v27 > v24 || v28 > v24 || v25 + v26 > v23 || v28 + v27 > v24 )
        goto LABEL_109;
    }
    if ( (v18 & 0xC) == 0xC )
      goto LABEL_109;
    if ( (v18 & 8) != 0 )
    {
      v15[14] = ulGetNearestIndexFromColorref(v4, v11, (unsigned int)v15[14], 1LL);
    }
    else
    {
      v29 = v62;
      if ( (v18 & 4) != 0 )
        v29 = 1;
      v62 = v29;
    }
    v30 = v15 + 1;
    if ( v65 )
    {
      ERECTL::operator+=(&v96, v30);
      v9 = v69;
LABEL_76:
      v31 = v65;
      goto LABEL_77;
    }
    v31 = (char *)v15;
    v96.left = *v30;
    v96.top = v15[2];
    v96.right = v15[3];
    v9 = v69;
    v96.bottom = v15[4];
    v65 = (char *)v15;
LABEL_77:
    v16 = v61 - v17;
    v61 = v16;
    v15 += (unsigned __int64)v17 >> 2;
    v67 = v15;
    if ( v16 )
      goto LABEL_106;
    if ( !v31 )
      goto LABEL_116;
    v6 = v62;
LABEL_80:
    if ( !v76[0] || !v10 )
      goto LABEL_106;
    *(_QWORD *)&v90 = 72LL;
    v64 = 0LL;
    v5 = 0LL;
    v66 = 0LL;
    v45 = 0LL;
    v68 = 0LL;
    v46 = 0LL;
    *((_QWORD *)&v90 + 1) = 33488896LL;
    *(_QWORD *)&v91 = 0LL;
    if ( v6 )
      break;
    *(_QWORD *)&v93 = 0LL;
    v92 = 0uLL;
LABEL_89:
    if ( !NtGdiDrawStreamInternal(
            (struct XDCOBJ *)v76,
            (struct EXFORMOBJ *)&v72,
            v70,
            v75,
            &v95,
            &v96,
            (_DWORD)v67 - (_DWORD)v65,
            v65,
            (struct _DRAWSTREAMINFO *)&v90) )
    {
LABEL_108:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
LABEL_109:
      LODWORD(v5) = 0;
      goto LABEL_110;
    }
    v65 = 0LL;
    v62 = 0;
    if ( v46 )
    {
      v48 = *(int *)(v46 + 36);
      if ( (int)v48 < 0 )
      {
        if ( (_DWORD)v48 == -1 )
          FreeThreadBufferWithTag(v46);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v48);
        v5 = v64;
        v45 = v66;
      }
    }
    if ( v45 )
    {
      v49 = *(int *)(v45 + 36);
      if ( (int)v49 < 0 )
      {
        if ( (_DWORD)v49 == -1 )
          FreeThreadBufferWithTag(v45);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v49);
        v5 = v64;
      }
    }
    if ( v5 )
    {
      v50 = *(int *)(v5 + 36);
      if ( (int)v50 < 0 )
      {
        if ( (_DWORD)v50 == -1 )
          FreeThreadBufferWithTag(v5);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v50);
      }
    }
    v16 = v61;
    v15 = v67;
LABEL_106:
    if ( v16 < 4 )
      goto LABEL_116;
    v10 = v70;
    v9 = v69;
    v8 = v63;
    v7 = v65;
    v6 = v62;
  }
  if ( (unsigned int)(*((_DWORD *)v9 + 24) - 1) <= 2 )
    goto LABEL_113;
  v47 = v78;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v64, 0LL, 0, v4, (__int64)v78, (__int64)v11, (__int64)v11, 0, 0, 0, 0) )
  {
    v5 = v64;
    *(_QWORD *)&v92 = v64;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v66, 0LL, 0, v12, (__int64)v47, v13, v13, 0, 0, 0, 0) )
    {
LABEL_113:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
      LODWORD(v5) = 0;
      goto LABEL_110;
    }
    v45 = v66;
    *((_QWORD *)&v92 + 1) = v66;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v68, 0LL, 0, (__int64)v47, v12, v13, v13, 0, 0, 0, 0) )
      goto LABEL_108;
    v46 = v68;
    *(_QWORD *)&v93 = v68;
    goto LABEL_89;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v68);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v66);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v64);
LABEL_110:
  if ( v71 )
  {
    cEntries = (int)v71[1].cEntries;
    if ( (int)cEntries < 0 )
    {
      if ( (_DWORD)cEntries == -1 )
        FreeThreadBufferWithTag(v71);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
  }
LABEL_119:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v81);
  if ( v84[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v84);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v85);
  if ( v80 )
  {
    if ( v80 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v80);
    }
    else
    {
      GreAcquireHmgrSemaphore(v80, v52, v53, v54);
      v55 = v80;
      DEC_SHARE_REF_CNT(v80);
      if ( (*((_DWORD *)v55 + 42))-- == 1 )
      {
        if ( (*(_DWORD *)v55 & 0x800000) != 0 )
        {
          v57 = *((_WORD *)v55 + 51);
          if ( (v57 & 0x400) != 0 )
          {
            v58 = *(_QWORD *)v55;
            *((_WORD *)v55 + 51) = v57 & 0xFBFF;
            GreMakeBitmapNonStock(v58);
          }
        }
        *((_QWORD *)v55 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
    v80 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v79);
  DCOBJ::~DCOBJ((DCOBJ *)v76);
  return (unsigned int)v5;
}
