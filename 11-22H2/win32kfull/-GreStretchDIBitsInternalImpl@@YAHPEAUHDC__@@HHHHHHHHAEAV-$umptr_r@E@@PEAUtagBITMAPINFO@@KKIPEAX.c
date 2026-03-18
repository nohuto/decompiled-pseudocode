/*
 * XREFs of ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00DCE70 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001EF80 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     EngCopyBits @ 0x1C0030980 (EngCopyBits.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     NtGdiPatBlt @ 0x1C00DBEF0 (NtGdiPatBlt.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E0C08 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00E0C6C (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00FE930 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011CD7C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02D8F10 (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02D8FAC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DC558 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1C02DDE1C (-GreCreateDIBitmapComp@@YAPEAUHBITMAP__@@PEAUHDC__@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEA.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02DE438 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternalImpl(
        HDC a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        __int64 a15)
{
  unsigned int v15; // r14d
  unsigned int v17; // r12d
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  signed int v22; // eax
  BOOL v23; // edi
  __int64 v24; // rcx
  int v25; // ecx
  unsigned int v26; // r11d
  __int64 v27; // r8
  int v28; // r13d
  int v29; // edx
  __int64 v30; // r10
  unsigned int v31; // r15d
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // eax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // edx
  unsigned __int64 v40; // rdx
  unsigned int v41; // edi
  DC *v42; // r9
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  DC *v46; // rcx
  int v47; // eax
  DC *v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rsi
  int v53; // eax
  LONG v54; // edx
  LONG v55; // r8d
  int v56; // r9d
  char v57; // cl
  LONG y; // edx
  void *v59; // r8
  int v60; // eax
  bool v61; // zf
  Gre::Base *v62; // r12
  __int64 v63; // rdi
  _QWORD *v64; // rbx
  int IsPalDefault; // eax
  Gre::Base *v66; // rcx
  unsigned int v67; // r8d
  POINTL v68; // rdx
  int v69; // esi
  Gre::Base *v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r8
  __int64 v73; // rcx
  int v74; // eax
  LONG v75; // r8d
  int v76; // r9d
  int v77; // eax
  unsigned int v78; // esi
  int v79; // ecx
  char v80; // bl
  int v81; // edx
  int v82; // eax
  struct REGION *v83; // rax
  struct ECLIPOBJ *v84; // rdx
  __int64 v85; // rax
  POINTL v86; // rdx
  int v87; // r15d
  __int64 v88; // rax
  BOOL (__stdcall *v89)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r11
  LONG x; // ecx
  LONG v91; // ecx
  char *v92; // r8
  unsigned int v93; // ebx
  int v94; // r12d
  int v95; // edi
  __int64 CompatibleDC; // r15
  __int64 DIBitmapComp; // rax
  __int64 v98; // rsi
  Gre::Base *v99; // rcx
  int v100; // ebx
  unsigned int v101; // [rsp+80h] [rbp-80h]
  unsigned int v102; // [rsp+84h] [rbp-7Ch]
  unsigned int v103; // [rsp+88h] [rbp-78h]
  int v104; // [rsp+8Ch] [rbp-74h]
  unsigned int v105; // [rsp+90h] [rbp-70h]
  unsigned int v106; // [rsp+94h] [rbp-6Ch]
  unsigned int v107; // [rsp+94h] [rbp-6Ch]
  unsigned int v108; // [rsp+98h] [rbp-68h]
  char v109; // [rsp+98h] [rbp-68h]
  int v110; // [rsp+9Ch] [rbp-64h]
  unsigned int v111; // [rsp+A0h] [rbp-60h]
  unsigned int v112; // [rsp+A0h] [rbp-60h]
  unsigned int v113; // [rsp+A4h] [rbp-5Ch]
  int v115; // [rsp+A8h] [rbp-58h]
  POINTL pptlSrc; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v117; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v118; // [rsp+C8h] [rbp-38h]
  unsigned int v119; // [rsp+D8h] [rbp-28h]
  unsigned int v120; // [rsp+DCh] [rbp-24h]
  unsigned int v121; // [rsp+E0h] [rbp-20h]
  int v122; // [rsp+E4h] [rbp-1Ch]
  LONG v123; // [rsp+E8h] [rbp-18h]
  int v124; // [rsp+ECh] [rbp-14h]
  int v125; // [rsp+F0h] [rbp-10h]
  int v126; // [rsp+F4h] [rbp-Ch]
  Gre::Base *XlateObject; // [rsp+F8h] [rbp-8h] BYREF
  char v128; // [rsp+100h] [rbp+0h]
  int v129; // [rsp+104h] [rbp+4h]
  __int64 v130; // [rsp+108h] [rbp+8h] BYREF
  int v131; // [rsp+110h] [rbp+10h]
  __int64 v132; // [rsp+118h] [rbp+18h] BYREF
  char v133; // [rsp+120h] [rbp+20h]
  int v134; // [rsp+124h] [rbp+24h]
  DC *v135[2]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v136[32]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v137[2]; // [rsp+158h] [rbp+58h] BYREF
  DC *v138[2]; // [rsp+168h] [rbp+68h] BYREF
  _OWORD v139[2]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v140[12]; // [rsp+198h] [rbp+98h] BYREF
  int v141; // [rsp+1A4h] [rbp+A4h]
  __int64 v142[3]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v143[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v144[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v145[64]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _POINTL v146; // [rsp+230h] [rbp+130h] BYREF
  LONG v147; // [rsp+238h] [rbp+138h]
  LONG v148; // [rsp+23Ch] [rbp+13Ch]
  HDC v149; // [rsp+240h] [rbp+140h] BYREF
  int v150; // [rsp+248h] [rbp+148h]
  int v151; // [rsp+24Ch] [rbp+14Ch]
  RECTL prclDest; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v153[4]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v154[3]; // [rsp+264h] [rbp+164h] BYREF
  __int64 v155; // [rsp+298h] [rbp+198h]
  __int64 v156; // [rsp+2B0h] [rbp+1B0h]
  int v157; // [rsp+2B8h] [rbp+1B8h]
  int v158; // [rsp+2E0h] [rbp+1E0h]
  __int64 v159; // [rsp+2F0h] [rbp+1F0h]

  v15 = 0;
  v17 = 0;
  pptlSrc = (POINTL)a10;
  v137[0] = a15;
  v149 = a1;
  v126 = a4;
  v61 = (gajRop3[BYTE2(a13)] & 0xD4) == 0;
  v123 = a3;
  v104 = a12;
  v125 = a5;
  v105 = 0;
  if ( v61 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  v135[0] = 0LL;
  v135[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v136);
  XDCOBJ::vLock((XDCOBJ *)v135, a1);
  if ( !v135[0]
    || !a11
    || !**(_QWORD **)&pptlSrc
    || a12 > 2
    || a14 < 0xC
    || (v108 = *(_DWORD *)a11, a14 < *(_DWORD *)a11)
    || *(_DWORD *)a11 < 0x28u
    || *(int *)(a11 + 4) <= 0
    || !*(_DWORD *)(a11 + 8) )
  {
LABEL_120:
    if ( v135[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v135);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v136);
    return v17;
  }
  v122 = *(unsigned __int8 *)(*((_QWORD *)v135[0] + 122) + 215LL);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v142, (struct XDCOBJ *)v135, 516);
  v18 = *(_DWORD *)(a11 + 16);
  v19 = v142[0];
  if ( v18 - 4 > 1 )
  {
    v20 = a12;
  }
  else
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v135, v18) )
      goto LABEL_281;
    if ( BYTE2(a13) != 204 )
      goto LABEL_281;
    if ( (*(_DWORD *)(v19 + 32) & 1) == 0 )
      goto LABEL_281;
    v20 = a12;
    if ( a12 || v137[0] )
      goto LABEL_281;
  }
  if ( v126 == a8 )
  {
    v21 = a9;
    if ( v125 == a9
      && a9 > 0
      && a8 > 0
      && !(a7 | a6)
      && BYTE2(a13) == 204
      && v122 != 4
      && (*(_DWORD *)(v19 + 32) & 2) != 0 )
    {
      v22 = abs32(*(_DWORD *)(a11 + 8));
      if ( a9 >= v22 )
        v21 = v22;
      v15 = GreSetDIBitsToDeviceInternalImpl(
              a1,
              a2,
              v123,
              v126,
              v125,
              a6,
              a7,
              a7,
              v21,
              *(_QWORD **)&pptlSrc,
              (unsigned int *)a11,
              v20,
              a14,
              1,
              v137[0]);
      goto LABEL_281;
    }
  }
  v23 = 0;
  if ( v20 == 1 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v144);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v143, (struct XDCOBJ *)v135, 0);
    v24 = *((_QWORD *)v135[0] + 62);
    if ( v24 )
      v23 = *(_DWORD *)(v24 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v143);
    if ( v144[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v144);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v145);
    v19 = v142[0];
    v20 = a12;
  }
  if ( BYTE2(a13) != 204 || (*(_DWORD *)(v19 + 32) & 1) == 0 || v23 )
  {
    v94 = *(_DWORD *)(a11 + 8);
    if ( v94 <= 0 )
      v95 = a7;
    else
      v95 = v94 - a7 - a9;
    CompatibleDC = GreCreateCompatibleDC(a1);
    if ( (unsigned int)(*(_DWORD *)(a11 + 16) - 1) <= 1 )
      DIBitmapComp = GreCreateDIBitmapComp(a1, *(_QWORD *)&pptlSrc, a11, a12, a14, v137[0]);
    else
      DIBitmapComp = GreCreateDIBitmapReal(
                       a1,
                       4u,
                       *(__int64 **)&pptlSrc,
                       (unsigned int *)a11,
                       a12,
                       a14,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    v98 = DIBitmapComp;
    if ( CompatibleDC && DIBitmapComp )
    {
      GreSelectBitmap(CompatibleDC, DIBitmapComp);
      Gre::Base::Globals(v99);
      v100 = GreStretchBltInternal(v149, v125, CompatibleDC, a6, v95, a8, a9, a13, 0xFFFFFF, 1);
      GrepDeleteDC(CompatibleDC, 0x400000LL);
      GreDeleteObject(v98);
      if ( v100 )
        goto LABEL_280;
    }
    else
    {
      GrepDeleteDC(CompatibleDC, 0x400000LL);
      GreDeleteObject(v98);
    }
    v94 = 0;
LABEL_280:
    v15 = v94;
    goto LABEL_281;
  }
  v25 = *(_DWORD *)(a11 + 8);
  v26 = v108;
  v27 = *(unsigned __int16 *)(a11 + 14);
  v28 = 1;
  v29 = *(_DWORD *)(a11 + 16);
  v17 = 0;
  v30 = *(unsigned int *)(a11 + 4);
  v31 = 0;
  LODWORD(XlateObject) = *(_DWORD *)(a11 + 32);
  v149 = (HDC)(a11 + v108);
  v118 = 0LL;
  v111 = v27;
  v117 = 0LL;
  v110 = v29;
  v32 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v106 = v30;
  v101 = 0;
  if ( v25 < 0 )
    v32 = 1;
  v102 = 0;
  DWORD2(v118) = v32;
  v121 = 0;
  v33 = -v25;
  v120 = 0;
  v119 = 0;
  v124 = 0;
  if ( v25 >= 0 )
    v33 = v25;
  v103 = v33;
  if ( v29 == 3 )
  {
    if ( a14 < 0x34 )
    {
      EngSetLastError(0x57u);
      LODWORD(v30) = v106;
      v28 = 0;
      v34 = v103;
LABEL_58:
      v101 = 0;
LABEL_147:
      v41 = 0;
      goto LABEL_148;
    }
    v35 = 0;
    if ( v20 != 1 )
      v35 = v20;
    v104 = v35;
    if ( (_DWORD)v27 == 16 )
    {
      LODWORD(v117) = 4;
    }
    else if ( (_DWORD)v27 == 32 )
    {
      LODWORD(v117) = 6;
    }
    else
    {
      EngSetLastError(0x57u);
      LODWORD(v27) = v111;
      v28 = 0;
    }
    LODWORD(v30) = v106;
    v121 = *(_DWORD *)(a11 + 40);
    v17 = 2;
    v120 = *(_DWORD *)(a11 + 44);
    v31 = 512;
    v119 = *(_DWORD *)(a11 + 48);
    v36 = (unsigned int)v27 * (unsigned __int64)v106;
    v149 = (HDC)(a11 + 40);
    v102 = 2;
    if ( v36 > 0xFFFFFFFF || (int)v36 + 31 < (unsigned int)v36 )
      goto LABEL_82;
    v34 = v103;
    v37 = v103 * (unsigned __int64)(((unsigned int)(v36 + 31) >> 3) & 0x1FFFFFFC);
    if ( v37 <= 0xFFFFFFFF )
    {
      HIDWORD(v117) = v37;
      goto LABEL_58;
    }
    goto LABEL_81;
  }
  if ( !v29 )
  {
    if ( (_DWORD)v27 == 1 )
    {
      v101 = 2;
      LODWORD(v117) = 1;
      v17 = 1;
    }
    else
    {
      if ( (_DWORD)v27 == 4 )
      {
        LODWORD(v117) = 2;
        v101 = 16;
      }
      else
      {
        if ( (_DWORD)v27 != 8 )
        {
          v38 = 0;
          if ( v20 != 1 )
            v38 = v20;
          v104 = v38;
          switch ( (_DWORD)v27 )
          {
            case 0x10:
              LODWORD(v117) = 4;
              v17 = 2;
              v121 = 31744;
              v120 = 992;
              v119 = 31;
              break;
            case 0x18:
              LODWORD(v117) = 5;
              v17 = 8;
              break;
            case 0x20:
              LODWORD(v117) = 6;
              v17 = 8;
              v101 = 0;
              v31 = 512;
              goto LABEL_77;
            default:
              goto LABEL_119;
          }
          v101 = 0;
          v31 = 512;
          v104 = v38;
LABEL_77:
          v102 = v17;
          v39 = v27 * v30;
          if ( (unsigned __int64)(v27 * v30) > 0xFFFFFFFF || v39 + 31 < v39 )
            goto LABEL_82;
          v34 = v103;
          v40 = v103 * (unsigned __int64)(((v39 + 31) >> 3) & 0x1FFFFFFC);
          if ( v40 <= 0xFFFFFFFF )
          {
            v41 = v101;
            HIDWORD(v117) = v40;
LABEL_149:
            if ( !v28 )
            {
LABEL_164:
              v17 = 0;
              goto LABEL_120;
            }
            v29 = v110;
LABEL_151:
            v113 = a14 - v26;
            v50 = v137[0];
            if ( !v137[0] )
            {
              v50 = *(_QWORD *)(*((_QWORD *)v135[0] + 122) + 248LL);
              v137[0] = v50;
            }
            v107 = *((_DWORD *)v135[0] + 30);
            if ( (v107 & 0x10000000) != 0 && (!v50 || (unsigned int)(v29 - 10) > 2) )
              v107 = v107 & 0xFFFFFFF | 0x20000000;
            *(_QWORD *)((char *)&v117 + 4) = __PAIR64__(v34, v30);
            if ( (_DWORD)XlateObject )
            {
              v51 = v41;
              if ( (unsigned int)XlateObject <= v41 )
                v51 = (unsigned int)XlateObject;
              v112 = v51;
            }
            else
            {
              v112 = v41;
            }
            if ( *(_QWORD *)(*(_QWORD *)&pptlSrc + 8LL) - *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL) < (unsigned __int64)HIDWORD(v117) )
            {
              EngSetLastError(0x57u);
              goto LABEL_164;
            }
            v52 = *((_QWORD *)v135[0] + 6);
            v146.x = a2;
            v147 = a2 + v126;
            v146.y = v123;
            v148 = v123 + v125;
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v140, (struct XDCOBJ *)v135, 516);
            v53 = EXFORMOBJ::bXform((EXFORMOBJ *)v140, &v146, 2LL);
            if ( v141 )
            {
              ++v146.x;
              ++v147;
            }
            if ( !v53 )
              goto LABEL_164;
            if ( ERECTL::bEmpty((ERECTL *)&v146) )
            {
              v17 = a9;
              goto LABEL_120;
            }
            v57 = 0;
            v109 = 0;
            if ( v55 > v54 )
            {
              v146.x = v54;
              v147 = v55;
              if ( !v141 )
              {
                v146.x = v54 + 1;
                v147 = v55 + 1;
              }
              v57 = v56;
              v109 = v56;
            }
            y = v146.y;
            if ( v146.y > v148 )
            {
              v146.y = v148 + 1;
              v109 = v57 ^ 2;
              v148 = y + 1;
            }
            v131 = 0;
            v130 = 0LL;
            if ( !v104 && !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v130, v17, v41, 0LL, v121, v120, v119, v31, v56) )
            {
LABEL_267:
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v130);
              v17 = v105;
              goto LABEL_120;
            }
            DLODCOBJ::DLODCOBJ((DLODCOBJ *)v144);
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v143, (struct XDCOBJ *)v135, 0);
            v59 = (void *)(**(_QWORD **)&pptlSrc + *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL));
            v60 = *(_DWORD *)(*((_QWORD *)v135[0] + 6) + 40LL) & 0x8000;
            *(_QWORD *)&v118 = 0LL;
            DWORD2(v118) |= 8 * v60;
            v132 = 0LL;
            v133 = 0;
            v134 = 0;
            if ( v124 )
            {
              XlateObject = 0LL;
              v128 = 0;
              v129 = 0;
              *(_OWORD *)v138 = v117;
              v139[0] = v118;
              if ( SURFMEM::bCreateDIB(
                     (SURFMEM *)&XlateObject,
                     (struct _DEVBITMAPINFO *)v138,
                     v59,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     0,
                     1,
                     0,
                     0)
                && (LODWORD(v117) = ((_DWORD)v117 != 7) + 2,
                    SURFMEM::bCreateDIB(
                      (SURFMEM *)&v132,
                      (struct _DEVBITMAPINFO *)&v117,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0)) )
              {
                *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v117 + 4);
                *(_QWORD *)&prclDest.left = 0LL;
                pptlSrc = 0LL;
                EngCopyBits(
                  (SURFOBJ *)((v132 + 24) & -(__int64)(v132 != 0)),
                  (SURFOBJ *)(((unsigned __int64)XlateObject + 24) & -(__int64)(XlateObject != 0LL)),
                  0LL,
                  0LL,
                  &prclDest,
                  &pptlSrc);
              }
              else
              {
                v28 = 0;
              }
              SURFMEM::~SURFMEM((SURFMEM *)&XlateObject);
              v61 = v28 == 0;
            }
            else
            {
              v61 = SURFMEM::bCreateDIB(
                      (SURFMEM *)&v132,
                      (struct _DEVBITMAPINFO *)&v117,
                      v59,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0) == 0;
            }
            if ( v61 )
            {
LABEL_264:
              SURFMEM::~SURFMEM((SURFMEM *)&v132);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v143);
              if ( v144[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v144);
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v145);
              goto LABEL_267;
            }
            pptlSrc = (POINTL)XDCOBJ::pSurfaceEff((XDCOBJ *)v135);
            v62 = 0LL;
            XlateObject = 0LL;
            v63 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 128LL);
            v64 = (_QWORD *)*((_QWORD *)v135[0] + 11);
            *(_QWORD *)&prclDest.left = v64;
            v115 = 0;
            IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&prclDest);
            v68 = pptlSrc;
            if ( !IsPalDefault )
              *(_QWORD *)(*(_QWORD *)&pptlSrc + 176LL) = *v64;
            if ( v104 )
            {
              if ( v104 == 1 )
              {
                if ( v113 < 2 * (unsigned __int64)v112
                  || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EXLATEOBJ::bMakeXlate)(
                                      &XlateObject,
                                      v149,
                                      v64,
                                      v68,
                                      v112,
                                      v101) )
                {
                  goto LABEL_263;
                }
                v62 = XlateObject;
                if ( *((_DWORD *)Gre::Base::Globals(v70) + 812) && (*(_DWORD *)(v52 + 40) & 1) != 0 )
                {
                  if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v130, v102, v101, 0LL, v121, v120, v119, v31, 1) )
                  {
                    v71 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 128LL);
                    if ( !v71 )
                      v71 = *(_QWORD *)(v52 + 1776);
                    XEPALOBJ::vGetEntriesFrom(&v130, v64, v71, v149, v112);
                    v115 = 1;
                  }
                  else
                  {
                    v28 = 0;
                  }
                }
              }
              else
              {
                if ( v104 != 2 )
                {
                  v69 = v110;
LABEL_217:
                  if ( (*((_DWORD *)v135[0] + 9) & 0xE0) != 0 )
                    XDCOBJ::vAccumulate((XDCOBJ *)v135, (struct ERECTL *)&v146);
                  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v135) )
                  {
                    v105 = v103;
                  }
                  else if ( (v143[24] & 1) != 0 )
                  {
                    v73 = *(_DWORD *)(v72 + 40) & 1LL;
                    v146.x += *(_DWORD *)(v72 + 8 * v73 + 1016);
                    v147 += *(_DWORD *)(v72 + 8 * v73 + 1016);
                    v146.y += *(_DWORD *)(v72 + 8 * v73 + 1020);
                    v74 = *(_DWORD *)(v72 + 8 * v73 + 1020);
                    v75 = a6;
                    v148 += v74;
                    LODWORD(v149) = a6;
                    if ( v69 == 4 && (BYTE8(v118) & 1) != 0 )
                    {
                      v76 = a7;
                      v77 = a9;
                      v78 = v103;
                    }
                    else
                    {
                      v78 = v103;
                      v77 = a9;
                      v76 = v103 - a7 - a9;
                    }
                    v79 = v76 + v77;
                    v80 = v109;
                    v81 = a6 + a8;
                    HIDWORD(v149) = v76;
                    v151 = v76 + v77;
                    v150 = a6 + a8;
                    if ( a6 > a6 + a8 )
                    {
                      v75 = v81 + 1;
                      v80 = v109 ^ 1;
                      v81 = a6 + 1;
                      LODWORD(v149) = v75;
                      v150 = a6 + 1;
                    }
                    if ( v76 > v79 )
                    {
                      v82 = v76;
                      v80 ^= 2u;
                      v76 = v79 + 1;
                      HIDWORD(v149) = v79 + 1;
                      v79 = v82 + 1;
                      v151 = v82 + 1;
                    }
                    if ( v81 > 0
                      && v79 > 0
                      && v75 < *(_DWORD *)(v132 + 56)
                      && v76 < *(_DWORD *)(v132 + 60)
                      && !ERECTL::bEmpty((ERECTL *)&v149) )
                    {
                      v83 = XDCOBJ::prgnEffRao(v135);
                      v155 = 0LL;
                      v156 = 0LL;
                      v157 = 0;
                      v158 = 1;
                      v159 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v153, v83, (struct ERECTL *)&v146, 0);
                      if ( ERECTL::bEmpty((ERECTL *)v154) )
                      {
                        v105 = v78;
                      }
                      else
                      {
                        if ( (*((_DWORD *)v135[0] + 9) & 0xE0) != 0 )
                        {
                          *(_OWORD *)v137 = v154[0];
                          XDCOBJ::vAccumulateTight((XDCOBJ *)v135, v84, (__m128i *)v137);
                        }
                        if ( v115 )
                        {
                          v85 = v130;
                          if ( v130 )
                          {
                            INC_SHARE_REF_CNT(v130);
                            v85 = v130;
                          }
                          *(_QWORD *)(v132 + 128) = v85;
                        }
                        v86 = pptlSrc;
                        v87 = v122;
                        v88 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 48LL);
                        if ( (*(_DWORD *)(*(_QWORD *)&pptlSrc + 112LL) & 2) != 0 )
                        {
                          v89 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v88 + 2824);
                          if ( (*(_DWORD *)(v88 + 40) & 0x20000) == 0 )
                          {
                            if ( v122 == 4 && (*((_BYTE *)v135[0] + 72) & 0x10) == 0 )
                              v89 = EngStretchBlt;
                            if ( (int)v149 < 0
                              || SHIDWORD(v149) < 0
                              || v150 > *(_DWORD *)(v132 + 56)
                              || v151 > *(_DWORD *)(v132 + 60) )
                            {
                              v89 = EngStretchBlt;
                            }
                          }
                        }
                        else
                        {
                          v89 = EngStretchBlt;
                        }
                        if ( (v80 & 1) != 0 )
                        {
                          x = v146.x;
                          v146.x = v147;
                          v147 = x;
                        }
                        if ( (v80 & 2) != 0 )
                        {
                          v91 = v146.y;
                          v146.y = v148;
                          v148 = v91;
                        }
                        ++*(_DWORD *)(*(_QWORD *)&pptlSrc + 92LL);
                        v92 = 0LL;
                        if ( *((__int16 *)v135[0] + 89) >= 0 )
                          v92 = (char *)v135[0] + 176;
                        v93 = 0;
                        if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, Gre::Base *, char *, char *, struct _POINTL *, HDC *, _QWORD, int))v89)(
                               *(_QWORD *)&v86 + 24LL,
                               (v132 + 24) & -(__int64)(v132 != 0),
                               0LL,
                               v153,
                               v62,
                               v92,
                               (char *)v135[0] + 1192,
                               &v146,
                               &v149,
                               0LL,
                               v87) )
                        {
                          v93 = v78;
                        }
                        v105 = v93;
                      }
                    }
                  }
                  goto LABEL_263;
                }
                if ( *(_DWORD *)(*(_QWORD *)&v68 + 96LL) != (_DWORD)v117 )
                  v28 = 0;
                v62 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v66) + 6896);
              }
              v69 = v110;
            }
            else if ( v112 )
            {
              if ( v113 < 4 * v112 )
                goto LABEL_263;
              v69 = v110;
              if ( (unsigned int)(v110 - 10) <= 2 )
                XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v130, (const unsigned int *)v149, v67, v112);
              else
                XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v130, (struct tagRGBQUAD *)v149, 0, v112);
              XlateObject = (Gre::Base *)CreateXlateObject(v137[0], v107, v130, v63, v64, v64, 0, 0, 0xFFFFFF, 0);
              v62 = XlateObject;
              if ( !XlateObject )
                v28 = 0;
            }
            else
            {
              v69 = v110;
              v62 = (Gre::Base *)CreateXlateObject(v137[0], v107, v130, v63, v64, v64, 0, 0, 0xFFFFFF, 0);
              XlateObject = v62;
              if ( !v62 )
                v28 = 0;
            }
            if ( v28 )
              goto LABEL_217;
LABEL_263:
            EXLATEOBJ::vAltUnlock(&XlateObject);
            goto LABEL_264;
          }
LABEL_81:
          HIDWORD(v117) = -1;
LABEL_82:
          EngSetLastError(0x216u);
LABEL_281:
          DCOBJ::~DCOBJ((DCOBJ *)v135);
          return v15;
        }
        LODWORD(v117) = 3;
        v101 = 256;
      }
      v17 = 1;
    }
    v31 = 1024;
    goto LABEL_77;
  }
  if ( v29 != 10 )
  {
    if ( v29 != 2 )
    {
      if ( v29 != 12 )
      {
        if ( v29 != 1 )
        {
          if ( v29 != 11 )
          {
            if ( v29 == 4 )
            {
              LODWORD(v117) = 9;
            }
            else
            {
              if ( v29 != 5 )
              {
LABEL_119:
                EngSetLastError(0x57u);
                goto LABEL_120;
              }
              LODWORD(v117) = 10;
            }
            v17 = 8;
            v34 = v33;
            v41 = 0;
            v102 = 8;
            v31 = 512;
            v101 = 0;
            HIDWORD(v117) = *(_DWORD *)(a11 + 20);
            goto LABEL_151;
          }
          DCOBJ::DCOBJ((DCOBJ *)v138, a1);
          if ( !v138[0] || !(unsigned int)DC::bIsCMYKColor(v138[0]) )
          {
            EngSetLastError(0x57u);
            v46 = v138[0];
            v28 = 0;
          }
          if ( v46 )
            XDCOBJ::vUnlockFast((XDCOBJ *)v138);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
          if ( !v28 )
            goto LABEL_134;
          LODWORD(v27) = v111;
        }
        if ( (_DWORD)v27 != 8 )
        {
          EngSetLastError(0x57u);
          v28 = 0;
        }
        v47 = *(_DWORD *)(a11 + 20);
        v17 = 1;
        v101 = 256;
        v102 = 1;
        v31 = 1024;
        LODWORD(v117) = 8;
        HIDWORD(v117) = v47;
LABEL_134:
        v41 = v101;
        v124 = v17;
LABEL_135:
        LODWORD(v30) = v106;
        v34 = v103;
LABEL_148:
        v26 = v108;
        goto LABEL_149;
      }
      DCOBJ::DCOBJ((DCOBJ *)v138, a1);
      if ( !v138[0] || !(unsigned int)DC::bIsCMYKColor(v138[0]) )
      {
        EngSetLastError(0x57u);
        v48 = v138[0];
        v28 = 0;
      }
      if ( v48 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v138);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
      if ( !v28 )
      {
        LODWORD(v30) = v106;
        v34 = v103;
        goto LABEL_147;
      }
      LODWORD(v27) = v111;
    }
    if ( (_DWORD)v27 != 4 )
    {
      EngSetLastError(0x57u);
      v28 = 0;
    }
    v49 = *(_DWORD *)(a11 + 20);
    v41 = 16;
    LODWORD(v117) = 7;
    v31 = 1024;
    v101 = 16;
    HIDWORD(v117) = v49;
    v17 = 1;
    v102 = 1;
    v124 = 1;
    goto LABEL_135;
  }
  DCOBJ::DCOBJ((DCOBJ *)v138, a1);
  if ( !v138[0] || !(unsigned int)DC::bIsCMYKColor(v138[0]) )
    goto LABEL_106;
  switch ( v111 )
  {
    case 1u:
      v101 = 2;
      LODWORD(v117) = 1;
      v17 = 1;
      goto LABEL_95;
    case 4u:
      LODWORD(v117) = 2;
      v101 = 16;
      goto LABEL_92;
    case 8u:
      LODWORD(v117) = 3;
      v101 = 256;
LABEL_92:
      v17 = 1;
LABEL_95:
      v31 = 1024;
      goto LABEL_96;
  }
  if ( v111 != 32 )
  {
LABEL_106:
    EngSetLastError(0x57u);
    v42 = v138[0];
    v28 = 0;
    v34 = v103;
    goto LABEL_107;
  }
  LODWORD(v117) = 6;
  v17 = 16;
  v101 = 0;
  v31 = 512;
LABEL_96:
  v43 = v111 * (unsigned __int64)v106;
  v102 = v17;
  if ( v43 <= 0xFFFFFFFF && (int)v43 + 31 >= (unsigned int)v43 )
  {
    v34 = v103;
    v44 = v103 * (unsigned __int64)(((unsigned int)(v43 + 31) >> 3) & 0x1FFFFFFC);
    if ( v44 <= 0xFFFFFFFF )
    {
      HIDWORD(v117) = v44;
LABEL_107:
      if ( v42 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v138);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
      LODWORD(v30) = v106;
      v41 = v101;
      goto LABEL_148;
    }
    HIDWORD(v117) = -1;
  }
  EngSetLastError(0x216u);
  if ( v138[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v138);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
  if ( v135[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v135);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v136);
  return 0LL;
}
