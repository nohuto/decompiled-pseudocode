/*
 * XREFs of ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00364E0
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0018120 (GreGetOutlineTextMetricsInternalW.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C0018654 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     NtGdiGetWidthTable @ 0x1C0019440 (NtGdiGetWidthTable.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     GreGetTextCharsetInfo @ 0x1C001C364 (GreGetTextCharsetInfo.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextMetricsW @ 0x1C00C42C4 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     GreGetCharABCWidthsW @ 0x1C00EA92C (GreGetCharABCWidthsW.c)
 *     GreGetGlyphIndicesW @ 0x1C0100C28 (GreGetGlyphIndicesW.c)
 *     GreGetFontUnicodeRanges @ 0x1C0105618 (GreGetFontUnicodeRanges.c)
 *     GreFontIsLinked @ 0x1C0107838 (GreFontIsLinked.c)
 *     GreGetCharWidthInfo @ 0x1C01089C4 (GreGetCharWidthInfo.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C01091A0 (NtGdiQueryFontAssocInfo.c)
 *     GreGetRealizationInfo @ 0x1C0123E74 (GreGetRealizationInfo.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0124330 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetETM @ 0x1C012F660 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C01301E4 (GreGetKerningPairs.c)
 *     GreGetCharWidthW @ 0x1C013B81C (GreGetCharWidthW.c)
 *     GreGetUFI @ 0x1C013C2B0 (GreGetUFI.c)
 *     GreGetTextExtentExW @ 0x1C015FAA8 (GreGetTextExtentExW.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0295CB8 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C000A82C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C000A940 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C000B034 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C000C12C (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C000CDEC (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0011220 (EngUnmapFontFileFD.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00153D0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00153F0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00170CC (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C0017574 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0017698 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C0108D18 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C011B934 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1C029532C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A7404 (vRemoveAllInactiveRFONTs.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C02B9D30 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall RFONTOBJ::bInit(RFONTOBJ *this, struct XDCOBJ *a2, int a3, unsigned int a4)
{
  unsigned int v5; // esi
  int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  int v21; // edi
  __int64 v22; // rcx
  BOOL v23; // r13d
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // rdx
  unsigned int v30; // esi
  __int64 v32; // rax
  unsigned int v33; // ecx
  struct RFONT **v34; // rdi
  int v35; // esi
  int InactiveHelper; // eax
  struct RFONT *v37; // rcx
  int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // esi
  struct PFE *v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  struct PFE *v44; // rsi
  struct tagLOGFONTW *v45; // r10
  __int64 v46; // rdx
  unsigned int v47; // r8d
  int NtoD_Win31; // eax
  FLOATL eYX; // r8d
  FLOATL eYY; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rcx
  int v58; // ecx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r11
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r10
  _QWORD *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // r8
  _QWORD *v71; // rcx
  __int64 v72; // r14
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // ecx
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // esi
  bool v81; // bl
  __int64 v82; // rax
  size_t v83; // rsi
  unsigned int v84; // eax
  struct tagLOGFONTW *v85; // rax
  struct tagLOGFONTW *v86; // rdi
  __int64 v87; // rcx
  struct PDEV *v88; // rdi
  int v89; // eax
  __int64 v90; // rbx
  int v91; // eax
  __int64 v92; // rbx
  __int64 v93; // rcx
  __int64 v94; // rsi
  unsigned int v95; // eax
  __int64 v96; // rsi
  __int64 v97; // rcx
  bool v98; // al
  unsigned int v99; // r13d
  unsigned int v100; // edi
  __int64 v101; // rsi
  unsigned int v102; // [rsp+28h] [rbp-D8h]
  bool v103; // [rsp+60h] [rbp-A0h]
  bool v104; // [rsp+61h] [rbp-9Fh]
  int v105; // [rsp+64h] [rbp-9Ch]
  unsigned int v106; // [rsp+64h] [rbp-9Ch]
  unsigned int v107; // [rsp+64h] [rbp-9Ch]
  unsigned int v108; // [rsp+64h] [rbp-9Ch]
  __int64 v109; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v110; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v111; // [rsp+74h] [rbp-8Ch]
  unsigned int v112; // [rsp+78h] [rbp-88h]
  int v113; // [rsp+7Ch] [rbp-84h]
  struct PFE *v114; // [rsp+80h] [rbp-80h]
  struct _POINTL v115; // [rsp+88h] [rbp-78h] BYREF
  struct RFONT *v116; // [rsp+90h] [rbp-70h] BYREF
  struct RFONT *v117; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v118; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-58h] BYREF
  struct PDEV *v120; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v121; // [rsp+B8h] [rbp-48h] BYREF
  int v122; // [rsp+C0h] [rbp-40h]
  int v123; // [rsp+C4h] [rbp-3Ch]
  _QWORD v124[2]; // [rsp+C8h] [rbp-38h] BYREF
  int v125; // [rsp+D8h] [rbp-28h]
  __int64 v126; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v127; // [rsp+E8h] [rbp-18h] BYREF
  int v128; // [rsp+F0h] [rbp-10h]
  int v129; // [rsp+F4h] [rbp-Ch]
  _QWORD v130[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v131; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v132; // [rsp+118h] [rbp+18h]
  __int128 v133; // [rsp+120h] [rbp+20h] BYREF
  __int64 v134; // [rsp+130h] [rbp+30h]
  __int64 v135; // [rsp+138h] [rbp+38h] BYREF
  __int64 v136; // [rsp+148h] [rbp+48h] BYREF
  _FD_XFORM v137; // [rsp+158h] [rbp+58h] BYREF
  struct RFONT *v138[14]; // [rsp+170h] [rbp+70h] BYREF

  v112 = a4;
  v5 = a4;
  v113 = a3;
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent
    || !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
  {
    return 0LL;
  }
  v7 = 0;
  if ( !KeReadStateEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent)
    || !UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || !KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) )
  {
    v81 = KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent) != 0;
    if ( !UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      && UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread != KeGetCurrentThread() )
    {
      if ( (v81 || !(unsigned int)UserIsUserCritSecIn())
        && KeWaitForSingleObject(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, Executive, 0, 0, 0LL) >= 0
        && UmfdHostLifeTimeManager::s_SessionRasterizerInitialized )
      {
        KeWaitForSingleObject(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, Executive, 0, 0, 0LL);
        goto LABEL_6;
      }
      return 0LL;
    }
  }
LABEL_6:
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 1760LL);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 504);
    v11 = 0;
    if ( v10 )
    {
      GreAcquireSemaphore(v10);
      v12 = *(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( (v12 & 8) != 0 )
      {
        v11 = 1;
        *(_DWORD *)(*(_QWORD *)this + 84LL) = v12 & 0xFFFFFFF7;
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v10);
      GreReleaseSemaphoreInternal(v10);
      if ( v11 == 1 )
      {
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v88 = gppdevList;
        if ( gppdevList )
        {
          while ( 1 )
          {
            v89 = *((_DWORD *)v88 + 10);
            if ( (v89 & 0x2000) == 0 )
            {
              if ( (v89 & 0x8000) == 0 )
                break;
              v90 = *(_QWORD *)(*((_QWORD *)v88 + 220) + 48LL);
              if ( v90 == PsGetCurrentProcessWin32Process() )
                break;
            }
            v88 = *(struct PDEV **)v88;
            if ( !v88 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
              GreReleaseSemaphoreInternal(ghsemDriverMgmt);
              goto LABEL_11;
            }
          }
          PDEV::IncrementClientReferenceCount(v88);
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        while ( v88 )
        {
          v120 = v88;
          vRemoveAllInactiveRFONTs(v88);
          GreAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v88 = *(struct PDEV **)v88;
          if ( v88 )
          {
            while ( 1 )
            {
              v91 = *((_DWORD *)v88 + 10);
              if ( (v91 & 0x2000) == 0 )
              {
                if ( (v91 & 0x8000) == 0 )
                  break;
                v92 = *(_QWORD *)(*((_QWORD *)v88 + 220) + 48LL);
                if ( v92 == PsGetCurrentProcessWin32Process() )
                  break;
              }
              v88 = *(struct PDEV **)v88;
              if ( !v88 )
                goto LABEL_230;
            }
            PDEV::IncrementClientReferenceCount(v88);
          }
LABEL_230:
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          GreReleaseSemaphoreInternal(ghsemDriverMgmt);
          PDEVOBJ::vUnreferencePdev(&v120, 0LL);
        }
      }
    }
  }
LABEL_11:
  v13 = *(_QWORD *)a2;
  LOBYTE(v8) = 10;
  v109 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 976) + 296LL);
  v15 = HmgShareLock(v14, v8);
  v116 = (struct RFONT *)v15;
  v16 = v15;
  if ( !v15 )
    goto LABEL_278;
  if ( (*(_DWORD *)(v15 + 28) & 1) == 0 )
    goto LABEL_17;
  UserGetHDEV();
  v17 = *(_DWORD *)(v16 + 24);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v16);
  v16 = 0LL;
  if ( !v109 )
  {
LABEL_278:
    RFONTOBJ::vMakeInactive(this);
    *(_QWORD *)this = 0LL;
    v30 = 0;
    *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
    goto LABEL_36;
  }
  if ( v17 == 6 )
  {
    v14 = *(_QWORD *)(v109 + 1440);
  }
  else
  {
    v80 = v17 - 4;
    if ( v80 )
    {
      if ( v80 == 1 )
        v14 = *(_QWORD *)(v109 + 1432);
    }
    else
    {
      v14 = *(_QWORD *)(v109 + 1424);
    }
  }
  LOBYTE(v18) = 10;
  v5 = v112;
  v16 = HmgShareLock(v14, v18);
  v116 = (struct RFONT *)v16;
LABEL_17:
  if ( !v16 )
    goto LABEL_278;
  v19 = lNormAngle((unsigned int)-*(_DWORD *)(v16 + 284));
  v20 = *(_QWORD *)a2;
  v21 = v19;
  LODWORD(v114) = v19;
  v122 = *(_DWORD *)(*(_QWORD *)(v20 + 976) + 208LL);
  v123 = *(_DWORD *)(*(_QWORD *)(v20 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v20 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v121, a2, 0x204u, 0);
    v22 = v121;
  }
  else
  {
    v22 = v20 + 320;
    v121 = v20 + 320;
  }
  v23 = !v21 && (*(_DWORD *)(v22 + 32) & 1) != 0 && *(float *)(v22 + 12) >= 0.0 && *(float *)v22 >= 0.0;
  v24 = *(_DWORD **)this;
  if ( !*(_QWORD *)this )
  {
    v26 = *(_QWORD *)a2;
LABEL_42:
    *(_QWORD *)(v26 + 1744) = *(_QWORD *)(*(_QWORD *)(v26 + 976) + 296LL);
    goto LABEL_43;
  }
  v25 = *(_QWORD *)a2;
  v26 = *(_QWORD *)a2;
  v27 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  if ( *(_QWORD *)(v27 + 296) != *(_QWORD *)(*(_QWORD *)a2 + 1744LL) || !v23 && v24[160] )
    goto LABEL_42;
  if ( v24[52] == *(_DWORD *)(v27 + 208) && v113 == v24[164] && v5 == (v24[21] & 6) )
  {
    if ( (*(_DWORD *)(v25 + 36) & 1) == 0 && *(_DWORD *)(v25 + 32) != 1 )
      goto LABEL_33;
    v28 = *(_DWORD *)(*(_QWORD *)(v25 + 1760) + 12LL);
    if ( (v28 & 0x200004) == 0 )
      goto LABEL_33;
    v74 = 0LL;
    if ( (gulFontInformation & 2) != 0 )
    {
      v74 = 0x10000LL;
      if ( (gulFontInformation & 0x10) != 0 )
        v74 = 268500992LL;
    }
    if ( (v28 & 4) != 0 )
    {
      v75 = v28 & 0x10010000;
      if ( (_DWORD)v74 != (_DWORD)v75 )
        goto LABEL_43;
    }
    else
    {
      if ( (((unsigned int)v74 ^ v28) & 0x10000) != 0 )
        goto LABEL_43;
      v75 = v28 & 0x10010000;
    }
    if ( !(_DWORD)v75 || !(unsigned int)UserIsRemoteConnection(v75, v74, gulFontInformation, v26) )
    {
LABEL_33:
      v29 = *(_QWORD *)a2;
      if ( *(float *)(*(_QWORD *)a2 + 452LL) == 0.0 || EFLOAT::bIsZero((EFLOAT *)(v29 + 456)) )
      {
        if ( (*(_DWORD *)(v29 + 252) & 1) == 0 )
        {
LABEL_35:
          v30 = 1;
          goto LABEL_36;
        }
        if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)(*(_QWORD *)this + 172LL)) )
        {
          *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
          goto LABEL_35;
        }
      }
    }
  }
LABEL_43:
  if ( (*(_DWORD *)(v109 + 40) & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v109);
  memset(v138, 0, sizeof(v138));
  v32 = *(_QWORD *)this;
  if ( *(_QWORD *)this && *(_DWORD *)(v32 + 660) )
  {
    v33 = *(_DWORD *)(v32 + 840);
    if ( v33 <= 0xA )
    {
      v34 = v138;
      v35 = 0;
      goto LABEL_49;
    }
    v93 = 8 * v33 + 32;
    if ( (_DWORD)v93 )
    {
      v34 = (struct RFONT **)Win32AllocPoolZInit(v93, 1718382187LL);
      if ( !v34 )
      {
LABEL_54:
        v21 = (int)v114;
        goto LABEL_55;
      }
      v35 = 1;
LABEL_49:
      v111 = v35;
      InactiveHelper = RFONTOBJ::bMakeInactiveHelper((struct RFONT **)this, v34);
      v37 = *v34;
      v105 = InactiveHelper;
      if ( *v34 )
      {
        v94 = 0LL;
        do
        {
          v117 = v37;
          RFONTOBJ::bMakeInactiveHelper(&v117, 0LL);
          v117 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v117);
          v37 = v34[++v94];
        }
        while ( v37 );
        v35 = v111;
        InactiveHelper = v105;
      }
      if ( v35 )
      {
        Win32FreePool(v34);
        InactiveHelper = v105;
      }
      if ( InactiveHelper )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
      }
      goto LABEL_54;
    }
  }
LABEL_55:
  v38 = *(_BYTE *)(v16 + 297) != 0 ? 0x20 : 0;
  if ( *(_BYTE *)(v16 + 298) )
    v38 |= 0x80u;
  *(_DWORD *)(*(_QWORD *)a2 + 1752LL) = v38;
  v39 = *(_QWORD *)a2;
  v124[0] = 0LL;
  *(_DWORD *)(v39 + 1756) = v21;
  v137 = 0LL;
  v110 = 0;
  v115 = 0LL;
  v118 = 0;
  v103 = (*(_DWORD *)(v109 + 40) & 1) == 0 && (*(_DWORD *)(v16 + 28) & 2) != 0;
  v126 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v40 = v112 & 4;
  v111 = v40;
  v41 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v116, a2, &v110, &v115, &v118, v40);
  v114 = v41;
  if ( !v41 )
  {
LABEL_250:
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
    SEMOBJ::vUnlock((SEMOBJ *)&v126);
    goto LABEL_251;
  }
  v42 = *(_QWORD *)v41;
  v119 = v42;
  v135 = v42;
  v43 = *(_DWORD *)(v42 + 52);
  if ( (v43 & 0x2000) != 0 )
  {
LABEL_249:
    if ( (unsigned int)PFFOBJ::bAttemptReload((PFFOBJ *)&v135) )
    {
      GreAcquireSemaphore(ghsemPublicPFT);
      v114 = LFONTOBJ::ppfeMapFont((LFONTOBJ *)&v116, a2, &v110, &v115, &v118, v40);
      v44 = v114;
      if ( v114 )
        goto LABEL_64;
    }
    goto LABEL_250;
  }
  if ( (v43 & 0x1000) == 0 )
  {
    v44 = v41;
    goto LABEL_64;
  }
  v95 = 0;
  v108 = 0;
  if ( !*(_DWORD *)(v42 + 36) )
    goto LABEL_247;
  do
  {
    v120 = 0LL;
    v117 = 0LL;
    v96 = v95;
    Win32FileInfo(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 200) + 8LL * v95) + 80LL), &v117, &v120);
    v42 = v119;
    v97 = *(_QWORD *)(*(_QWORD *)(v119 + 200) + 8 * v96);
    if ( *(struct RFONT **)v97 != v117 || *(_DWORD *)(v97 + 24) != (_DWORD)v120 )
    {
      *(_DWORD *)(v119 + 52) |= 0x2000u;
      v40 = v111;
      goto LABEL_249;
    }
    v95 = v108 + 1;
    v108 = v95;
  }
  while ( v95 < *(_DWORD *)(v119 + 36) );
  v43 = *(_DWORD *)(v119 + 52);
LABEL_247:
  v44 = v114;
  *(_DWORD *)(v42 + 52) = v43 & 0xFFFFEFFF;
LABEL_64:
  v45 = (struct tagLOGFONTW *)(v16 + 276);
  v46 = *(_QWORD *)a2;
  v47 = 0;
  v130[0] = *((_QWORD *)v44 + 4);
  if ( v103 )
    v47 = 2;
  v106 = v47;
  v128 = *(_DWORD *)(*(_QWORD *)(v46 + 976) + 208LL);
  v129 = *(_DWORD *)(*(_QWORD *)(v46 + 976) + 108LL) & 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v46 + 976) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v127, a2, 0x204u, 0);
    v46 = *(_QWORD *)a2;
    v45 = (struct tagLOGFONTW *)(v16 + 276);
    v47 = v106;
  }
  else
  {
    v127 = v46 + 320;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v46 + 976) + 208LL) == 1 )
    NtoD_Win31 = bGetNtoD_Win31(&v137, v45, (struct IFIOBJ *)v130, a2, v47, &v115, 0);
  else
    NtoD_Win31 = bGetNtoD(&v137, v45, (struct IFIOBJ *)v130, a2, &v115);
  if ( !NtoD_Win31 )
    goto LABEL_250;
  eYX = v137.eYX;
  if ( LODWORD(v137.eYX) )
  {
    LODWORD(eYX) = LODWORD(v137.eYX) ^ 0x80000000;
    LODWORD(v137.eYX) ^= 0x80000000;
  }
  eYY = v137.eYY;
  if ( LODWORD(v137.eYY) )
  {
    LODWORD(eYY) = LODWORD(v137.eYY) ^ 0x80000000;
    LODWORD(v137.eYY) ^= 0x80000000;
  }
  if ( (*(_DWORD *)(v130[0] + 48LL) & 0x1000000) != 0 )
  {
    v137.eXX = eYY;
    v137.eXY = eYX;
    if ( eYX != 0.0 )
      LODWORD(v137.eXY) = LODWORD(eYX) ^ 0x80000000;
  }
  if ( (*(_DWORD *)(v130[0] + 48LL) & 1) != 0 && *(int *)(v16 + 276) <= 0 )
    v110 |= 0x8000u;
  v124[0] = *(_QWORD *)v44;
  v125 = 0;
  ++*(_DWORD *)(v124[0] + 68LL);
  if ( ghsemPublicPFT )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
  v51 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
  v119 = ghsemRFONTList;
  v111 = *(_DWORD *)(v51 + 208);
  v107 = v110;
  GreAcquireSemaphore(ghsemRFONTList);
  v52 = v109;
  if ( (*(_DWORD *)(v109 + 40) & 0x800000) != 0 )
    v53 = *(_QWORD *)(*(_QWORD *)(v109 + 3496) + 1512LL);
  else
    v53 = *(_QWORD *)(v109 + 1512);
  *(_QWORD *)this = v53;
  if ( !v53 )
  {
LABEL_87:
    if ( (*(_DWORD *)(v52 + 40) & 0x800000) != 0 )
      v54 = *(_QWORD *)(*(_QWORD *)(v52 + 3496) + 1520LL);
    else
      v54 = *(_QWORD *)(v52 + 1520);
    *(_QWORD *)this = v54;
    if ( v54 )
    {
      while ( 1 )
      {
        if ( *(struct PFE **)(v54 + 120) == v44 && v112 == (*(_DWORD *)(v54 + 84) & 6) )
        {
          v58 = *(_DWORD *)(v54 + 12);
          if ( ((v107 ^ v58) & 0xE000) == 0 )
          {
            v59 = (v107 ^ v58) & 0x50010000;
            if ( !v59 )
              goto LABEL_282;
            if ( (v107 & 0x10000) != 0 && (v58 & 0x20000) != 0 )
              v59 = (v107 ^ v58) & 0x50000000;
            if ( (v107 & 0x10000000) != 0 && (v58 & 0x10000000) == 0 && (v58 & 0x2000000) != 0 || !v59 )
            {
LABEL_282:
              if ( !*(_DWORD *)(v54 + 40) )
              {
                v60 = *(_QWORD *)&v137.eXX - *(_QWORD *)(v54 + 136);
                if ( *(_QWORD *)&v137.eXX == *(_QWORD *)(v54 + 136) )
                  v60 = *(_QWORD *)&v137.eYX - *(_QWORD *)(v54 + 144);
                if ( !v60 && v113 == *(_DWORD *)(v54 + 656) )
                {
                  if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)(v54 + 172)) )
                  {
                    v61 = *(_QWORD *)this;
                    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v111 && (v23 || !*(_DWORD *)(v61 + 640)) )
                      break;
                  }
                }
              }
            }
          }
        }
        v54 = *(_QWORD *)(*(_QWORD *)this + 672LL);
        *(_QWORD *)this = v54;
        if ( !v54 )
          goto LABEL_92;
      }
      v62 = v109;
      if ( (*(_DWORD *)(v109 + 40) & 0x800000) != 0 )
        v63 = *(_QWORD *)(*(_QWORD *)(v109 + 3496) + 1520LL);
      else
        v63 = *(_QWORD *)(v109 + 1520);
      v64 = *(_QWORD *)(v61 + 664);
      v65 = *(_QWORD *)(v61 + 672);
      v66 = v64 + 664;
      if ( !v64 )
        v66 = 0LL;
      v67 = (_QWORD *)(v65 + 664);
      if ( !v65 )
        v67 = 0LL;
      if ( v64 )
      {
        *(_QWORD *)(v66 + 8) = v65;
        if ( v67 )
          *v67 = *(_QWORD *)(v61 + 664);
      }
      else
      {
        v63 = *(_QWORD *)(v61 + 672);
        if ( !v67 )
        {
LABEL_118:
          if ( (*(_DWORD *)(v62 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v62 + 3496) + 1520LL) = v63;
          else
            *(_QWORD *)(v62 + 1520) = v63;
          if ( (*(_DWORD *)(v109 + 40) & 0x800000) != 0 )
            --*(_DWORD *)(*(_QWORD *)(v109 + 3496) + 1528LL);
          else
            --*(_DWORD *)(v109 + 1528);
          v68 = v109;
          if ( (*(_DWORD *)(v109 + 40) & 0x800000) != 0 )
            v69 = *(_QWORD *)(*(_QWORD *)(v109 + 3496) + 1512LL);
          else
            v69 = *(_QWORD *)(v109 + 1512);
          v70 = (_QWORD *)(v69 + 664);
          if ( !v69 )
            v70 = 0LL;
          v71 = (_QWORD *)(*(_QWORD *)this + 664LL);
          if ( *(_QWORD *)this != -664LL )
          {
            *v71 = 0LL;
            v71[1] = v69;
            if ( v70 )
              *v70 = *(_QWORD *)this;
            v69 = *(_QWORD *)this;
            v68 = v109;
          }
          if ( (*(_DWORD *)(v68 + 40) & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v68 + 3496) + 1512LL) = v69;
          else
            *(_QWORD *)(v68 + 1512) = v69;
          *(_DWORD *)(*(_QWORD *)this + 660LL) = 1;
          goto LABEL_133;
        }
        *v67 = 0LL;
      }
      v62 = v109;
      goto LABEL_118;
    }
LABEL_92:
    *(_QWORD *)this = 0LL;
    if ( ghsemRFONTList )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
      GreReleaseSemaphoreInternal(ghsemRFONTList);
    }
    if ( (unsigned int)RFONTOBJ::bRealizeFont(
                         this,
                         a2,
                         (struct PDEVOBJ *)&v109,
                         (struct tagENUMLOGFONTEXDVW *)(v16 + 276),
                         v44,
                         &v137,
                         &v115,
                         v110,
                         0,
                         v113,
                         v23,
                         v112) )
      goto LABEL_283;
    v104 = 0;
    UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
      (UmfdClientSideFileViewMapper *)&v131,
      (struct PFFOBJ *)v124);
    if ( v132 == *(_DWORD *)(v131 + 36) )
    {
      v98 = (unsigned int)RFONTOBJ::bRealizeFont(
                            this,
                            a2,
                            (struct PDEVOBJ *)&v109,
                            (struct tagENUMLOGFONTEXDVW *)(v16 + 276),
                            v44,
                            &v137,
                            &v115,
                            v110,
                            0,
                            v113,
                            v23,
                            v112) != 0;
      v104 = v98;
    }
    else
    {
      v98 = 0;
    }
    v99 = v132;
    v100 = 0;
    if ( v132 )
    {
      v101 = v131;
      do
      {
        if ( v100 >= *(_DWORD *)(v101 + 36) )
          break;
        EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v101 + 200) + 8LL * v100++));
      }
      while ( v100 < v99 );
      v44 = v114;
      v98 = v104;
    }
    if ( v98 )
    {
LABEL_283:
      if ( *(_DWORD *)(v16 + 280) )
      {
        v119 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v82 = *((_QWORD *)v44 + 4);
        v83 = 420LL;
        v136 = v82;
        v84 = *(_DWORD *)(v16 + 272);
        if ( v84 < 0x1A4 )
          v83 = v84;
        v85 = (struct tagLOGFONTW *)AllocFreeTmpBuffer((unsigned int)v83);
        v86 = v85;
        if ( v85 )
        {
          memmove(v85, (const void *)(v16 + 276), v83);
          v87 = 0LL;
          v86->lfWidth = 0;
          if ( v103 )
            v87 = 2LL;
          if ( !PFEOBJ::bSetFontXform(
                  (PFEOBJ *)v87,
                  a2,
                  v86,
                  (struct _FD_XFORM *)(*(_QWORD *)this + 152LL),
                  v87,
                  v102,
                  &v115,
                  (struct IFIOBJ *)&v136,
                  0) )
            *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v137;
          FreeTmpBuffer(v86);
        }
        else
        {
          *(_FD_XFORM *)(*(_QWORD *)this + 152LL) = v137;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v119);
      }
      v55 = *(_QWORD *)this;
      v56 = 1;
      v57 = *(_QWORD *)a2;
      v30 = 1;
      v125 = 1;
      *(_QWORD *)(v57 + 1760) = v55;
      *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
      goto LABEL_135;
    }
    *(_QWORD *)this = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = 0LL;
LABEL_251:
    v30 = 0;
    goto LABEL_134;
  }
  while ( 1 )
  {
    if ( *(struct PFE **)(v53 + 120) != v44 || v112 != (*(_DWORD *)(v53 + 84) & 6) )
      goto LABEL_85;
    v76 = *(_DWORD *)(v53 + 12);
    if ( ((v107 ^ v76) & 0xE000) == 0 )
    {
      v77 = (v107 ^ v76) & 0x50010000;
      if ( !v77 )
        goto LABEL_284;
      if ( (v107 & 0x10000) != 0 && (v76 & 0x20000) != 0 )
        v77 = (v107 ^ v76) & 0x50000000;
      if ( (v107 & 0x10000000) != 0 && (v76 & 0x10000000) == 0 && (v76 & 0x2000000) != 0 || !v77 )
      {
LABEL_284:
        if ( !*(_DWORD *)(v53 + 40) )
        {
          v78 = *(_QWORD *)&v137.eXX - *(_QWORD *)(v53 + 136);
          if ( *(_QWORD *)&v137.eXX == *(_QWORD *)(v53 + 136) )
            v78 = *(_QWORD *)&v137.eYX - *(_QWORD *)(v53 + 144);
          if ( !v78 && v113 == *(_DWORD *)(v53 + 656) )
          {
            if ( EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v121, (struct MATRIX *)(v53 + 172)) )
            {
              v79 = *(_QWORD *)this;
              if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == v111 && (v23 || !*(_DWORD *)(v79 + 640)) )
                break;
            }
          }
        }
      }
    }
    v53 = *(_QWORD *)this;
LABEL_85:
    v53 = *(_QWORD *)(v53 + 672);
    *(_QWORD *)this = v53;
    if ( !v53 )
    {
      v52 = v109;
      goto LABEL_87;
    }
  }
  ++*(_DWORD *)(v79 + 660);
  v116 = PDEVOBJ::prfntActive((PDEVOBJ *)&v109);
  if ( v116 != *(struct RFONT **)this )
  {
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&v116, 1);
    RFONTOBJ::vInsert((unsigned __int64 *)this, (unsigned __int64 *)&v116, 1);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v109, v116);
  }
LABEL_133:
  SEMOBJ::vUnlock((SEMOBJ *)&v119);
  v30 = 1;
  *(_QWORD *)(*(_QWORD *)a2 + 1760LL) = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)a2 + 252LL) &= ~1u;
LABEL_134:
  v56 = v125;
LABEL_135:
  v72 = v124[0];
  if ( v124[0] && !v56 )
  {
    v133 = 0LL;
    v134 = 0LL;
    GreAcquireSemaphore(ghsemPublicPFT);
    v73 = *(_DWORD *)(v72 + 68) - 1;
    *(_DWORD *)(v72 + 68) = v73;
    if ( !*(_DWORD *)(v72 + 56) && !*(_DWORD *)(v72 + 60) && !*(_QWORD *)(v72 + 144) && !v73 && !*(_DWORD *)(v72 + 64) )
    {
      PFFOBJ::vPFFC_Delete((PFFOBJ *)v124, (struct PFFCLEANUP *)&v133);
      v7 = 1;
    }
    if ( ghsemPublicPFT )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPublicPFT);
      GreReleaseSemaphoreInternal(ghsemPublicPFT);
    }
    if ( v7 )
      vCleanupFontFile((struct PFFCLEANUP *)&v133);
  }
LABEL_36:
  if ( v16 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v16);
  return v30;
}
