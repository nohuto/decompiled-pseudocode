/*
 * XREFs of ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreRenderer@@AEBUDwmSceneRendererDesc@@@Z @ 0x18000FFF0
 * Callers:
 *     ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreRenderer@@@WRL@Microsoft@@@012@AEBUDwmSceneRendererDesc@@@Z @ 0x1800100B8 (--$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJV.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0SpectreRenderer@@QEAA@XZ @ 0x180010128 (--0SpectreRenderer@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010214 (--1-$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreRenderer,SpectreRenderer,DwmSceneRendererDesc const &>(
        SpectreRenderer **a1,
        const struct DwmSceneRendererDesc *a2)
{
  SpectreRenderer *v4; // rax
  int v5; // edi
  SpectreRenderer *v6; // rbx
  SpectreRenderer *v8; // [rsp+30h] [rbp+8h] BYREF
  SpectreRenderer *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (SpectreRenderer *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    v6 = SpectreRenderer::SpectreRenderer(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = SpectreRenderer::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(SpectreRenderer *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<SpectreTexture>::~MakeAllocator<SpectreTexture>(&v9);
  return (unsigned int)v5;
}
