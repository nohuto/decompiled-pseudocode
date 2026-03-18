/*
 * XREFs of ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02A59A4
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C012451C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C0150B6C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C001AA60 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01247EC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02A590C (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::pgdGetEudcMetrics(RFONTOBJ *this, struct RFONTOBJ *a2, struct RFONTOBJ *a3)
{
  int v4; // ebp
  _DWORD *v5; // rcx
  struct _GLYPHDATA *result; // rax
  __int64 v7; // rax
  struct GPRUN *Run; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rsi
  struct _GLYPHDATA **v12; // rdx

  v4 = (unsigned __int16)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2) )
    return 0LL;
  v5 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  if ( !*v5 )
    return RFONTOBJ::pgdDefault(this, a2);
  v7 = (unsigned int)(v4 - v5[4]);
  if ( (unsigned int)v7 >= v5[5] )
  {
    Run = RFONTOBJ::gprunFindRun(this, v4);
    v9 = (unsigned int)(v4 - *(_DWORD *)Run);
    if ( (unsigned int)v9 < *((_DWORD *)Run + 1) )
    {
      v10 = 8 * v9;
      v11 = (_QWORD *)((char *)Run + 8);
      goto LABEL_9;
    }
    return 0LL;
  }
  v10 = 8 * v7;
  v11 = v5 + 6;
LABEL_9:
  v12 = (struct _GLYPHDATA **)(v10 + *v11);
  result = *v12;
  if ( *v12 )
    return result;
  if ( !(unsigned int)RFONTOBJ::bInsertMetrics(this, v12, v4) )
    return 0LL;
  return *(struct _GLYPHDATA **)(v10 + *v11);
}
