/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02D4500
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C001D278 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001E590 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C001E5CC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00AD910 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5ED4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00DA0C8 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00DA618 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00E13F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011BFF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C015A776 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngPaint @ 0x1C028E980 (EngPaint.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D3640 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02D36A0 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02D37BC (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02D39A0 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02D3C10 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02D42E8 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02D43B4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02D5364 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  BRUSHOBJ *v12; // rdi
  unsigned int v13; // r14d
  DC *v14; // rax
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rcx
  Gre::Base *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v25; // rdx
  ULONG v26; // r12d
  char *v27; // r13
  __int64 v28; // r8
  bool v29; // cf
  int v30; // ecx
  __int64 v31; // rcx
  __m128i v32; // xmm6
  __int64 v33; // rcx
  int v34; // edi
  int v35; // edx
  unsigned int y; // ebx
  LONG x; // r10d
  int v38; // eax
  Gre::Base *v39; // rcx
  struct Gre::Base::SESSION_GLOBALS *v40; // rax
  bool v41; // zf
  int v42; // eax
  BOOL v43; // r13d
  LONG v44; // esi
  LONG v45; // r12d
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int8 *v49; // rsi
  int v50; // ecx
  int v51; // eax
  int v52; // r10d
  int v53; // r11d
  int v54; // r12d
  int v55; // r13d
  unsigned int v56; // ebx
  __int32 v57; // r12d
  __int32 v58; // r13d
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  int v65; // r10d
  BRUSHOBJ *v66; // rdi
  MIX v67; // eax
  __int64 v68; // r10
  MIX mix; // ebx
  struct ECLIPOBJ *v70; // rdx
  POINTL *v71; // r9
  struct ECLIPOBJ *v72; // rdx
  int v73; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v74; // [rsp+70h] [rbp-98h] BYREF
  BRUSHOBJ *v75; // [rsp+78h] [rbp-90h] BYREF
  struct _POINTL v76; // [rsp+80h] [rbp-88h] BYREF
  struct REGION *v77; // [rsp+88h] [rbp-80h] BYREF
  struct REGION *v78; // [rsp+90h] [rbp-78h] BYREF
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  char v80; // [rsp+A0h] [rbp-68h]
  int v81; // [rsp+A4h] [rbp-64h]
  ULONG v82; // [rsp+A8h] [rbp-60h]
  int v83; // [rsp+ACh] [rbp-5Ch]
  int v84; // [rsp+B0h] [rbp-58h] BYREF
  int v85; // [rsp+B4h] [rbp-54h] BYREF
  struct REGION *v86; // [rsp+B8h] [rbp-50h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v87; // [rsp+C0h] [rbp-48h]
  __int64 v88; // [rsp+C8h] [rbp-40h]
  DC *v89[2]; // [rsp+D0h] [rbp-38h] BYREF
  char v90[32]; // [rsp+E0h] [rbp-28h] BYREF
  FLONG v91; // [rsp+100h] [rbp-8h]
  _BYTE v92[4]; // [rsp+108h] [rbp+0h] BYREF
  int v93; // [rsp+10Ch] [rbp+4h]
  __int64 v94; // [rsp+110h] [rbp+8h]
  __int64 v95; // [rsp+128h] [rbp+20h]
  BRUSHOBJ *v96[2]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v97[4]; // [rsp+140h] [rbp+38h] BYREF
  int v98; // [rsp+144h] [rbp+3Ch]
  __int64 v99; // [rsp+148h] [rbp+40h]
  __int64 v100; // [rsp+160h] [rbp+58h]
  __int128 v101; // [rsp+168h] [rbp+60h] BYREF
  __int128 v102; // [rsp+178h] [rbp+70h]
  int v103; // [rsp+188h] [rbp+80h] BYREF
  __m128i v104; // [rsp+18Ch] [rbp+84h]
  ULONG v105; // [rsp+19Ch] [rbp+94h]
  unsigned __int8 *v106; // [rsp+1A0h] [rbp+98h]
  int v107; // [rsp+1A8h] [rbp+A0h]
  int v108; // [rsp+1ACh] [rbp+A4h]
  _BYTE v109[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v110[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v111[64]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v112[16]; // [rsp+228h] [rbp+120h] BYREF
  BRUSHOBJ pbo; // [rsp+238h] [rbp+130h] BYREF
  int v114; // [rsp+250h] [rbp+148h]
  int v115; // [rsp+254h] [rbp+14Ch]
  __int64 v116; // [rsp+258h] [rbp+150h]
  __int64 v117; // [rsp+260h] [rbp+158h]
  __int64 v118; // [rsp+290h] [rbp+188h]
  __int128 v119; // [rsp+298h] [rbp+190h]
  int v120; // [rsp+2B0h] [rbp+1A8h]
  __m128i v121; // [rsp+2C8h] [rbp+1C0h] BYREF
  _QWORD v122[2]; // [rsp+2D8h] [rbp+1D0h] BYREF
  CLIPOBJ pco; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v124; // [rsp+320h] [rbp+218h]
  __int64 v125; // [rsp+338h] [rbp+230h]
  int v126; // [rsp+340h] [rbp+238h]
  int v127; // [rsp+368h] [rbp+260h]
  __int64 v128; // [rsp+378h] [rbp+270h]
  CLIPOBJ v129; // [rsp+388h] [rbp+280h] BYREF
  __int64 v130; // [rsp+3C0h] [rbp+2B8h]
  __int64 v131; // [rsp+3D8h] [rbp+2D0h]
  int v132; // [rsp+3E0h] [rbp+2D8h]
  int v133; // [rsp+408h] [rbp+300h]
  __int64 v134; // [rsp+418h] [rbp+310h]

  LODWORD(v88) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v89, a1);
  v8 = v89[0];
  if ( !v89[0] || (*((_DWORD *)v89[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v89);
    return 0LL;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v89) )
  {
    if ( (v9 & 0xE0) != 0 )
    {
      v10 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v10 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v10 + 48), 11LL);
      v11 = *(_QWORD *)(v10 + 2528);
      if ( v11 )
        v12 = *(BRUSHOBJ **)(v11 + 56);
      else
        v12 = (BRUSHOBJ *)*((_QWORD *)v89[0] + 64);
      v75 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v96[0] = 0LL;
      v96[1] = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v89, (struct ERECTL *)v96);
    }
    v13 = 1;
    goto LABEL_110;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v73);
  v14 = v89[0];
  v15 = *((_QWORD *)v89[0] + 122);
  v16 = *(_DWORD *)(v15 + 152);
  if ( (v16 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v89[0], *(_QWORD *)(v15 + 160));
    v14 = v89[0];
  }
  if ( (v16 & 0x2000) != 0 )
  {
    GreDCSelectPen(v14, *(_QWORD *)(*((_QWORD *)v14 + 122) + 168LL));
    v14 = v89[0];
  }
  v17 = *((_QWORD *)v14 + 62);
  if ( v17 && *(_WORD *)(v17 + 100) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v78, (struct XDCOBJ *)v89);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v73);
    v75 = (BRUSHOBJ *)*((_QWORD *)Gre::Base::Globals(v18) + 14);
    GreAcquireSemaphore(v75);
    bConvertDfbDcToDib((struct XDCOBJ *)v89);
    SEMOBJ::vUnlock((SEMOBJ *)&v75);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v73);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v78);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v73);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v110);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v109, (struct XDCOBJ *)v89, 0);
  v19 = *((_QWORD *)v89[0] + 62);
  v74.x = a2;
  v74.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v112, (struct XDCOBJ *)v89, 516);
  v13 = 1;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v112, &v74, 1LL) )
    goto LABEL_109;
  v20 = *(_QWORD *)(v19 + 48);
  v21 = *(_QWORD *)(v19 + 128);
  v22 = *((_QWORD *)v89[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v89[0] + 6) + 40LL) & 0x80u) != 0
    || (unsigned int)DC::bIsCMYKColor(v89[0])
    || (*(_DWORD *)(v23 + 120) & 2) != 0 )
  {
    EngSetLastError(0x57u);
    goto LABEL_109;
  }
  NearestIndexFromColorref = ulGetNearestIndexFromColorref(v21, v22, a4, 1LL);
  v25 = v89[0];
  v26 = NearestIndexFromColorref;
  v82 = NearestIndexFromColorref;
  v27 = (char *)v89[0] + 1200;
  v28 = *((_QWORD *)v89[0] + 122);
  v29 = (*((_DWORD *)v89[0] + 30) & 5) != 0;
  v96[0] = (BRUSHOBJ *)((char *)v89[0] + 1200);
  v30 = *(_DWORD *)(v28 + 152);
  v91 = v29 ? 2 : 0;
  if ( (v30 & 1) != 0 || (*((_DWORD *)v89[0] + 79) & 1) != 0 )
  {
    *(_DWORD *)(v28 + 152) = v30 & 0xFFFFFFFE;
    *((_DWORD *)v89[0] + 79) &= ~1u;
    EBRUSHOBJ::vInitBrush(v27, v89[0], *((_QWORD *)v89[0] + 17), v22, v21, v19, 1);
    v25 = v89[0];
  }
  if ( (*((_DWORD *)v27 + 30) & 0x100) != 0 )
    goto LABEL_25;
  if ( (v109[24] & 1) == 0 )
  {
    v13 = XDCOBJ::bFullScreen((XDCOBJ *)v89);
LABEL_25:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
    goto LABEL_110;
  }
  v31 = *((_DWORD *)v25 + 10) & 1LL;
  v74.x += *((_DWORD *)v25 + 2 * v31 + 254);
  v74.y += *((_DWORD *)v25 + 2 * v31 + 255);
  v86 = XDCOBJ::prgnEffRao(v89);
  if ( RGNOBJ::bInside((RGNOBJ *)&v86, &v74) != 2 )
  {
LABEL_109:
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
    v13 = 0;
    goto LABEL_110;
  }
  v85 = 0;
  v84 = 0;
  v101 = 0LL;
  v79 = 0LL;
  v102 = 0LL;
  v80 = 0;
  v81 = 0;
  v75 = *(BRUSHOBJ **)(v19 + 48);
  PDEVOBJ::vSync((PDEVOBJ *)&v75, (struct _SURFOBJ *)(v19 + 24), 0LL, 0);
  v32 = *(__m128i *)((char *)v86 + 56);
  v76 = 0LL;
  v121 = v32;
  LODWORD(v87) = 0;
  if ( !*(_WORD *)(v19 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v86) != 3 )
  {
    v33 = *(_QWORD *)(v19 + 80);
    v34 = *(_DWORD *)(v19 + 88);
    v35 = *(_DWORD *)(v19 + 96);
    y = v74.y;
    x = v74.x;
    goto LABEL_58;
  }
  LODWORD(v101) = *(_DWORD *)(v19 + 96);
  v83 = v101;
  DWORD1(v101) = v121.m128i_i32[2] - v121.m128i_i32[0];
  DWORD2(v101) = v121.m128i_i32[3] - v121.m128i_i32[1];
  v38 = 1;
  DWORD2(v102) = 1;
  *(_QWORD *)&v102 = 0LL;
  if ( (*(_DWORD *)(v19 + 112) & 0x40000) != 0 )
    v38 = 262145;
  DWORD2(v102) = v38;
  SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v79 )
  {
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
    v13 = 0;
    goto LABEL_110;
  }
  v122[1] = *(_QWORD *)((char *)&v101 + 4);
  v122[0] = 0LL;
  v40 = Gre::Base::Globals(v39);
  v41 = (*(_DWORD *)(v19 + 112) & 0x400) == 0;
  v87 = v40;
  if ( v41 )
    v42 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, char *, _QWORD *, __m128i *))EngCopyBits)(
            (v79 + 24) & -(__int64)(v79 != 0),
            v19 + 24,
            0LL,
            (char *)v40 + 6896,
            v122,
            &v121);
  else
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *, __m128i *))(v20 + 2816))(
            (v79 + 24) & -(__int64)(v79 != 0),
            v19 + 24,
            0LL,
            (__int64)v40 + 6896,
            v122,
            &v121);
  v43 = v42;
  v44 = -v121.m128i_i32[0];
  v45 = -v121.m128i_i32[1];
  v76.x = -v121.m128i_i32[0];
  v76.y = -v121.m128i_i32[1];
  if ( !v42 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v86) != 3 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v121, &v76, 0);
    goto LABEL_55;
  }
  v43 = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v75);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v75);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v78);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v78);
  if ( v75 )
  {
    if ( v78 )
    {
      RGNOBJ::vSet((RGNOBJ *)&v75, (const struct _RECTL *const)&v121);
      if ( RGNOBJ::bMerge((RGNOBJ *)&v78, (struct RGNOBJ *)&v75, (struct RGNOBJ *)&v86, 4u) )
      {
        if ( !RGNOBJ::bOffset((RGNOBJ *)&v78, &v76) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v121, &v76, 1) )
        {
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
          SURFMEM::~SURFMEM((SURFMEM *)&v79);
          DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
          v13 = 0;
          goto LABEL_110;
        }
        v124 = 0LL;
        v125 = 0LL;
        v126 = 0;
        v127 = 1;
        v128 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v78, (struct ERECTL *)&v121, 0);
        v115 = -1;
        pbo.flColorType = v91;
        v118 = 0LL;
        v119 = 0LL;
        pbo.pvRbrush = 0LL;
        v46 = *((_DWORD *)v87 + 812);
        v116 = 0LL;
        v117 = 0LL;
        v120 = 0;
        if ( a5 )
        {
          pbo.iSolidColor = (v82 & 1) == 0;
          if ( v46 )
          {
            v47 = ulIndexToRGB(v21, v22, (v82 & 1) == 0);
            goto LABEL_50;
          }
        }
        else
        {
          pbo.iSolidColor = v82;
          if ( v46 )
          {
            v47 = v88;
LABEL_50:
            v115 = v47;
            v114 = v47;
          }
        }
        v43 = EngPaint((SURFOBJ *)((v79 + 24) & -(__int64)(v79 != 0)), &pco, &pbo, 0LL, 0xD0Du);
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
      }
    }
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v75);
  v45 = v76.y;
  v44 = v76.x;
