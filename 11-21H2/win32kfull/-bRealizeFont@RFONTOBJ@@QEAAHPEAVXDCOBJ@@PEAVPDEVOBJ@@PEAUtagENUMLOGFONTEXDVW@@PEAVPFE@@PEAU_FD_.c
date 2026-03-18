/*
 * XREFs of ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C016FEF6 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C02A6B30 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C000B0DC (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0013154 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C00152D0 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     UmfdQueryFontCapsEx @ 0x1C00153A0 (UmfdQueryFontCapsEx.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00153D0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00153F0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0015418 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0015648 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z @ 0x1C0015928 (-bGetNtoWScales@@YAHPEAVEPOINTFL@@AEAVXDCOBJ@@PEAU_FD_XFORM@@AEAVPFEOBJ@@PEAH@Z.c)
 *     ?bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0016080 (-bCalcLayoutUnits@RFONTOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00170CC (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ?ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z @ 0x1C0108E00 (-ulSimpleDeviceOrientation@@YAKAEAVRFONTOBJ@@@Z.c)
 *     ?ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z @ 0x1C0108E70 (-ulSimpleOrientation@RFONTOBJ@@QEAAKPEAVXDCOBJ@@@Z.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C01099DC (--$AllocateIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C02A7238 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bRealizeFont(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct PDEVOBJ *a3,
        struct tagENUMLOGFONTEXDVW *a4,
        struct PFE *a5,
        struct _FD_XFORM *a6,
        struct _POINTL *const a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11,
        unsigned int a12)
{
  __int64 v16; // rsi
  struct _FD_GLYPHSET *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  int v24; // ecx
  __int128 v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  char v38; // r15
  int v39; // r9d
  __int64 v40; // rbx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // r14d
  unsigned int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rbx
  bool v47; // zf
  _DWORD *v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  unsigned int v51; // ecx
  __int64 v52; // rbx
  unsigned int v53; // edx
  int v54; // ecx
  __int64 v55; // rcx
  char v57; // dl
  __int64 v58; // rcx
  __int64 v59; // rcx
  _BYTE *v60; // rdx
  float v61; // xmm0_4
  const wchar_t *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 (__fastcall *v65)(__int64, int *); // rax
  int v66; // eax
  unsigned int v67; // ecx
  unsigned __int8 *v68; // r8
  struct RFONT *v69; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v70; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v71; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+50h] [rbp-B0h] BYREF
  int v74; // [rsp+54h] [rbp-ACh]
  __int64 v75; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v76; // [rsp+60h] [rbp-A0h]
  __int128 v77; // [rsp+68h] [rbp-98h] BYREF
  __int128 v78; // [rsp+78h] [rbp-88h]
  _FD_DEVICEMETRICS v79; // [rsp+90h] [rbp-70h] BYREF

  v71 = (__int64 *)a5;
  v16 = 0LL;
  v17 = PFEOBJ::pfdg(&v71);
  if ( !v17 )
    goto LABEL_83;
  v18 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>();
  *(_QWORD *)this = v18;
  if ( !v18 )
  {
    PFEOBJ::vFreepfdg(&v71);
LABEL_83:
    *(_QWORD *)this = 0LL;
    return (unsigned int)v16;
  }
  v72 = *(_QWORD *)a5;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = PDEVOBJ::ulLogPixelsX(a3);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = PDEVOBJ::ulLogPixelsY(a3);
  *(_DWORD *)(*(_QWORD *)this + 40LL) = a9;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = a8 | PFEOBJ::flFontType((PFEOBJ *)&v71);
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 4LL) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)(v72 + 80);
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 4) != 0 )
    v19 = *((unsigned int *)a5 + 20);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = v19;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 136LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 152LL) = *a6;
  *(struct _FD_XFORM *)(*(_QWORD *)this + 360LL) = *a6;
  *(struct _POINTL *)(*(_QWORD *)this + 648LL) = *a7;
  *(_QWORD *)(*(_QWORD *)this + 224LL) = *(_QWORD *)this + 240LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)(*(_QWORD *)this + 224LL));
  *(_QWORD *)(*(_QWORD *)this + 120LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 128LL) = *(_QWORD *)a5;
  *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 712LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 836LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 844LL) = *((_DWORD *)a5 + 3) & 0x100;
  v20 = *(_QWORD *)this;
  if ( a3 )
  {
    *(_QWORD *)(v20 + 104) = *(_QWORD *)a3;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = *(_QWORD *)(*(_QWORD *)a3 + 1768LL);
  }
  else
  {
    *(_QWORD *)(v20 + 104) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
  v21 = *(_QWORD *)this;
  LODWORD(v69) = 0;
  *(_DWORD *)(v21 + 168) = 1;
  *(_DWORD *)(*(_QWORD *)this + 716LL) = *(_DWORD *)(*((_QWORD *)a5 + 4) + 48LL);
  *(_QWORD *)(*(_QWORD *)this + 472LL) = v17;
  v22 = *((_QWORD *)a5 + 4);
  v76 = v22;
  v70 = *(_WORD *)(v22 + 116);
  RFONTOBJ::vXlatGlyphArray(this, &v70, 1u, (unsigned int *)&v69, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 460LL) = (_DWORD)v69;
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  memset(&v79, 0, sizeof(v79));
  *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)(v72 + 88);
  if ( !(unsigned int)RFONTOBJ::bGetDEVICEMETRICS((POINTL **)this, &v79) )
    goto LABEL_88;
  if ( !a2 )
    goto LABEL_17;
  *(POINTE *)(*(_QWORD *)this + 396LL) = v79.pteBase;
  *(POINTE *)(*(_QWORD *)this + 416LL) = v79.pteSide;
  v24 = *(_DWORD *)(*(_QWORD *)a2 + 352LL);
  v25 = *(_OWORD *)(*(_QWORD *)a2 + 336LL);
  v26 = *(_QWORD *)this;
  *(_OWORD *)(v26 + 172) = *(_OWORD *)(*(_QWORD *)a2 + 320LL);
  *(_OWORD *)(v26 + 188) = v25;
  *(_DWORD *)(v26 + 204) = v24;
  if ( !(unsigned int)RFONTOBJ::bCalcLayoutUnits(this, a2)
    || !(unsigned int)bGetNtoWScales(
                        (struct EPOINTFL *)(*(_QWORD *)this + 212LL),
                        a2,
                        (__m128 *)(*(_QWORD *)this + 360LL),
                        (struct PFEOBJ *)&v71,
                        (int *)(*(_QWORD *)this + 220LL)) )
  {
LABEL_88:
    v63 = *(_QWORD *)this;
    v77 = 0LL;
    v78 = 0LL;
    PushThreadGuardedObject(&v77, v63, Win32FreePool);
LABEL_91:
    RFONTOBJ::vDestroyFont(this, 1);
    PopThreadGuardedObject(&v77);
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*(_QWORD *)this);
    goto LABEL_83;
  }
  v28 = *(_QWORD *)this;
  LODWORD(v69) = 0;
  bFToL(v27, &v69, 0LL);
  *(_DWORD *)(v28 + 328) = (_DWORD)v69;
  v29 = *(_QWORD *)this;
  LODWORD(v69) = 0;
  bFToL(v30, &v69, 0LL);
  *(_DWORD *)(v29 + 332) = (_DWORD)v69;
  v31 = *(_QWORD *)this;
  LODWORD(v69) = 0;
  bFToL(v32, &v69, 0LL);
  *(_DWORD *)(v31 + 336) = (_DWORD)v69;
  v33 = *(_QWORD *)this;
  LODWORD(v69) = 0;
  bFToL(v34, &v69, 0LL);
  *(_DWORD *)(v33 + 340) = (_DWORD)v69;
  *(_DWORD *)(*(_QWORD *)this + 432LL) = -1;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
  {
    v35 = *(_DWORD *)(v22 + 48);
    if ( (v35 & 4) == 0 )
    {
      if ( (v35 & 0x10) == 0 )
      {
        v37 = ulSimpleDeviceOrientation(this);
        goto LABEL_16;
      }
      v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfEscapement);
LABEL_15:
      v37 = lNormAngle(v36);
LABEL_16:
      *(_DWORD *)(*(_QWORD *)this + 392LL) = v37;
      goto LABEL_17;
    }
LABEL_87:
    v36 = (unsigned int)(3600 - a4->elfEnumLogfontEx.elfLogFont.lfOrientation);
    goto LABEL_15;
  }
  *(_DWORD *)(*(_QWORD *)this + 392LL) = RFONTOBJ::ulSimpleOrientation(this, a2);
  if ( *(_DWORD *)(*(_QWORD *)this + 392LL) >= 0xE10u && (*(_DWORD *)(*(_QWORD *)this + 716LL) & 0x10) != 0 )
    goto LABEL_87;
LABEL_17:
  v38 = 0;
  v39 = a10;
  *(_DWORD *)(*(_QWORD *)this + 656LL) = a10;
  v40 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  if ( v40 == qword_1C033BDF8 )
  {
    if ( (unsigned int)UmfdQueryFontCapsEx(*(_QWORD *)(*(_QWORD *)this + 24LL), v23, &v73) != -1 )
      v38 = v74;
  }
  else
  {
    v65 = *(__int64 (__fastcall **)(__int64, int *))(v40 + 3016);
    if ( v65 )
    {
      v66 = v65(2LL, &v73);
      v39 = a10;
      if ( v66 != -1 )
        v38 = v74;
    }
  }
  v41 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v40 + 40) & 0x2000) == 0 )
  {
    *(_DWORD *)(v41 + 92) = 1;
    *(_DWORD *)(*(_QWORD *)this + 88LL) = 0;
    goto LABEL_33;
  }
  v42 = *(_DWORD *)(v41 + 12);
  *(_DWORD *)(v41 + 92) = 0;
  v43 = (v42 & 0x10010000) != 0 ? 400 : 800;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 1;
  v44 = v43;
  v45 = *(_QWORD *)this;
  if ( v39 )
  {
    *(_DWORD *)(v45 + 88) = 2;
  }
  else
  {
    v46 = *(_QWORD *)(v45 + 104);
    if ( v46 )
    {
      v47 = (*(_DWORD *)(v46 + 40) & 0x8000) == 0;
      v69 = *(struct RFONT **)(v45 + 104);
      if ( !v47 )
      {
        if ( KeAreApcsDisabled() )
        {
LABEL_26:
          v44 = v43;
          if ( (*(_DWORD *)(v46 + 1792) & 0x40000000) != 0 )
          {
            v44 = 3 * PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v69);
            if ( v44 <= 0x320 )
              v44 = v43;
            if ( v44 > 0x960 )
              v44 = 2400;
          }
          v39 = a10;
          goto LABEL_28;
        }
        v45 = *(_QWORD *)this;
      }
      if ( *(_QWORD *)(v46 + 2960) )
      {
        v77 = 0LL;
        v78 = 0LL;
        PushThreadGuardedObject(&v77, v45, vRestartbRealizeFont);
        *(_DWORD *)(*(_QWORD *)this + 88LL) = (*(__int64 (__fastcall **)(_QWORD))(v46 + 2960))(*(_QWORD *)(*(_QWORD *)this + 112LL));
        PopThreadGuardedObject(&v77);
      }
      goto LABEL_26;
    }
  }
LABEL_28:
  v48 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 1 )
  {
    if ( (v38 & 2) == 0 || (v48[179] & 0x8000) != 0 && (v48[86] > 2 * v44 || v48[87] > v44) )
      v48[22] = 2;
  }
  else if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 && (v38 & 1) == 0 )
  {
    v48[22] = 1;
  }
LABEL_33:
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) &= 0x8FFEFFFF;
  if ( v39 )
  {
    v64 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 2 )
      goto LABEL_90;
  }
  if ( !a11 || (v49 = *(_QWORD *)this, *(_DWORD *)(*(_QWORD *)this + 392LL)) )
  {
    v49 = *(_QWORD *)this;
    v50 = 0;
  }
  else
  {
    v50 = 1;
  }
  *(_DWORD *)(v49 + 640) = v50;
  if ( !(unsigned int)RFONTOBJ::bInitCache(this, a12) )
  {
    v64 = *(_QWORD *)this;
LABEL_90:
    v77 = 0LL;
    v78 = 0LL;
    PushThreadGuardedObject(&v77, v64, Win32FreePool);
    goto LABEL_91;
  }
  *(_QWORD *)(*(_QWORD *)this + 688LL) = 0LL;
  v75 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v47 = iUniqueStamp == -1;
  v51 = ++iUniqueStamp;
  if ( v47 )
  {
    v51 = 1;
    iUniqueStamp = 1;
  }
  **(_DWORD **)this = v51;
  if ( a3 )
  {
    *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
    v69 = PDEVOBJ::prfntActive(a3);
    RFONTOBJ::vInsert(this, &v69, 1LL);
    PDEVOBJ::prfntActive(a3, v69);
  }
  v52 = v72;
  v69 = *(struct RFONT **)(v72 + 72);
  RFONTOBJ::vInsert(this, &v69, 0LL);
  *(_QWORD *)(v52 + 72) = v69;
  SEMOBJ::vUnlock((SEMOBJ *)&v75);
  v53 = *(_DWORD *)(*(_QWORD *)this + 12LL) | 1;
  if ( *(_DWORD *)(*(_QWORD *)this + 88LL) != 1 )
    v53 = *(_DWORD *)(*(_QWORD *)this + 12LL) & 0xFFFFFFFE;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = v53;
  if ( a2 )
    *(_DWORD *)(*(_QWORD *)this + 208LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL);
  else
    *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
  if ( !gbSystemDBCSFontEnabled || (v54 = 1, (*((_DWORD *)v71 + 3) & 0x10) == 0) )
    v54 = 0;
  *(_DWORD *)(*(_QWORD *)this + 708LL) = v54;
  v55 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x10000000) != 0 )
  {
    if ( (*(_DWORD *)(v55 + 204) & 1) == 0 || (v57 = 1, *(_DWORD *)(v55 + 328)) )
      v57 = 0;
    v58 = *(_QWORD *)(*(_QWORD *)(v55 + 120) + 32LL);
    if ( (*(_DWORD *)(v58 + 48) & 0x401000) != 0 && v57 && *(_WORD *)(v58 + 46) <= 0x190u )
    {
      v62 = (const wchar_t *)(v58 + *(int *)(v58 + 8));
      if ( !_wcsicmp(v62, L"Courier New")
        || !_wcsicmp(v62, L"Rod")
        || !_wcsicmp(v62, L"Rod Transparent")
        || !_wcsicmp(v62, L"Fixed Miriam Transparent")
        || !_wcsicmp(v62, L"Miriam Fixed")
        || !_wcsicmp(v62, L"Simplified Arabic Fixed") )
      {
        *(_DWORD *)(*(_QWORD *)this + 64LL) = 1;
      }
      v52 = v72;
    }
    v59 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x20000000) != 0 )
    {
      v77 = 0LL;
      *(_QWORD *)&v78 = 0LL;
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v59 + 224), (struct tagFLOATOBJ_XFORM *)&v77);
      v60 = *(_BYTE **)(v52 + 192);
      v61 = (float)*(__int16 *)(v76 + 56) * *((float *)&v77 + 3);
      *((float *)&v77 + 3) = v61;
      if ( v60 )
      {
        v67 = 0;
        if ( *v60 )
        {
          v68 = v60 + 4;
          while ( *v68 != (int)v61 )
          {
            ++v67;
            v68 += 80;
            if ( v67 >= (unsigned __int8)*v60 )
              goto LABEL_65;
          }
          v16 = (__int64)&v60[80 * v67 + 4];
        }
      }
LABEL_65:
      *(_QWORD *)(*(_QWORD *)this + 72LL) = v16;
    }
  }
  LODWORD(v16) = 1;
  return (unsigned int)v16;
}
