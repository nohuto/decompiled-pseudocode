/*
 * XREFs of ?lock@?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAXXZ @ 0x1800279C0
 * Callers:
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 * Callees:
 *     ?_Throw_system_error@std@@YAXW4errc@1@@Z @ 0x180027700 (-_Throw_system_error@std@@YAXW4errc@1@@Z.c)
 *     ?lock@Mutex@Engine@Spectre@@QEAAXXZ @ 0x18002A4F0 (-lock@Mutex@Engine@Spectre@@QEAAXXZ.c)
 */

void __fastcall std::unique_lock<Spectre::Engine::Mutex>::lock(__int64 a1)
{
  Spectre::Engine::Mutex *v2; // rcx

  v2 = *(Spectre::Engine::Mutex **)a1;
  if ( !v2 )
    std::_Throw_system_error(1u);
  if ( *(_BYTE *)(a1 + 8) )
    std::_Throw_system_error(0x24u);
  Spectre::Engine::Mutex::lock(v2);
  *(_BYTE *)(a1 + 8) = 1;
}
