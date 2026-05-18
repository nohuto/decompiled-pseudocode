/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x1800DA834
 * Callers:
 *     ??1?$vector@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x1800D8D44 (--1-$vector@V-$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@V.c)
 *     ?UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800D9920 (-UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_N.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::vector<std::shared_ptr<Spectre::Engine::D3D11::Holographic::IHolographicDisplayProvider>>::_Tidy(
        void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      v4 = (std::_Ref_count_base *)*((_QWORD *)v1 + 1);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v1 += 16;
    }
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
