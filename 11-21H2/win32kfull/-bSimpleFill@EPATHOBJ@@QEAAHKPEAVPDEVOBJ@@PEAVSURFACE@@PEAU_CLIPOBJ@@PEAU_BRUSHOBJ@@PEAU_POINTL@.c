/*
 * XREFs of ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0134AA8
 * Callers:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0133FC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0134298 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0282DD0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0283290 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0134BF8 (-bSubOverflow@@YAHJJ@Z.c)
 *     EngFillPath @ 0x1C0134C30 (EngFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0136020 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014D744 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  PATHOBJ v9; // r10
  __int64 v13; // r10
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i *v17; // r10
  int v19; // r12d
  __int64 (__fastcall *v20)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  int v21; // r14d
  __int64 (__fastcall *v22)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // rax
  _BYTE v23[32]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v24[32]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]

  v9 = ppo[1];
  memset(v23, 0, sizeof(v23));
  v14 = 0;
  if ( (unsigned int)bSubOverflow(*(_DWORD *)(*(_QWORD *)&v9 + 56LL), *(_DWORD *)(*(_QWORD *)&v9 + 48LL))
    || (unsigned int)bSubOverflow(*(_DWORD *)(v13 + 60), *(_DWORD *)(v13 + 52))
    || _mm_cvtsi128_si32(_mm_srli_si128(v17[3], 8)) - v17[3].m128i_i32[0] < 0
    || (int)(_mm_srli_si128(v17[48LL], 8).m128i_i32[1] - HIDWORD(v17[3].m128i_i64[0])) < 0 )
  {
    return 0;
  }
  if ( !ppo->cCurves )
    return 1;
  if ( (*(_DWORD *)(v16 + 112) & 0x40) == 0
    || ((a2 & 8) == 0 || (flOptions & 2) == 0) && ((flOptions & 2) != 0 || (a2 & 4) == 0) )
  {
    goto LABEL_10;
  }
  PRECOMPUTE::vInit(v24, a4, v15, ppo, pco, 0LL, 0LL, mix, flOptions, 1);
  if ( v25 )
  {
    v19 = -1;
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        ++*((_DWORD *)a4 + 23);
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PushThreadGuardedObject(v23, ppo, vCleanupPathStackObj);
        v20 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2784LL);
        if ( v20 )
          v21 = v20((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
        else
          v21 = -1;
        if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
          PopThreadGuardedObject(v23);
        if ( v21 == 1 )
        {
LABEL_36:
          v14 = 1;
          goto LABEL_37;
        }
        if ( v21 == -1 )
          goto LABEL_37;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_37;
    }
    ++*((_DWORD *)a4 + 23);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PushThreadGuardedObject(v23, ppo, vCleanupPathStackObj);
    v22 = *(__int64 (__fastcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(*(_QWORD *)a3 + 2784LL);
    if ( v22 )
      v19 = v22((char *)a4 + 24, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    if ( (*(_DWORD *)(*(_QWORD *)&ppo[1] + 84LL) & 1) != 0 )
      PopThreadGuardedObject(v23);
    if ( v19 != 1 )
    {
      if ( v19 != -1 )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
LABEL_10:
        ++*((_DWORD *)a4 + 23);
        return EngFillPath((SURFOBJ *)((char *)a4 + 24), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  EngSetLastError(8u);
LABEL_37:
  PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
  return v14;
}
