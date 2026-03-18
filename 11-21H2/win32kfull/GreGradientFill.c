/*
 * XREFs of GreGradientFill @ 0x1C0087BF0
 * Callers:
 *     NtGdiGradientFill @ 0x1C00879F0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C00BA304 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C002C6B0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002C6F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002CF6C (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0088264 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0088D80 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00E47F8 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C010B4E4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  char *v9; // r14
  struct _TRIVERTEX *v10; // rsi
  int v11; // r8d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  char *v17; // rax
  unsigned int v18; // r9d
  char *v19; // r8
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r11
  __int64 v26; // rbx
  __int64 v27; // rcx
  COLOR16 Alpha; // ax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r11d
  __int64 v32; // rax
  unsigned int v33; // r15d
  ULONG v34; // ecx
  struct _POINTL *v35; // rbx
  __int64 v36; // r15
  LONG x; // edx
  char *v38; // rcx
  int v39; // r14d
  struct REGION *v40; // rax
  struct ECLIPOBJ *v41; // rdx
  DC *v42; // r15
  struct ECLIPOBJ *v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rbx
  __int64 v46; // r8
  int inited; // eax
  char *v48; // rax
  __int64 v49; // rax
  BOOL (__stdcall *v50)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v52; // [rsp+60h] [rbp-A0h]
  unsigned int v53; // [rsp+64h] [rbp-9Ch]
  struct _POINTL v54[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  char *v56; // [rsp+88h] [rbp-78h]
  DC *v57[2]; // [rsp+90h] [rbp-70h] BYREF
  char v58[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v59[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v60[288]; // [rsp+D0h] [rbp-30h] BYREF
  struct _RECTL si128; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v62[4]; // [rsp+200h] [rbp+100h] BYREF
  char v63[76]; // [rsp+204h] [rbp+104h] BYREF
  __int64 v64; // [rsp+250h] [rbp+150h]
  int v65; // [rsp+258h] [rbp+158h]
  int v66; // [rsp+280h] [rbp+180h]
  __int64 v67; // [rsp+290h] [rbp+190h]

  v56 = a4;
  v7 = 0;
  v52 = a6;
  v9 = a4;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v57, a1);
  if ( !v57[0] || (*((_DWORD *)v57[0] + 9) & 0x10000) != 0 )
  {
    v39 = 0;
LABEL_63:
    v7 = v39;
    goto LABEL_64;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v60);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v60, (struct XDCOBJ *)v57, v11) )
  {
    v39 = XDCOBJ::bFullScreen((XDCOBJ *)v57);
LABEL_60:
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v60);
    if ( v10 )
      Win32FreePool(v10);
    goto LABEL_63;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v59, (struct XDCOBJ *)v57, 0x204u);
  if ( (*(_DWORD *)(v59[0] + 32LL) & 1) != 0 || a6 > 1u )
  {
    v33 = a5;
    v53 = a5;
LABEL_31:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( a3 )
    {
      v35 = (struct _POINTL *)a2;
      v36 = a3;
      do
      {
        v54[0] = *v35;
        EXFORMOBJ::bXform((EXFORMOBJ *)v59, v54, 1uLL);
        x = v54[0].x;
        if ( (*(_DWORD *)(*((_QWORD *)v57[0] + 122) + 108LL) & 1) != 0 )
          x = v54[0].x + 1;
        v38 = (char *)v57[0] + 1024;
        if ( (*((_DWORD *)v57[0] + 10) & 1) == 0 )
          v38 = (char *)v57[0] + 1016;
        v35->x = x + *(_DWORD *)v38;
        v35->y = v54[0].y + *((_DWORD *)v57[0] + 2 * (*((_DWORD *)v57[0] + 10) & 1) + 255);
        v35 += 2;
        --v36;
      }
      while ( v36 );
      v33 = v53;
    }
    v39 = bCalcMeshExtent(a2, a3, v9, v33, v52, &si128);
    if ( v39 )
    {
      v40 = XDCOBJ::prgnEffRao(v57);
      v64 = 0LL;
      v65 = 0;
      v66 = 1;
      v67 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)v62, v40, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v63) )
        goto LABEL_58;
      v42 = v57[0];
      if ( (*((_DWORD *)v57[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v54[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v57, v41, (struct ERECTL *)v54);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v57, v43, (__m128i *)v54);
        v42 = v57[0];
      }
      v44 = *((_QWORD *)v42 + 62);
      if ( !v44 )
      {
LABEL_58:
        v39 = 1;
      }
      else
      {
        ++*(_DWORD *)(v44 + 92);
        v45 = *(_QWORD *)(v44 + 48);
        v55 = 0LL;
        if ( (*(_DWORD *)(v45 + 40) & 0x80u) != 0 || *(_DWORD *)(v44 + 96) <= 3u )
        {
          inited = EXLATEOBJ::bInitXlateObj(
                     &v55,
                     *(_QWORD *)(*((_QWORD *)v57[0] + 122) + 248LL),
                     *((_DWORD *)v57[0] + 30),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v44 + 128),
                     *((_QWORD *)v57[0] + 11),
                     *((_QWORD *)v57[0] + 11),
                     *(_DWORD *)(*((_QWORD *)v57[0] + 122) + 184LL),
                     *(_DWORD *)(*((_QWORD *)v57[0] + 122) + 176LL),
                     0,
                     0);
          v46 = v55;
          v39 = inited;
        }
        else
        {
          v46 = 0LL;
        }
        v48 = (char *)v57[0] + 1024;
        if ( (*((_DWORD *)v57[0] + 10) & 1) == 0 )
          v48 = (char *)v57[0] + 1016;
        v49 = *(_QWORD *)v48;
        v54[0].x = -(int)v49;
        v54[0].y = -HIDWORD(v49);
        if ( *(_DWORD *)(v44 + 96) == 3 || (*(_DWORD *)(v44 + 112) & 0x20000) == 0 )
          v50 = EngGradientFill;
        else
          v50 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v45 + 3208);
        if ( !v39
          || (v39 = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, unsigned int, char *, unsigned int, struct _RECTL *, struct _POINTL *, unsigned int))v50)(
                 v44 + 24,
                 v62,
                 v46,
                 a2,
                 a3,
                 v56,
                 v53,
                 &si128,
                 v54,
                 v52)) )
        {
          v39 = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
      }
    }
    goto LABEL_60;
  }
  v12 = 2LL * a5;
  if ( v12 > 0xFFFFFFFF
    || (v13 = 12LL * (unsigned int)v12, v13 > 0xFFFFFFFF)
    || (v14 = a3 + 2 * a5, v53 = 2 * a5, v14 < 2 * a5)
    || (v15 = 16LL * v14, v15 > 0xFFFFFFFF)
    || (v16 = v15 + v13, (int)v15 + (int)v13 < (unsigned int)v13) )
  {
    v34 = 534;
  }
  else
  {
    if ( v16 <= 0x2710000 )
    {
      if ( v16 )
      {
        v17 = (char *)Win32AllocPool(v16, 1886221383LL);
        v10 = (struct _TRIVERTEX *)v17;
        if ( v17 )
        {
          v18 = 0;
          v19 = &v17[(unsigned int)v15];
          if ( a3 )
          {
            v20 = a3;
            v21 = (char *)a2 - v17;
            v18 = a3;
            do
            {
              *(_OWORD *)v17 = *(_OWORD *)&v17[v21];
              v17 += 16;
              --v20;
            }
            while ( v20 );
          }
          v22 = 0;
          if ( a5 )
          {
            while ( 1 )
            {
              v23 = *(_DWORD *)v9;
              v24 = *((_DWORD *)v9 + 1);
              LODWORD(v55) = v23;
              v54[0].x = v24;
              if ( v23 >= a3 || v24 >= a3 )
                break;
              v25 = v18;
              v26 = v23;
              v27 = v18 + 1;
              v10[v25].x = a2[v24].x;
              v10[v25].y = a2[v26].y;
              v10[v27].x = a2[v26].x;
              v10[v27].y = a2[v24].y;
              if ( a6 == 1 )
              {
                v10[v18].Red = a2[v26].Red;
                v10[v18].Green = a2[v26].Green;
                v10[v18].Blue = a2[v26].Blue;
                v10[v18].Alpha = a2[v26].Alpha;
                v10[v18 + 1].Red = a2[v24].Red;
                v10[v18 + 1].Green = a2[v24].Green;
                v10[v18 + 1].Blue = a2[v24].Blue;
                Alpha = a2[v24].Alpha;
              }
              else
              {
                v10[v18].Red = a2[v24].Red;
                v10[v18].Green = a2[v24].Green;
                v10[v18].Blue = a2[v24].Blue;
                v10[v18].Alpha = a2[v24].Alpha;
                v10[v18 + 1].Red = a2[v26].Red;
                v10[v18 + 1].Green = a2[v26].Green;
                v10[v18 + 1].Blue = a2[v26].Blue;
                Alpha = a2[v26].Alpha;
              }
              v10[v18 + 1].Alpha = Alpha;
              v29 = 2 * v22;
              v30 = 3 * v29;
              *(_DWORD *)&v19[4 * v30] = v55;
              v31 = v18 + 1;
              *(_DWORD *)&v19[4 * v30 + 4] = v18;
              ++v22;
              *(_DWORD *)&v19[4 * v30 + 8] = v18 + 1;
              LODWORD(v30) = v54[0].x;
              v32 = 3LL * (unsigned int)(v29 + 1);
              *(_DWORD *)&v19[4 * v32 + 4] = v18;
              v9 += 8;
              v18 += 2;
              *(_DWORD *)&v19[4 * v32] = v30;
              *(_DWORD *)&v19[4 * v32 + 8] = v31;
              if ( v22 >= a5 )
                goto LABEL_24;
            }
            EngSetLastError(0x57u);
            Win32FreePool(v10);
            goto LABEL_29;
          }
LABEL_24:
          v33 = 2 * a5;
          v9 = v19;
          v56 = v19;
          a2 = v10;
          v52 = 2;
          a3 = v18;
          goto LABEL_31;
        }
      }
    }
    v34 = 8;
  }
  EngSetLastError(v34);
LABEL_29:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v60);
LABEL_64:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v57);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v58);
  return v7;
}
