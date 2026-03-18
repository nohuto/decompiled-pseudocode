/*
 * XREFs of GreRectangle @ 0x1C02ACBA0
 * Callers:
 *     NtGdiRectangle @ 0x1C02AD690 (NtGdiRectangle.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C009BB20 (bFToL.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00DC2A8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C015A6C4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C015A700 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015A8B2 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z @ 0x1C028703C (-vInit@RECTANGLEPATHOBJ@@QEAAXPEAU_RECTL@@H@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02C5058 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 */

__int64 __fastcall GreRectangle(Gre::Base *a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  POINTL *v10; // r8
  LONG v11; // r15d
  LONG v12; // r14d
  int v13; // eax
  POINTL v14; // rdx
  int v15; // ebx
  __int64 v16; // rbx
  POINTL *v17; // rdi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // ecx
  unsigned int v24; // r8d
  int v25; // edx
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  int v38; // ecx
  unsigned int v39; // r8d
  int v40; // edx
  unsigned int v41; // r8d
  LONG v42; // eax
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // edx
  unsigned int v47; // r8d
  int v48; // ecx
  unsigned int v49; // r8d
  int v50; // edx
  unsigned int v51; // r8d
  POINTL v53; // rax
  LONG y; // ebx
  unsigned int v55; // esi
  POINTL v56; // rbx
  int v57; // [rsp+30h] [rbp-D0h] BYREF
  LONG v58; // [rsp+34h] [rbp-CCh]
  POINTL *v59[2]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v60[32]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v61[4]; // [rsp+68h] [rbp-98h] BYREF
  struct _XFORMOBJ v62[2]; // [rsp+78h] [rbp-88h] BYREF
  struct tagRECT v63; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v64[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _POINTL v65; // [rsp+A8h] [rbp-58h] BYREF
  struct _POINTL v66; // [rsp+B0h] [rbp-50h] BYREF
  PATHOBJ v67; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v68; // [rsp+F8h] [rbp-8h]
  PATHOBJ ppo; // [rsp+3B0h] [rbp+2B0h] BYREF

  v58 = a3;
  v9 = Gre::Base::Globals(a1);
  DCOBJ::DCOBJ((DCOBJ *)v59, (HDC)a1);
  v10 = v59[0];
  if ( !v59[0] || (v59[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v59);
    return 0LL;
  }
  else
  {
    v11 = a2 - 1;
    v12 = a4 - 1;
    v13 = *(_DWORD *)(*(_QWORD *)&v59[0][122] + 108LL);
    v63.top = a3;
    if ( (v13 & 1) == 0 )
    {
      v11 = a2;
      v12 = a4;
    }
    v63.left = v11;
    v63.right = v12;
    v63.bottom = a5;
    v14 = v59[0][122];
    v15 = *(_DWORD *)(*(_QWORD *)&v14 + 152LL);
    if ( (v15 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v59[0], *(_QWORD *)(*(_QWORD *)&v14 + 160LL));
      v10 = v59[0];
    }
    if ( (v15 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[122] + 168LL));
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v62, (struct XDCOBJ *)v59, 516);
    v16 = *(_QWORD *)&v62[0].ulReserved;
    v17 = v59[0];
    if ( (*(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 32LL) & 1) != 0 && (v59[0][31].x & 1) == 0 )
    {
      if ( *(_QWORD *)&v59[0][18] == *((_QWORD *)v9 + 32) )
      {
        if ( *(_QWORD *)&v59[0][17] != *((_QWORD *)v9 + 30) || (v59[0][4].y & 0x40) != 0 )
        {
          v18 = *(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 32LL) & 2;
          if ( *(_DWORD *)(*(_QWORD *)&v59[0][122] + 208LL) == 2 )
          {
            if ( v18 )
            {
              v27 = (*(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 24LL) + 15) >> 4;
              v63.left += v27;
              v63.right += v27;
              v28 = (*(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 28LL) + 15) >> 4;
              v63.top += v28;
              v63.bottom += v28;
            }
            else
            {
              v57 = 0;
              bFToL((float)v63.left * **(float **)&v62[0].ulReserved, &v57, 0);
              v63.left = (v57 + 15 + *(_DWORD *)(v16 + 24)) >> 4;
              v57 = 0;
              bFToL((float)v63.right * *(float *)v16, &v57, v29);
              v63.right = (v57 + 15 + *(_DWORD *)(v16 + 24)) >> 4;
              v57 = 0;
              bFToL((float)v63.top * *(float *)(v16 + 12), &v57, v30);
              v63.top = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
              v57 = 0;
              bFToL((float)v63.bottom * *(float *)(v16 + 12), &v57, v31);
              v63.bottom = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
            }
            ERECTL::vOrder((ERECTL *)&v63);
          }
          else
          {
            if ( v18 )
            {
              v19 = ((*(int *)(*(_QWORD *)&v62[0].ulReserved + 24LL) >> 3) + 1) >> 1;
              v63.left += v19;
              v63.right += v19;
              v20 = ((*(int *)(*(_QWORD *)&v62[0].ulReserved + 28LL) >> 3) + 1) >> 1;
              v63.top += v20;
              v63.bottom += v20;
            }
            else
            {
              v57 = 0;
              bFToL((float)v63.left * **(float **)&v62[0].ulReserved, &v57, 0);
              v21 = ((*(_DWORD *)(v16 + 24) + v57) >> 3) + 1;
              v57 = 0;
              v63.left = v21 >> 1;
              bFToL((float)v63.right * *(float *)v16, &v57, v22);
              v23 = ((*(_DWORD *)(v16 + 24) + v57) >> 3) + 1;
              v57 = 0;
              v63.right = v23 >> 1;
              bFToL((float)v63.top * *(float *)(v16 + 12), &v57, v24);
              v25 = ((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1;
              v57 = 0;
              v63.top = v25 >> 1;
              bFToL((float)v63.bottom * *(float *)(v16 + 12), &v57, v26);
              v63.bottom = (((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1) >> 1;
            }
            ERECTL::vOrder((ERECTL *)&v63);
            --v63.right;
            --v63.bottom;
          }
          if ( !IsRectEmptyInl(&v63) )
          {
            v32 = GreRectBlt((struct DCOBJ *)v59, (struct ERECTL *)&v63);
LABEL_44:
            v43 = v32;
            goto LABEL_50;
          }
        }
LABEL_46:
        v43 = 1;
        goto LABEL_50;
      }
      if ( (v59[0][26].x & 1) == 0 )
      {
        v33 = *(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 32LL) & 2;
        if ( *(_DWORD *)(*(_QWORD *)&v59[0][122] + 208LL) == 2 )
        {
          if ( v33 )
          {
            v44 = (*(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 24LL) + 15) >> 4;
            v63.left += v44;
            v63.right += v44;
            v45 = (*(_DWORD *)(*(_QWORD *)&v62[0].ulReserved + 28LL) + 15) >> 4;
            v63.top += v45;
            v63.bottom += v45;
          }
          else
          {
            v57 = 0;
            bFToL((float)v63.left * **(float **)&v62[0].ulReserved, &v57, 0);
            v46 = v57 + 15 + *(_DWORD *)(v16 + 24);
            v57 &= v47;
            v63.left = v46 >> 4;
            bFToL((float)v63.right * *(float *)v16, &v57, v47);
            v48 = v57 + 15 + *(_DWORD *)(v16 + 24);
            v57 &= v49;
            v63.right = v48 >> 4;
            bFToL((float)v63.top * *(float *)(v16 + 12), &v57, v49);
            v50 = v57 + 15 + *(_DWORD *)(v16 + 28);
            v57 &= v51;
            v63.top = v50 >> 4;
            bFToL((float)v63.bottom * *(float *)(v16 + 12), &v57, v51);
            v63.bottom = (v57 + 15 + *(_DWORD *)(v16 + 28)) >> 4;
          }
          ERECTL::vOrder((ERECTL *)&v63);
        }
        else
        {
          if ( v33 )
          {
            v34 = ((*(int *)(*(_QWORD *)&v62[0].ulReserved + 24LL) >> 3) + 1) >> 1;
            v63.left += v34;
            v63.right += v34;
            v35 = ((*(int *)(*(_QWORD *)&v62[0].ulReserved + 28LL) >> 3) + 1) >> 1;
            v63.top += v35;
            v63.bottom += v35;
          }
          else
          {
            v57 = 0;
            bFToL((float)v63.left * **(float **)&v62[0].ulReserved, &v57, 0);
            v36 = *(_DWORD *)(v16 + 24) + v57;
            v57 &= v37;
            v63.left = ((v36 >> 3) + 1) >> 1;
            bFToL((float)v63.right * *(float *)v16, &v57, v37);
            v38 = *(_DWORD *)(v16 + 24) + v57;
            v57 &= v39;
            v63.right = ((v38 >> 3) + 1) >> 1;
            bFToL((float)v63.top * *(float *)(v16 + 12), &v57, v39);
            v40 = *(_DWORD *)(v16 + 28) + v57;
            v57 &= v41;
            v63.top = ((v40 >> 3) + 1) >> 1;
            bFToL((float)v63.bottom * *(float *)(v16 + 12), &v57, v41);
            v63.bottom = (((*(_DWORD *)(v16 + 28) + v57) >> 3) + 1) >> 1;
          }
          ERECTL::vOrder((ERECTL *)&v63);
          v42 = v63.bottom - 1;
          --v63.right;
          --v63.bottom;
          if ( v63.left > v63.right || v63.top > v42 )
          {
            v43 = 1;
LABEL_50:
            DCOBJ::~DCOBJ((DCOBJ *)v59);
            return v43;
          }
        }
        RECTANGLEPATHOBJ::vInit((RECTANGLEPATHOBJ *)&ppo, (struct _RECTL *)&v63, v17[31].x & 4);
        if ( *(_QWORD *)&v59[0][17] == *((_QWORD *)v9 + 30) )
        {
          if ( (v59[0][4].y & 0x40) != 0 )
          {
            v61[1] = v58;
            v61[0] = v11;
            v61[2] = v12;
            v61[3] = a5;
            XDCOBJ::vAccumulate((XDCOBJ *)v59, (struct ERECTL *)v61);
          }
        }
        else
        {
          ++v63.left;
          ++v63.top;
          if ( !IsRectEmptyInl(&v63) && !(unsigned int)GreRectBlt((struct DCOBJ *)v59, (struct ERECTL *)&v63) )
          {
            v43 = 0;
            goto LABEL_50;
          }
        }
        v32 = EPATHOBJ::bStrokeAndOrFill(&ppo, v59, (LINEATTRS *)&v17[26], 0LL, 1u);
        goto LABEL_44;
      }
    }
    EBOX::EBOX((EBOX *)v64, (struct DCOBJ *)v59, (struct _RECTL *)&v63, (struct _LINEATTRS *)&v59[0][26], 0);
    if ( v64[0] )
      goto LABEL_46;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v67, (DC **)v59, 1);
    if ( !v68 )
    {
      EngSetLastError(8u);
LABEL_49:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v67);
      v43 = 0;
      goto LABEL_50;
    }
    if ( !(unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)&v67, 0LL, &v65)
      || !(unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)&v67, 0LL, &v66, 3u)
      || !EPATHOBJ::bCloseFigure((EPATHOBJ *)&v67) )
    {
      goto LABEL_49;
    }
    if ( (v59[0][31].x & 1) != 0 )
    {
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v67);
      goto LABEL_46;
    }
    v53 = v59[0][18];
    if ( v64[1] )
    {
      v56 = v59[0][17];
      v59[0][17] = v53;
      v59[0][39].y |= 1u;
      v55 = EPATHOBJ::bStrokeAndOrFill(&v67, v59, 0LL, 0LL, 2u);
      v59[0][17] = v56;
      v59[0][39].y |= 1u;
    }
    else
    {
      y = v17[26].y;
      if ( (*(_DWORD *)(*(_QWORD *)&v53 + 40LL) & 0x800) != 0 )
        v17[26].y = 2;
      v55 = EPATHOBJ::bStrokeAndOrFill(&v67, v59, (LINEATTRS *)&v17[26], v62, 3u);
      v17[26].y = y;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v67);
    if ( v59[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v59);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v60);
    return v55;
  }
}