LABEL_55:
  if ( !v43 )
    goto LABEL_56;
  x = v44 + v74.x;
  y = v45 + v74.y;
  v32 = v121;
  v35 = v83;
  v74.x += v44;
  v76.y = -v45;
  v26 = v82;
  v74.y = y;
  v76.x = -v44;
  v34 = *(_DWORD *)(v79 + 88);
  v33 = *(_QWORD *)(v79 + 80);
  LODWORD(v87) = 1;
LABEL_58:
  v108 = -1;
  v88 = v33;
  v103 = v35;
  v104 = v32;
  v105 = v26;
  v48 = *(_QWORD *)(v19 + 128);
  v49 = (unsigned __int8 *)(v33 + (int)(v34 * y));
  v107 = a5;
  v106 = v49;
  if ( v48 )
  {
    v50 = *(_DWORD *)(v48 + 24);
    if ( (v50 & 0xC) != 0 )
    {
      v108 = 0xFFFFFF;
    }
    else if ( (v50 & 2) != 0 )
    {
      v108 = **(_DWORD **)(v48 + 112) | *(_DWORD *)(*(_QWORD *)(v48 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v48 + 112)
                                                                                              + 8LL);
    }
  }
  v51 = FLOODBM::iColorGet((FLOODBM *)&v103, x);
  if ( !v53 && v51 == v26 || v53 == 1 && v51 != v26 )
    goto LABEL_56;
  FLOODBM::vFindExtent((FLOODBM *)&v103, v52, &v85, &v84);
  v54 = v84;
  v55 = v85;
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v97, 0x1B8u, 1LL, y, v85, v84);
  if ( !v100 )
  {
    EngSetLastError(8u);
    goto LABEL_106;
  }
  STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v92, 0xF8u, 0LL, (unsigned int)v74.y, v55, v54);
  if ( !v95 )
  {
    EngSetLastError(8u);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v92);
