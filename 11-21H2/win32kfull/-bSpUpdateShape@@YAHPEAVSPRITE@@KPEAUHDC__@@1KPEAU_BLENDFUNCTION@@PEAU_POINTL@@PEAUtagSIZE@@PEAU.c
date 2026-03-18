/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B64
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001F4EC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C002D3AC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0086018 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0086C30 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008A13C (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C00B58D8 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00D5950 (XLATEOBJ_iXlate.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C01571DC (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C015740C (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281978 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B9380 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C02B952C (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  struct _SPRITESTATE *v11; // rcx
  int v13; // r15d
  unsigned int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // r13
  __int64 v17; // rcx
  struct _SPRITESTATE *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  LONG x; // ecx
  int y; // edx
  LONG v24; // r8d
  __int64 v25; // r13
  LONG v26; // r9d
  LONG v27; // ecx
  LONG v28; // eax
  SPRITERANGELOCK *v29; // r14
  _DWORD *v30; // rbx
  XLATEOBJ *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdi
  struct _BLENDFUNCTION v34; // eax
  int v35; // ebx
  struct PALETTE *v36; // rcx
  struct PALETTE *v37; // rax
  int v38; // ebx
  ULONG v39; // eax
  char v40; // r8
  int v41; // eax
  HSURF v42; // rcx
  bool v43; // zf
  struct _RECTL *v44; // rbx
  struct _SURFOBJ *v45; // rcx
  unsigned int v46; // ebx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  struct _BLENDFUNCTION v49; // [rsp+64h] [rbp-9Ch] BYREF
  int v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+6Ch] [rbp-94h]
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  struct PALETTE *v53; // [rsp+78h] [rbp-88h] BYREF
  LONG v54; // [rsp+80h] [rbp-80h]
  LONG v55; // [rsp+84h] [rbp-7Ch]
  int v56; // [rsp+88h] [rbp-78h]
  int v57; // [rsp+8Ch] [rbp-74h]
  unsigned int v58; // [rsp+90h] [rbp-70h]
  unsigned int v59; // [rsp+94h] [rbp-6Ch]
  struct _SPRITESTATE *v60; // [rsp+98h] [rbp-68h]
  XLATEOBJ *pxlo; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  struct PALETTE *v63; // [rsp+B0h] [rbp-50h]
  struct _RECTL *v64; // [rsp+B8h] [rbp-48h]
  _QWORD v65[2]; // [rsp+C0h] [rbp-40h] BYREF
  char v66[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v67[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v68[32]; // [rsp+100h] [rbp+0h] BYREF
  struct _RECTL v69; // [rsp+120h] [rbp+20h] BYREF

  v11 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v13 = a2;
  v64 = a9;
  v52 = *(_QWORD *)v11;
  v51 = 0;
  v69.bottom = 0;
  v49 = 0;
  v60 = v11;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v14 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v11 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v11 + 28);
    return v14;
  }
  if ( !a2 )
  {
    v13 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v13 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v65, a4);
  if ( !v65[0] )
    goto LABEL_78;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v65) )
    goto LABEL_78;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v15 + 496)) )
    goto LABEL_78;
  v16 = v65[0];
  v17 = *(_QWORD *)(v65[0] + 48LL);
  if ( v17 != *(_QWORD *)v60 && v17 != *(_QWORD *)(v52 + 24) )
    goto LABEL_78;
  if ( a3 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v67, a3);
    if ( v67[0] )
    {
      v19 = *(_QWORD *)(v67[0] + 48LL);
      if ( v19 == *(_QWORD *)(v65[0] + 48LL) )
      {
        v18 = v60;
        if ( v19 == *(_QWORD *)v60 || v19 == *(_QWORD *)(v52 + 24) )
        {
          v20 = *(_QWORD *)(v67[0] + 976LL);
          v63 = *(struct PALETTE **)(v67[0] + 88LL);
          v21 = *(_DWORD *)(v20 + 184);
          v56 = *(_DWORD *)(v20 + 176);
          LODWORD(v20) = *(_DWORD *)(v67[0] + 120LL);
          v57 = v21;
          v58 = v20;
          MDCOBJ::~MDCOBJ((MDCOBJ *)v67);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v68);
          v16 = v65[0];
          goto LABEL_21;
        }
      }
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v67);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v68);
LABEL_78:
    v46 = 0;
    goto LABEL_79;
  }
  v18 = v60;
  v57 = 0xFFFFFF;
  v56 = 0;
  v63 = ppalDefault;
  v58 = 0;
