/*
 * XREFs of ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033170
 * Callers:
 *     ??$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@3@@Z @ 0x180024A24 (--$CreateResource@VTexture@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_180024A24.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?SetEngine@SharedResource@Engine@Spectre@@AEAAXPEAV223@@Z @ 0x180029724 (-SetEngine@SharedResource@Engine@Spectre@@AEAAXPEAV223@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Engine::CreateResourceInternal(
        struct Spectre::Engine::Engine *a1,
        Spectre::Engine::SharedResource *this,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  std::_Ref_count_base *v9; // rcx

  Spectre::Engine::SharedResource::SetEngine(this, a1);
  if ( Spectre::Engine::RendererResource::GetOption(v6, 1) )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 16LL))(v7, v8);
    if ( !*((_DWORD *)a1 + 138) )
      Spectre::Engine::RendererResource::SetOption((__int64)this, 8, 1);
  }
  v9 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
