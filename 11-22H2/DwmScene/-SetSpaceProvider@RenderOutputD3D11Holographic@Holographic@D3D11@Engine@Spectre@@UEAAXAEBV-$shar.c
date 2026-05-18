/*
 * XREFs of ?SetSpaceProvider@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VIHolographicSpaceProvider@Holographic@D3D11@Engine@Spectre@@@std@@@Z @ 0x1800D9840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@0@Z @ 0x180011DF0 (--$-9VScene@Engine@Spectre@@V012@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::SetSpaceProvider(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rsi
  char result; // al
  _BYTE *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx

  v3 = a1 + 67;
  result = std::operator!=<Spectre::Engine::Scene,Spectre::Engine::Scene>(a2, a1 + 67);
  if ( result )
  {
    v6 = a1 + 63;
    if ( std::operator!=<Spectre::Engine::Scene>(v3) )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 336LL))(a1);
      *v6 = 0;
    }
    v7 = a2[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v8 = a2[1];
    *v3 = *a2;
    v9 = (std::_Ref_count_base *)v3[1];
    v3[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    result = std::operator!=<Spectre::Engine::Scene>(v3);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 440LL))(a1);
      *v6 = 1;
    }
  }
  return result;
}
