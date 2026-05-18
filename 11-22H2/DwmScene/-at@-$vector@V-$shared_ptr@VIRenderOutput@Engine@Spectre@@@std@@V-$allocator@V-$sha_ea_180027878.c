/*
 * XREFs of ?at@?$vector@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@2@@std@@QEBAAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@2@_K@Z @ 0x180027878
 * Callers:
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::shared_ptr<Spectre::Engine::IRenderOutput>>::at(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( (a1[1] - *a1) >> 4 <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 16 * a2;
}
