/*
 * XREFs of ?GetShaderModelActive@RenderDevice@Engine@Spectre@@QEBA?AW4EShaderModel@23@XZ @ 0x18002684C
 * Callers:
 *     ?BeginCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x180025F20 (-BeginCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre.c)
 *     ?Reset@CommandList@Engine@Spectre@@UEAAXXZ @ 0x1800395B0 (-Reset@CommandList@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::RenderDevice::GetShaderModelActive(__int64 a1)
{
  return *(unsigned int *)(a1 + 3880);
}
