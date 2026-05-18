/*
 * XREFs of _Spectre::catch$18::Engine::Create_Spectre::Engine::ViewerEngine_Spectre::Engine::D3D11::RenderDeviceD3D11__::_1_::catch$18 @ 0x1800E435D
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetPackageVersion@Engine@1Spectre@@SAPEBDXZ @ 0x1800346EC (-GetPackageVersion@Engine@1Spectre@@SAPEBDXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn Spectre::catch_18::Engine::Create_Spectre::Engine::ViewerEngine_Spectre::Engine::D3D11::RenderDeviceD3D11__::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, _QWORD, __int64, const char *); // rbx
  const char *PackageVersion; // rax
  __int64 v7; // r8

  if ( std::operator!=<Spectre::Engine::Scene>(*(_QWORD **)(a2 + 72)) )
  {
    v4 = *v3;
    v5 = *(void (__fastcall **)(__int64, _QWORD, __int64, const char *))(*(_QWORD *)*v3 + 24LL);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 176) + 8LL))(*(_QWORD *)(a2 + 176));
    PackageVersion = Spectre::Engine::Engine::GetPackageVersion();
    v5(v4, 0LL, v7, PackageVersion);
  }
  throw;
}
