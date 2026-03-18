/*
 * XREFs of ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C013B0A4
 * Callers:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C00EFAC8 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0124C98 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     bAddAllFlEntry @ 0x1C015E414 (bAddAllFlEntry.c)
 *     GreEudcLoadLinkW @ 0x1C0295894 (GreEudcLoadLinkW.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C000B238 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0124C98 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall bComputeQuickLookup(struct _QUICKLOOKUP *a1, struct PFE *a2, int a3)
{
  unsigned int v3; // ebx
  struct _QUICKLOOKUP *v5; // rdi
  unsigned __int16 v6; // r14
  unsigned __int16 v7; // bp
  __int64 *v8; // r15
  struct _FD_GLYPHSET *v9; // rax
  struct _FD_GLYPHSET *v10; // r13
  WCRUN *awcrun; // rdx
  unsigned int v12; // esi
  ULONG cRuns; // eax
  __int64 v14; // r10
  int wcLow; // r9d
  int cGlyphs; // r11d
  unsigned __int16 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // r9d
  USHORT v21; // di
  __int64 v22; // r12
  int v23; // r10d
  int v24; // eax
  __int64 v25; // r9
  unsigned int v26; // eax
  int v27; // r11d
  __int64 v28; // rbp
  __int64 v30; // r9
  unsigned int v31; // r8d
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // eax
  void *v37; // rcx
  __int64 v38; // [rsp+20h] [rbp-48h]
  int v39; // [rsp+78h] [rbp+10h]
  __int64 *v40; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v40 = (__int64 *)a2;
  v5 = a1;
  v6 = 0;
  v7 = -1;
  if ( !a2 )
    return 0;
  if ( !a1 )
    v5 = PFEOBJ::pql((struct PFE **)&v40);
  v8 = (__int64 *)((char *)v5 + 8);
  if ( !a3 && *v8 )
    return 1;
  v9 = PFEOBJ::pfdg(&v40);
  v10 = v9;
  if ( !v9 )
    return v3;
  awcrun = v9->awcrun;
  v12 = 1;
  cRuns = v9->cRuns;
  if ( cRuns )
  {
    v14 = cRuns;
    do
    {
      wcLow = awcrun->wcLow;
      cGlyphs = awcrun->cGlyphs;
      v17 = wcLow;
      if ( v7 <= (unsigned __int16)wcLow )
        v17 = v7;
      if ( v6 < (unsigned int)(wcLow + cGlyphs) )
        v6 = wcLow + cGlyphs - 1;
      ++awcrun;
      v7 = v17;
      --v14;
    }
    while ( v14 );
  }
  *(_WORD *)v5 = v7;
  *((_WORD *)v5 + 1) = v6;
  if ( a3 )
  {
    v37 = (void *)*((_QWORD *)v5 + 1);
    if ( v37 )
      memset(v37, 0, 0x2000uLL);
    else
      *((_QWORD *)v5 + 1) = Win32AllocPoolZInit(0x2000LL, 1802400071LL);
    v19 = *((_QWORD *)v5 + 1);
    v7 = 0;
  }
  else
  {
    v18 = 4 * ((v6 - v7 + 32) / 32);
    if ( v18 )
      v19 = Win32AllocPoolZInit(v18, 1802400071LL);
    else
      v19 = 0LL;
    *v8 = v19;
  }
  if ( !v19 )
  {
    PFEOBJ::vFreepfdg(&v40);
    return v3;
  }
  if ( v10->cRuns )
  {
    v20 = v7;
    v39 = v7;
    while ( 1 )
    {
      v38 = v3;
      v21 = v10->awcrun[v38].cGlyphs;
      v22 = (unsigned int)((v10->awcrun[v38].wcLow - v20) / 32);
      v23 = (v10->awcrun[v38].wcLow - v20) % 32;
      v24 = v21 - v20;
      v25 = *v8;
      v26 = (v10->awcrun[v38].wcLow - 1 + v24) / 32;
      v27 = *(_DWORD *)(*v8 + 4 * v22);
      v28 = v26;
      if ( (_DWORD)v22 != v26 )
        break;
      *(_DWORD *)(v25 + 4 * v22) = v27 | ((unsigned int)(-1 << (32 - v21)) >> v23);
LABEL_23:
      v20 = v39;
      if ( ++v3 >= v10->cRuns )
        goto LABEL_24;
    }
    *(_DWORD *)(v25 + 4 * v22) = v27 | (0xFFFFFFFF >> v23);
    v30 = (unsigned int)(v22 + 1);
    v31 = v26 - v30;
    v32 = v22 + 1;
    if ( (unsigned int)v30 < v26 )
    {
      if ( v31 < 4
        || *v8 + 4 * v30 <= (unsigned __int64)v8 && *v8 + 4 * (unsigned __int64)(v26 - 1) >= (unsigned __int64)v8 )
      {
        goto LABEL_30;
      }
      v35 = v26 - (v31 & 3);
      do
        v32 += 4;
      while ( v32 < v35 );
      memset((void *)(*v8 + 4 * v30), -1, 16 * ((unsigned __int64)(v35 - (unsigned int)v30 + 3) >> 2));
    }
    if ( v32 >= (unsigned int)v28 )
    {
LABEL_28:
      *(_DWORD *)(*v8 + 4 * v28) |= -1 << (31 - (v10->awcrun[v38].wcLow - v39 - 1 + v10->awcrun[v38].cGlyphs) % 32);
      goto LABEL_23;
    }
LABEL_30:
    v33 = (unsigned int)v28 - v32;
    v34 = 4LL * v32;
    do
    {
      *(_DWORD *)(v34 + *v8) = -1;
      v34 += 4LL;
      --v33;
    }
    while ( v33 );
    goto LABEL_28;
  }
LABEL_24:
  PFEOBJ::vFreepfdg(&v40);
  return v12;
}
