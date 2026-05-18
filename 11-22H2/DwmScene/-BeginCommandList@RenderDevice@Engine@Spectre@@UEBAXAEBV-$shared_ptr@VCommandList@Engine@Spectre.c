/*
 * XREFs of ?BeginCommandList@RenderDevice@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@Z @ 0x180025F20
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetShaderModelActive@RenderDevice@Engine@Spectre@@QEBA?AW4EShaderModel@23@XZ @ 0x18002684C (-GetShaderModelActive@RenderDevice@Engine@Spectre@@QEBA-AW4EShaderModel@23@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::RenderDevice::BeginCommandList(__int64 a1, _QWORD *a2)
{
  int ShaderModelActive; // eax
  _QWORD *v5; // rdx

  LOBYTE(ShaderModelActive) = std::operator!=<Spectre::Engine::Scene>(a2);
  if ( (_BYTE)ShaderModelActive )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 48LL))(*v5);
    ShaderModelActive = Spectre::Engine::RenderDevice::GetShaderModelActive(a1);
    *(_DWORD *)(*a2 + 104LL) = ShaderModelActive;
  }
  return ShaderModelActive;
}
