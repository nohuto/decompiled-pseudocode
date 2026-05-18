/*
 * XREFs of ?IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ @ 0x180026CE4
 * Callers:
 *     ?OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ @ 0x180026E80 (-OnShutdown@RenderDevice@Engine@Spectre@@MEAAXXZ.c)
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ??1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CFA9C (--1CommandListD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Spectre::Engine::RenderDevice::IsActive(Spectre::Engine::RenderDevice *this)
{
  return *((_BYTE *)this + 3976);
}
