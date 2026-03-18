/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04
 * Callers:
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00EB7A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C01292C0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C012A800 (NtGdiFONTOBJ_pifi.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C012A938 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C012F58C (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015E008 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0283290 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C02833F0 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A8770 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A9A10 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02AA160 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B2E70 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B30C0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B3200 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02AB9BC (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  __int64 v5; // rax
  unsigned int *v7; // rdi
  void **v10; // r15
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // r14
  unsigned int v23; // r15d
  __int64 v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax

  v5 = *(_QWORD *)a1;
  v7 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v10 = a5;
      if ( !a5 )
      {
        v11 = 1;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v10 = a5;
  if ( !a5 )
    return 0LL;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  v5 = *(_QWORD *)a1;
LABEL_7:
  v12 = *(_QWORD *)(v5 + 848);
  if ( !v12 )
    goto LABEL_14;
  GreAcquireSemaphore(v12);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
  if ( v13 )
  {
    v19 = *(_QWORD *)(v13 + 504);
    if ( v19 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v19) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSystemTT->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x20u;
        else
          *v7 |= 0x20u;
      }
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v14 )
  {
    v20 = *(_QWORD *)(v14 + 504);
    if ( v20 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v20) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntSysEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x40u;
        else
          *v7 |= 0x40u;
      }
    }
  }
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v15 )
  {
    v21 = *(_QWORD *)(v15 + 504);
    if ( v21 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v21) )
      {
        EtwTraceGreLockReleaseSemaphore(
          L"rfo.prfnt->prfntDefEUDC->hsemCache",
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
        if ( v11 )
          *((_DWORD *)a2 + 103) |= 0x80u;
        else
          *v7 |= 0x80u;
      }
    }
  }
  v16 = *(unsigned int *)(*(_QWORD *)a1 + 840LL);
  if ( (_DWORD)v16 )
  {
    if ( v11 )
    {
      v22 = 0LL;
      if ( !(unsigned int)UMPDOBJ::bAllocFontLinks(a2, v16) )
        goto LABEL_13;
    }
    else
    {
      if ( (unsigned int)v16 <= 0xA )
      {
        v22 = (char *)*v10;
      }
      else if ( 4 * (_DWORD)v16 )
      {
        v22 = (char *)Win32AllocPool((unsigned int)(4 * v16), 1886221639LL);
      }
      else
      {
        v22 = 0LL;
      }
      *v10 = v22;
      if ( !v22 )
        goto LABEL_23;
      *a4 = v16;
      memset(v22, 0, 4 * v16);
    }
    v23 = 0;
    v24 = 0LL;
    v25 = 0LL;
    do
    {
      v26 = *(_QWORD *)(v25 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 504);
        if ( v27 )
        {
          if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v27) )
          {
            EtwTraceGreLockReleaseSemaphore(
              L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v25) + 504LL));
            GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v25) + 504LL));
            if ( v11 )
            {
              if ( v23 < *((_DWORD *)a2 + 104) )
              {
                v28 = *((_QWORD *)a2 + 48);
                if ( v28 )
                  *(_DWORD *)(v24 + v28) = 1;
              }
            }
            else
            {
              *(_DWORD *)&v22[v24] = 1;
            }
          }
        }
      }
      ++v23;
      v25 += 8LL;
      v24 += 4LL;
    }
    while ( v23 < (unsigned int)v16 );
    v7 = a3;
  }
  if ( !v11 )
  {
LABEL_23:
    *v7 |= *(_DWORD *)(*(_QWORD *)a1 + 712LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 712LL) |= 0x200u;
  }
LABEL_13:
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 848LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
  v5 = *(_QWORD *)a1;
LABEL_14:
  v17 = *(_QWORD *)(v5 + 504);
  if ( v17 && (unsigned int)GreIsSemaphoreOwnedByCurrentThread(v17) )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)a1 + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v7 |= 0x10u;
  }
  return 1LL;
}
