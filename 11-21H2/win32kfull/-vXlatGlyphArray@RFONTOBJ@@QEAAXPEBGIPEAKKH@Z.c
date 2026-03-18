/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0015418 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0018FE0 (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00196F4 (GreGetGlyphOutlineInternal.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C001A598 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C001ACD8 (xInsertMetricsRFONTOBJ.c)
 *     GreGetGlyphIndicesW @ 0x1C0100C28 (GreGetGlyphIndicesW.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0141258 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027936C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0124858 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // r10
  __int64 *v8; // r8
  struct _FD_GLYPHSET *v12; // rbx
  ULONG cRuns; // edx
  WCRUN *awcrun; // rbx
  int v15; // edx
  unsigned int v16; // r9d
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // r11
  unsigned __int16 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned __int16 v33; // r10
  WCRUN *v34; // r8
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // edx
  struct _FD_GLYPHSET *v41; // rax
  __int64 v42; // r9
  unsigned __int16 wcLow; // cx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  int v48; // ecx
  int v49; // edx
  char v50; // cl
  int v51; // ecx
  __int64 *v52; // [rsp+20h] [rbp-38h]
  __int64 v53; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v54; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD **)this;
  v8 = 0LL;
  LODWORD(v54) = 0;
  v52 = 0LL;
  v12 = (struct _FD_GLYPHSET *)v6[59];
  if ( a6 )
  {
    v40 = *(_DWORD *)(v6[15] + 8LL);
    if ( v40 )
    {
      if ( (v40 & 1) == 0 )
      {
        v8 = *(__int64 **)(v6[16] + 8LL * ((v40 - 1) & 0xFFFFFFFE) + 216);
        v52 = v8;
        v53 = (__int64)v8;
        if ( v8 )
        {
          v41 = PFEOBJ::pfdg((__int64 **)&v53);
          v8 = v52;
          if ( v41 )
          {
            LODWORD(v54) = 1;
            v12 = v41;
          }
        }
      }
    }
  }
  cRuns = v12->cRuns;
  if ( !cRuns )
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 460LL);
    return;
  }
  awcrun = v12->awcrun;
  v15 = cRuns - 1;
  if ( a5 == 1 )
    v16 = -1;
  else
    v16 = *(_DWORD *)(*(_QWORD *)this + 460LL);
  v17 = 0xFFFF;
  a6 = v16;
  if ( v15 > 0xFFFF )
  {
    v18 = 0xFFFFLL;
    v53 = 0xFFFFLL;
  }
  else
  {
    v18 = v15;
    v17 = v15;
    v53 = v15;
    if ( (v15 & 0xF000) == 0 )
    {
      if ( (v15 & 0xF00) != 0 )
      {
        v19 = (unsigned int)acBits[BYTE1(v15)] + 8;
      }
      else if ( (v15 & 0xF0) != 0 )
      {
        v19 = (unsigned int)acBits[(unsigned __int8)((__int64)v15 >> 4)] + 4;
      }
      else
      {
        v19 = acBits[v15];
      }
      goto LABEL_10;
    }
  }
  v19 = (unsigned int)acBits[(unsigned __int8)(v18 >> 12)] + 12;
