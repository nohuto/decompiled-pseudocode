/*
 * XREFs of ??$make_shared@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@0@XZ @ 0x1800D8B64
 * Callers:
 *     ?GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAAEAV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@I@Z @ 0x1800D969C (-GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectr.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::D3D11::Holographic::HolographicDisplayState,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>::`vftable';
    memset_0((char *)v2 + 17, 0, 0x8FuLL);
    *((_WORD *)v3 + 8) = 0;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    *((_QWORD *)v3 + 6) = 0LL;
    `eh vector constructor iterator'(
      (char *)v3 + 64,
      48LL,
      2LL,
      (void (*)(void *))Spectre::Engine::D3D11::Holographic::HolographicDisplayEye::HolographicDisplayEye);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
