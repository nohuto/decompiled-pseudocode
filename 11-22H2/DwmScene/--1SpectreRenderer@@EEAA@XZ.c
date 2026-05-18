/*
 * XREFs of ??1SpectreRenderer@@EEAA@XZ @ 0x180017B24
 * Callers:
 *     ??_GSpectreRenderer@@EEAAPEAXI@Z @ 0x180010300 (--_GSpectreRenderer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_ptr@VEngine@1Spectre@@U?$default_delete@VEngine@1Spectre@@@std@@@std@@QEAA@XZ @ 0x180010260 (--1-$unique_ptr@VEngine@1Spectre@@U-$default_delete@VEngine@1Spectre@@@std@@@std@@QEAA@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 */

void __fastcall SpectreRenderer::~SpectreRenderer(SpectreRenderer *this)
{
  __int64 *v2; // rdi
  SpectreRenderer *v3; // rax
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx

  *(_QWORD *)this = &SpectreRenderer::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpectreRenderer>'};
  v2 = (__int64 *)((char *)this + 136);
  *((_QWORD *)this + 2) = &SpectreRenderer::`vftable'{for `ISpectreRenderContext'};
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  *((_QWORD *)this + 15) = *((_QWORD *)this + 14);
  v3 = SpectreRenderer::s_pInstance;
  if ( this == SpectreRenderer::s_pInstance )
    v3 = 0LL;
  SpectreRenderer::s_pInstance = v3;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)this + 112);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  std::unique_ptr<Spectre::Engine::Engine>::~unique_ptr<Spectre::Engine::Engine>((_QWORD *)this + 7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
}
