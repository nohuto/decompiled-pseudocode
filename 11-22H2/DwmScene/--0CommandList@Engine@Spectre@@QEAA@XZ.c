/*
 * XREFs of ??0CommandList@Engine@Spectre@@QEAA@XZ @ 0x180038FEC
 * Callers:
 *     ??0CommandListD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800CFA3C (--0CommandListD3D11@D3D11@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager@12@@Z @ 0x180029120 (--0DeviceResource@Engine@Spectre@@QEAA@W4EType@RendererResource@12@W4Category@PerformanceManager.c)
 */

Spectre::Engine::CommandList *__fastcall Spectre::Engine::CommandList::CommandList(Spectre::Engine::CommandList *this)
{
  Spectre::Engine::DeviceResource::DeviceResource((__int64)this);
  *(_QWORD *)this = &Spectre::Engine::CommandList::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return this;
}
