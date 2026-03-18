/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C000B310
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C000E018 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C0105618 (GreGetFontUnicodeRanges.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C013B0A4 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C000B54C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02B9ED0 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this)
{
  struct _FD_GLYPHSET *v2; // rsi
  int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  int v9; // r14d
  bool v10; // al
  void (__fastcall *v11)(struct _FD_GLYPHSET *, unsigned __int64); // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  struct _FD_GLYPHSET *v13; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v15; // [rsp+90h] [rbp+50h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = **this;
  v12 = v4;
  v5 = *(_QWORD *)(v4 + 88);
  v14 = 0LL;
  GreAcquireSemaphore(ghsemGlyphSet);
  v6 = *this;
  if ( !(*this)[2] )
  {
    v9 = *(_DWORD *)(v5 + 40) & 0x8000;
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
      GreReleaseSemaphoreInternal(ghsemGlyphSet);
      v6 = *this;
    }
    v13 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   (PFFOBJ *)&v12,
                                   *(struct DHPDEV__ **)(v4 + 96),
                                   *(_QWORD *)(v4 + 80),
                                   *((_DWORD *)v6 + 2),
                                   3u,
                                   &v14);
    v2 = v13;
    if ( v9 )
      GreAcquireSemaphore(ghsemGlyphSet);
    if ( v2 )
    {
      if ( (*this)[2] )
      {
LABEL_16:
        v3 = 1;
        goto LABEL_2;
      }
      (*this)[2] = (__int64)v2;
      (*this)[3] = v14;
      if ( v9 )
      {
        if ( *(_BYTE *)((*this)[4] + 44) == 2 )
        {
          v15 = 0LL;
          v10 = bExtendGlyphSet(&v13, &v15);
          v2 = v13;
          if ( v10 )
          {
            (*this)[2] = (__int64)v15;
            goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_2:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 34);
  if ( v3 )
  {
    v11 = *(void (__fastcall **)(struct _FD_GLYPHSET *, unsigned __int64))(v5 + 3000);
    if ( v11 )
      v11(v2, v14);
  }
  v7 = (*this)[2];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v7;
}
