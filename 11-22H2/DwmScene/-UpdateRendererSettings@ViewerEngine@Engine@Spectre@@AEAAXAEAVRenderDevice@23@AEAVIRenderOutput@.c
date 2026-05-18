/*
 * XREFs of ?UpdateRendererSettings@ViewerEngine@Engine@Spectre@@AEAAXAEAVRenderDevice@23@AEAVIRenderOutput@23@AEAVIConfigurationManager@Utils@3@@Z @ 0x18006DBD4
 * Callers:
 *     ?PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@5@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180067590 (-PreRenderScene@ViewerEngine@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ViewerEngine::UpdateRendererSettings(
        Spectre::Engine::ViewerEngine *this,
        struct Spectre::Engine::RenderDevice *a2,
        struct Spectre::Engine::IRenderOutput *a3,
        struct Spectre::Utils::IConfigurationManager *a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // esi

  v7 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)a4 + 72LL))(
         a4,
         &Spectre::Engine::ConfigurationProperties::kRenderer_Antialiasing,
         0LL);
  v8 = (*(__int64 (__fastcall **)(struct Spectre::Engine::RenderDevice *))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v7 != v8 )
    (*(void (__fastcall **)(struct Spectre::Engine::RenderDevice *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, v7);
  v9 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)a4 + 72LL))(
         a4,
         &Spectre::Engine::ConfigurationProperties::kRenderer_BufferFormat_Render,
         0LL);
  if ( v9 )
  {
    v10 = dword_180112DB0[v9];
    if ( v10 != (*(unsigned int (__fastcall **)(struct Spectre::Engine::IRenderOutput *, _QWORD))(*(_QWORD *)a3 + 264LL))(
                  a3,
                  0LL) )
    {
      (*(void (__fastcall **)(struct Spectre::Engine::IRenderOutput *, _QWORD, _QWORD))(*(_QWORD *)a3 + 256LL))(
        a3,
        0LL,
        v10);
      (*(void (__fastcall **)(struct Spectre::Engine::RenderDevice *, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, v8);
    }
  }
}
