/*
 * XREFs of ?at@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@_K@Z @ 0x18002783C
 * Callers:
 *     ?GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ @ 0x180026528 (-GetDefaultOutput@RenderDevice@Engine@Spectre@@QEAAAEAVIRenderOutput@23@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::at(__int64 *a1)
{
  __int64 v1; // rdx

  v1 = *a1;
  if ( !((a1[1] - *a1) >> 4) )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v1;
}
