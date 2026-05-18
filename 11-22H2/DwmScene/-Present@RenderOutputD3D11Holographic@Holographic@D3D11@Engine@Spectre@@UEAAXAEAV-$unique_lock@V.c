/*
 * XREFs of ?Present@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800D9800
 * Callers:
 *     <none>
 * Callees:
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::Present(__int64 a1)
{
  char result; // al
  _QWORD *v2; // rcx

  result = std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 536));
  if ( result )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 24LL))(*v2);
  return result;
}