LABEL_10:
  v20 = *((int *)&aiStart + v19);
  if ( a3 )
  {
    v21 = *((int *)&aiStart + v19);
    while ( 1 )
    {
      v22 = *a2;
      if ( *a2 < awcrun->wcLow )
        break;
      v23 = v20;
      v24 = v21;
      if ( (_DWORD)v19 != 8 )
      {
        v33 = *a2;
        switch ( (int)v19 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_38;
          case 3:
            goto LABEL_34;
          case 4:
            goto LABEL_30;
          case 5:
            goto LABEL_26;
          case 6:
            goto LABEL_22;
          case 7:
            goto LABEL_18;
          case 9:
            goto LABEL_66;
          case 10:
            goto LABEL_91;
          case 11:
            goto LABEL_87;
          case 12:
            goto LABEL_83;
          case 13:
            goto LABEL_79;
          case 14:
            goto LABEL_120;
          case 15:
            goto LABEL_115;
          case 16:
            v42 = 0x4000LL;
            wcLow = awcrun[v21].wcLow;
            v44 = 0x4000;
            if ( v22 < wcLow )
              v44 = -16384;
            v23 = v20 + v44;
            if ( v22 < wcLow )
              v42 = -16384LL;
            v24 = v21 + v42;
LABEL_115:
            if ( v24 > v53 || v22 < awcrun[v24].wcLow )
            {
              v45 = -8192;
              v46 = -8192LL;
            }
            else
            {
              v45 = 0x2000;
              v46 = 0x2000LL;
            }
            v23 += v45;
            v24 += v46;
LABEL_120:
            if ( v24 > v53 || (v47 = 4096, v22 < awcrun[v24].wcLow) )
              v47 = -4096;
            v23 += v47;
LABEL_79:
            if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
              v36 = 2048;
            else
              v36 = -2048;
            v23 += v36;
LABEL_83:
            if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
              v37 = 1024;
            else
              v37 = -1024;
            v23 += v37;
LABEL_87:
            if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
              v38 = 512;
            else
              v38 = -512;
            v23 += v38;
LABEL_91:
            if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
              v39 = 256;
            else
              v39 = -256;
            v23 += v39;
LABEL_66:
            if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
              v23 += 128;
            else
              v23 -= 128;
            break;
          default:
            goto LABEL_46;
        }
      }
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v25 = 64;
      else
        v25 = -64;
      v23 += v25;
LABEL_18:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v26 = 32;
      else
        v26 = -32;
      v23 += v26;
LABEL_22:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v27 = 16;
      else
        v27 = -16;
      v23 += v27;
LABEL_26:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v28 = 8;
      else
        v28 = -8;
      v23 += v28;
LABEL_30:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v29 = 4;
      else
        v29 = -4;
      v23 += v29;
LABEL_34:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v30 = 2;
      else
        v30 = -2;
      v23 += v30;
LABEL_38:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v31 = 1;
      else
        v31 = -1;
      v23 += v31;
LABEL_42:
      if ( v23 <= v17 && v22 >= awcrun[v23].wcLow )
        v32 = 0;
      else
        v32 = -1;
      v23 += v32;
      v33 = *a2;
LABEL_46:
      v34 = &awcrun[v23];
      v35 = v33 - v34->wcLow;
      if ( v35 < v34->cGlyphs )
      {
        if ( v34->phg )
        {
          while ( 1 )
          {
            ++a2;
            *a4++ = v34->phg[v35];
            if ( !--a3 )
              break;
            v35 = *a2 - v34->wcLow;
            if ( v35 < 0 || v35 >= v34->cGlyphs )
              goto LABEL_51;
          }
        }
        else
        {
          while ( 1 )
          {
            ++a2;
            *a4++ = v33;
            if ( !--a3 )
              break;
            v33 = *a2;
            v51 = *a2 - v34->wcLow;
            if ( v51 < 0 || v51 >= v34->cGlyphs )
            {
LABEL_51:
              v16 = a6;
              goto LABEL_52;
            }
          }
        }
        goto LABEL_53;
      }
      if ( a5 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v33) )
        goto LABEL_58;
      if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
      {
        v48 = *a2;
        if ( (unsigned __int16)v48 >= gqlTTSystem && (unsigned __int16)v48 <= (unsigned __int16)word_1C0337C8A )
        {
          v49 = v48 - gqlTTSystem;
          v50 = (v48 - gqlTTSystem) & 0x1F;
          if ( v49 < 0 )
          {
            v49 += 31;
            v50 -= 32;
          }
          if ( ((0x80000000 >> v50) & *(_DWORD *)(qword_1C0337C90 + 4LL * (v49 >> 5))) != 0 )
LABEL_58:
            *(_DWORD *)(*(_QWORD *)this + 712LL) |= 0x40u;
        }
      }
      v16 = a6;
      ++a2;
      *a4 = a6;
      v21 = v20;
      ++a4;
      --a3;
LABEL_52:
      if ( !a3 )
        goto LABEL_53;
    }
    while ( 1 )
    {
      *a4 = v16;
      ++a2;
      ++a4;
      if ( !--a3 )
        break;
      if ( *a2 >= awcrun->wcLow )
        goto LABEL_52;
    }
LABEL_53:
    v8 = v52;
  }
  if ( (_DWORD)v54 )
  {
    v54 = v8;
    PFEOBJ::vFreepfdg(&v54);
  }
}
