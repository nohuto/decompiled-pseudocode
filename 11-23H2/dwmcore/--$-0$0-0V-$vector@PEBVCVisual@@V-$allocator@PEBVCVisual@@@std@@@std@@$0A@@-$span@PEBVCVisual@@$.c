/*
 * XREFs of ??$?0$0?0V?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@$0A@@?$span@PEBVCVisual@@$0?0@gsl@@QEAA@AEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800ED9C4
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180078E48 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E84C4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180103C6C (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall gsl::span<CVisual const *,-1>::span<CVisual const *,-1>(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  gsl::details *v4; // rcx
  bool v5; // zf

  v2 = *a2;
  gsl::details::extent_type<-1>::extent_type<-1>(a1, (a2[1] - *a2) >> 3);
  v5 = *a1 == -1LL;
  a1[1] = v2;
  if ( v5 || !v2 && *a1 )
  {
    gsl::details::terminate(v4);
    JUMPOUT(0x1800EDA0CLL);
  }
  return a1;
}
