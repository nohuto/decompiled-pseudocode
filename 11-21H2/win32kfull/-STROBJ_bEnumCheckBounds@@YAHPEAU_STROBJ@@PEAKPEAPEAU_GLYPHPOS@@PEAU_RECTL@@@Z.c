/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C013A078
 * Callers:
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C013A234 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C013A2C0 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C02BDFD0 (vGetPosInfo.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  ULONG cGlyphs; // r15d
  BOOL v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rbx
  PGLYPHPOS v11; // rdx
  unsigned int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // r10
  ULONG v15; // r11d
  struct _RECTL *v16; // rdx
  __int64 v17; // rbp
  PGLYPHPOS v18; // r8
  LONG x; // ecx
  LONG y; // r9d
  GLYPHDEF *pgdf; // rax
  GLYPHBITS *pgb; // r8
  LONG v23; // ecx
  LONG v24; // r9d
  LONG v26; // [rsp+20h] [rbp-58h] BYREF
  LONG v27; // [rsp+24h] [rbp-54h]
  PGLYPHPOS v28; // [rsp+28h] [rbp-50h]
  unsigned int v29; // [rsp+80h] [rbp+8h]
  int v30; // [rsp+88h] [rbp+10h]
  LONG left; // [rsp+90h] [rbp+18h]

  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v8 = STROBJ_bEnum(a1, pc, ppgpos);
    v9 = *pc;
    v10 = 0LL;
    v11 = *ppgpos;
    v12 = v8;
    v28 = *ppgpos;
    v13 = v9;
    if ( v9 )
      break;
LABEL_20:
    if ( (unsigned int)v10 < v13 )
      goto LABEL_3;
    if ( !v12 )
    {
      *pc = 0;
      return 0LL;
    }
  }
  while ( 1 )
  {
    v13 = v9;
    if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v11[v10], a4, cGlyphs + (unsigned int)v10) )
      break;
    v11 = v28;
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v9 )
      goto LABEL_20;
  }
LABEL_3:
  v14 = (unsigned int)(v10 + 1);
  v15 = 1;
  if ( (unsigned int)v14 < v13 )
  {
    v16 = a4;
    v29 = v13;
    v13 = v9;
    left = a4->left;
    v30 = (__int64)a1[4].pwszOrg & 0x1400;
    while ( 1 )
    {
      v17 = v14;
      v18 = v28;
      x = v28[v14].ptl.x;
      y = v28[v14].ptl.y;
      v26 = x;
      v27 = y;
      if ( !v30 && (_DWORD)v14 + cGlyphs && a1->ulCharInc )
      {
        vGetPosInfo(a1, (unsigned int)v14 + cGlyphs, &v26);
        y = v27;
        x = v26;
        v16 = a4;
        v18 = v28;
      }
      pgdf = v18[v17].pgdf;
      pgb = pgdf->pgb;
      v23 = pgdf->pgb->ptlOrigin.x + x;
      v24 = pgdf->pgb->ptlOrigin.y + y;
      if ( v23 < left
        || pgb->sizlBitmap.cx + v23 > v16->right
        || v24 < v16->top
        || v24 + pgb->sizlBitmap.cy > v16->bottom )
      {
        break;
      }
      v29 = v13;
      ++v15;
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= v13 )
        goto LABEL_14;
    }
    v13 = v29;
  }
LABEL_14:
  if ( v15 + (unsigned int)v10 < v13 )
    v12 = 1;
  a1[1].cGlyphs = v10 + v15 + cGlyphs;
  *ppgpos += v10;
  *pc = v15;
  if ( ((__int64)a1[4].pwszOrg & 0x1400) == 0 && (cGlyphs || (_DWORD)v10) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, cGlyphs + (unsigned int)v10, &(*ppgpos)->ptl);
  }
  return v12;
}
