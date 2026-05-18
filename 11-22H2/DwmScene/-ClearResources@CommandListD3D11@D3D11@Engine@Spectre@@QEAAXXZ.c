/*
 * XREFs of ?ClearResources@CommandListD3D11@D3D11@Engine@Spectre@@QEAAXXZ @ 0x1800CFE78
 * Callers:
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::D3D11::CommandListD3D11::ClearResources(
        Spectre::Engine::D3D11::CommandListD3D11 *this)
{
  __int64 v1; // rcx
  _BYTE v2[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *((_QWORD *)this + 18);
  memset(v2, 0, 64);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v1 + 264LL))(v1, 8LL, v2);
}
