/*
 * XREFs of ?SetFormat@RenderOutput@Engine@Spectre@@UEAAXW4BufferStage@IRenderOutput@23@W4Format@23@@Z @ 0x18002CA00
 * Callers:
 *     ??0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@5@@Z @ 0x18002B424 (--0RenderOutput@Engine@Spectre@@IEAA@UOutputDescription@12@V-$shared_ptr@VRenderDevice@Engine@Sp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::RenderOutput::SetFormat(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = a2;
  *(_DWORD *)(a1 + 4LL * a2 + 224) = a3;
  return result;
}
