/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C001A8BC
 * Callers:
 *     ?bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z @ 0x1C0019F70 (-bGetWidthData@RFONTOBJ@@QEAAHPEAU_WIDTHDATA@@AEAVXDCOBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C001A108 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C001A598 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00359A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00379E0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00C4794 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00EA92C (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C013B81C (GreGetCharWidthW.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C013C010 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C001AA60 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C001ACD8 (xInsertMetricsRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  __int64 v8; // r14
  _DWORD *v10; // rcx
  struct GPRUN *v11; // r15
  _DWORD *v12; // r9
  int v13; // r13d
  __int64 v14; // rbp
  struct _GLYPHDATA *LinkMetricsPlus; // r8
  struct GPRUN *Run; // rax
  _DWORD *i; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v19; // [rsp+48h] [rbp-40h]
  unsigned __int16 *v20; // [rsp+50h] [rbp-38h]
  int v21; // [rsp+90h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v19 = a4;
  v10 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( *v10 )
  {
    v20 = &a4[v8];
    v11 = (struct GPRUN *)(v10 + 4);
    if ( a4 < v20 )
    {
      v12 = v10 + 5;
      for ( i = v10 + 5; ; v12 = i )
      {
        v13 = *a4;
        v14 = (unsigned int)(v13 - *(_DWORD *)v11);
        if ( (unsigned int)v14 >= *v12 )
        {
          Run = RFONTOBJ::gprunFindRun(this, v13);
          v11 = Run;
          v14 = (unsigned int)(v13 - *(_DWORD *)Run);
          i = (_DWORD *)((char *)Run + 4);
          if ( (unsigned int)v14 >= *((_DWORD *)Run + 1) )
          {
            v21 = 0;
            LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a5, a6, a4, v19, v8, &v21, 0);
            if ( !LinkMetricsPlus )
              return 0LL;
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v14);
          }
        }
        else
        {
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v11 + 1) + 8 * v14);
        }
        if ( !LinkMetricsPlus )
        {
          if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2)
            || !(unsigned int)xInsertMetricsRFONTOBJ(this) )
          {
            return 0LL;
          }
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v11 + 1) + 8 * v14);
        }
        ++a4;
        a3->hg = LinkMetricsPlus->hg;
        a3->pgdf = &LinkMetricsPlus->gdf;
        ++a3;
        if ( a4 >= v20 )
          return 1LL;
      }
    }
  }
  else
  {
    for ( ; (_DWORD)v8; LODWORD(v8) = v8 - 1 )
    {
      a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
      a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
      ++a3;
    }
  }
  return 1LL;
}
