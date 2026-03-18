/*
 * XREFs of gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x180228414
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180228710 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001A980 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 */

void __fastcall gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( **(_BYTE **)a1 )
      CDrawingContext::PopRenderOptionsInternal(*(CDrawingContext **)(a1 + 8), 1);
  }
}
