/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00DBBF8
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00421B8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00DBB40 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C000B524 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00153F0 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029C510 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  char *v6; // rbx
  struct RFONT *v7; // rdx
  signed __int32 v8; // ett
  char *v9; // rax
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( gbNoHookRedir )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v3 + 36) & 0x4000) == 0 )
    return 0LL;
  v4 = *(_DWORD **)(v3 + 48);
  if ( !v4 || (v4[10] & 0x20000000) == 0 )
    return 0LL;
  v6 = (char *)gpRedirDev;
  if ( gpRedirDev || (gpRedirDev = PDEV::Allocate(0), (v6 = (char *)gpRedirDev) != 0LL) )
  {
    if ( *(char **)(*(_QWORD *)a1 + 48LL) != v6 )
    {
      v10 = v6;
      memmove(v6, v4, 0xDA8uLL);
      PDEVOBJ::prfntActive((PDEVOBJ *)&v10, 0LL);
      PDEVOBJ::prfntInactive((PDEVOBJ *)&v10, v7);
      if ( (*((_DWORD *)v6 + 10) & 0x800000) != 0 )
        *(_DWORD *)(*((_QWORD *)v6 + 437) + 1528LL) = 0;
      else
        *((_DWORD *)v6 + 382) = 0;
      _m_prefetchw(v6 + 40);
      do
        v8 = *((_DWORD *)v6 + 10);
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 10, v8 | 0x800000, v8) );
      v9 = v10;
      *((_QWORD *)v10 + 437) = v4;
      *((_QWORD *)v9 + 10) = v9;
      *((_QWORD *)gpRedirDev + 356) = RedirTextOut;
      *((_QWORD *)gpRedirDev + 347) = RedirStrokePath;
      *((_QWORD *)gpRedirDev + 352) = RedirCopyBits;
      *((_QWORD *)gpRedirDev + 351) = RedirBitBlt;
      *((_QWORD *)gpRedirDev + 364) = RedirLineTo;
      *((_QWORD *)gpRedirDev + 348) = RedirFillPath;
      *((_QWORD *)gpRedirDev + 349) = RedirStrokeAndFillPath;
      *((_QWORD *)gpRedirDev + 353) = RedirStretchBlt;
      *((_QWORD *)gpRedirDev + 404) = RedirAlphaBlend;
      *((_QWORD *)gpRedirDev + 407) = RedirTransparentBlt;
      *((_QWORD *)gpRedirDev + 401) = RedirGradientFill;
      *((_QWORD *)gpRedirDev + 423) = RedirDrawStream;
      *((_QWORD *)gpRedirDev + 424) = RedirNineGrid;
      *((_QWORD *)gpRedirDev + 403) = RedirPlgBlt;
      *((_QWORD *)gpRedirDev + 402) = RedirStretchBltROP;
      *((_QWORD *)gpRedirDev + 358) = RedirDrawEscape;
      bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
      v1 = 1;
      *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpRedirDev;
    }
  }
  return v1;
}