LABEL_106:
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
    v13 = 0;
    goto LABEL_110;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v77, 0x12E0u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v77);
  if ( !v77 )
  {
    EngSetLastError(8u);
    goto LABEL_103;
  }
  v56 = 1;
  v57 = v121.m128i_i32[3] - 1;
  v58 = v121.m128i_i32[1];
  if ( v74.y >= v121.m128i_i32[3] - 1 )
  {
    v93 -= *(_DWORD *)(v94 + 8);
    v94 = *(_QWORD *)(v94 + 16);
  }
  else
  {
    v56 = FLOODBM::bExtendScanline(
            (FLOODBM *)&v103,
            (struct STACKOBJ *)v92,
            (struct STACKOBJ *)v97,
            v74.y + 1,
            v49,
            &v49[v34]) & 1;
    if ( !v56 )
      goto LABEL_86;
  }
  v59 = v88;
  while ( 1 )
  {
    while ( v93 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)&v77, (struct STACKOBJ *)v92) )
        goto LABEL_85;
      if ( *(_DWORD *)v94 >= v57 )
      {
        v93 -= *(_DWORD *)(v94 + 8);
        v94 = *(_QWORD *)(v94 + 16);
      }
      else
      {
        v60 = FLOODBM::bExtendScanline(
                (FLOODBM *)&v103,
                (struct STACKOBJ *)v92,
                (struct STACKOBJ *)v97,
                *(_DWORD *)v94 + 1,
                (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v94),
                (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v94 + v34));
LABEL_84:
        if ( !v60 )
        {
LABEL_85:
          v56 = 0;
          goto LABEL_86;
        }
      }
    }
    if ( !v98 )
      break;
    v56 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)&v77, (struct STACKOBJ *)v97);
    if ( *(_DWORD *)v99 > v58 )
    {
      v60 = FLOODBM::bExtendScanline(
              (FLOODBM *)&v103,
              (struct STACKOBJ *)v97,
              (struct STACKOBJ *)v92,
              *(_DWORD *)v99 - 1,
              (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v99),
              (unsigned __int8 *)(v59 + v34 * *(_DWORD *)v99 - v34));
      goto LABEL_84;
    }
    v98 -= *(_DWORD *)(v99 + 8);
    v99 = *(_QWORD *)(v99 + 16);
  }
  if ( !v56 )
    goto LABEL_86;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v77) == 1 )
  {
LABEL_87:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v92);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v109, v61, v62, v63);
    if ( v110[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v110);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v111);
    if ( v89[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v89);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v90);
    return v56;
  }
  else
  {
    if ( (_DWORD)v87 == v65
      || RGNOBJ::bOffset((RGNOBJ *)&v77, &v76) && (unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v121, &v76, 1) )
    {
      v66 = v96[0];
      v67 = EBRUSHOBJ::mixBest(
              (EBRUSHOBJ *)v96[0],
              *(_BYTE *)(*((_QWORD *)v89[0] + 122) + 212LL),
              *(_BYTE *)(*((_QWORD *)v89[0] + 122) + 213LL));
      ++*(_DWORD *)(v19 + 92);
      v130 = v68;
      mix = v67;
      v131 = v68;
      v132 = v68;
      v133 = 1;
      v134 = v68;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v129, v77, (struct ERECTL *)&v121, 0);
      v71 = (POINTL *)v89[0];
      if ( (*((_DWORD *)v89[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v89, v70, &v121);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v89, v72, &v121);
        v71 = (POINTL *)v89[0];
      }
      v56 = EngPaint((SURFOBJ *)(v19 + 24), &v129, v66, v71 + 149, mix);
      if ( !v56 )
LABEL_86:
        EngSetLastError(8u);
      goto LABEL_87;
    }
LABEL_103:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v92);
    STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
LABEL_56:
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v109);
    v13 = 0;
LABEL_110:
    DCOBJ::~DCOBJ((DCOBJ *)v89);
    return v13;
  }
}