LABEL_21:
  x = a7->x;
  y = a7->y;
  v24 = a7->x + a8->cx;
  v25 = *(_QWORD *)(v16 + 496);
  v26 = y + a8->cy;
  v69.left = a7->x;
  v69.right = v24;
  v69.top = y;
  v69.bottom = v26;
  if ( !v25 )
    goto LABEL_76;
  if ( x < 0 )
    goto LABEL_76;
  if ( y < 0 )
    goto LABEL_76;
  if ( x >= v24 )
    goto LABEL_76;
  if ( y >= v26 )
    goto LABEL_76;
  v27 = *(_DWORD *)(v25 + 56);
  if ( v24 > v27 )
    goto LABEL_76;
  v28 = *(_DWORD *)(v25 + 60);
  if ( v26 > v28 )
    goto LABEL_76;
  if ( v64 )
  {
    v53 = 0LL;
    v54 = v27;
    v55 = v28;
    ERECTL::operator*=(&v64->left, (int *)&v53);
  }
  v29 = (struct _SPRITESTATE *)((char *)v18 + 120);
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v18 + 120));
  v30 = (_DWORD *)*((_QWORD *)a1 + 16);
  v31 = 0LL;
  if ( v30 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v30 - 6)) )
  {
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v30 + 62));
    if ( (*(_DWORD *)a1 & 0x200) != 0 )
    {
      v53 = 0LL;
      v54 = v30[8];
      v55 = v30[9];
      ERECTL::operator*=(&v69.left, (int *)&v53);
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v30 + 62));
    v31 = 0LL;
  }
  v32 = *(_QWORD *)(v25 + 128);
  pxlo = v31;
  v33 = *(_QWORD *)(v65[0] + 88LL);
  v62 = v32;
  if ( v32 )
    INC_SHARE_REF_CNT(v32);
  SPRITERANGELOCK::vUnlock(v29);
  if ( v13 != 3 || a6->AlphaFormat )
  {
    v50 = 0;
    v35 = 0;
    NearestIndexFromColorref = 0;
    if ( v13 != 2 )
    {
      v50 = 0;
      NearestIndexFromColorref = 0;
      goto LABEL_44;
    }
  }
  else
  {
    v34 = *a6;
    v13 = 2;
    a6 = &v49;
    v49 = v34;
    v49.AlphaFormat = 1;
    v50 = 1;
    NearestIndexFromColorref = rgbFromColorref(gppalRGB, v33);
    v35 = 1;
  }
  if ( (a6->AlphaFormat & 1) != 0 )
  {
    v59 = 6;
    v36 = gppalRGB;
    v37 = ppalDefault;
    goto LABEL_45;
  }
LABEL_44:
  v59 = 0;
  v36 = *(struct PALETTE **)(v52 + 1776);
  v37 = v63;
LABEL_45:
  v53 = v36;
  if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                       (__int64 *)&pxlo,
                       0LL,
                       v58,
                       v62,
                       (__int64)v36,
                       v33,
                       (__int64)v37,
                       v57,
                       v56,
                       0,
                       0) )
  {
    v51 = 1;
    *((_DWORD *)a1 + 1) = v13;
    *((struct _RECTL *)a1 + 6) = v69;
    if ( v13 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v38 = 1;
      goto LABEL_69;
    }
    if ( v13 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v62, v33, a5, 1LL);
      v39 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v39;
      v38 = *(_DWORD *)(v52 + 44) & 4;
      goto LABEL_61;
    }
    if ( v13 == 2 && (unsigned int)bSpUpdateAlpha(a1, a6, 0) )
    {
      v40 = a6->AlphaFormat & 1;
      if ( !v40 || (unsigned int)bIsSourceBGRA((struct SURFACE *)v25) )
      {
        if ( !v35 )
        {
          if ( v40 )
            v38 = *(_DWORD *)(v52 + 44) & 2;
          else
            v38 = *(_DWORD *)(v52 + 44) & 1;
LABEL_61:
          if ( v38 )
            goto LABEL_69;
          goto LABEL_62;
        }
      }
      else if ( !v35 )
      {
        goto LABEL_74;
      }
      v38 = 0;
LABEL_62:
      if ( *(_WORD *)(v25 + 100) || (*(_BYTE *)(v25 + 102) & 0x20) != 0 )
      {
        if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) )
        {
          v41 = *(_DWORD *)(v25 + 116);
          if ( (v41 & 0x20) == 0 )
          {
            v42 = *(HSURF *)(v25 + 32);
            *(_DWORD *)(v25 + 116) = v41 | 0x20;
            pConvertDfbSurfaceToDibPostNKAPC(v42);
          }
        }
        else
        {
          bConvertDfbDcToDib((struct XDCOBJ *)v65);
        }
        v25 = *(_QWORD *)(v65[0] + 496LL);
      }
LABEL_69:
      vSpDirectDriverAccess(v60, 0);
      v43 = v38 == 0;
      v44 = v64;
      bSpCreateShape(
        a1,
        &gptlZero,
        (struct _SURFOBJ *)((v25 + 24) & -(__int64)(v25 != 0)),
        pxlo,
        &v69,
        v53,
        v59,
        v43,
        v64);
      vSpDirectDriverAccess(v60, 1);
      v45 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( v45 )
      {
        if ( v50 )
        {
          if ( (*(_DWORD *)a1 & 0x40) != 0 )
            *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
          else
            vSpUpdatePerPixelAlphaFromColorKey(v45, NearestIndexFromColorref, v44, 0LL);
        }
        goto LABEL_75;
      }
    }
LABEL_74:
    vSpDeleteShape(a1);
    *((_DWORD *)a1 + 1) = 4;
    v51 = 0;
  }
LABEL_75:
  XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v62);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_76:
  v46 = v51;
LABEL_79:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v65);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v66);
  return v46;
}
