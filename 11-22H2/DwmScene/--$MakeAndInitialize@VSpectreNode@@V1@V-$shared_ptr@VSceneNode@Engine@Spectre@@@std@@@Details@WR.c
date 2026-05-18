/*
 * XREFs of ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVSpectreNode@@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BA00
 * Callers:
 *     ??$MakeAndInitialize@VSpectreNode@@V1@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreNode@@@WRL@Microsoft@@@012@$$QEAV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001BAD0 (--$MakeAndInitialize@VSpectreNode@@V1@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std_ea_18001BAD0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180010214 (--1-$MakeAllocator@VSpectreTexture@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0SpectreNode@@QEAA@XZ @ 0x180014AF4 (--0SpectreNode@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VSpectreNode@@@WRL@Microsoft@@QEAAXPEAVSpectreNode@@@Z @ 0x180014DB0 (-Attach@-$ComPtr@VSpectreNode@@@WRL@Microsoft@@QEAAXPEAVSpectreNode@@@Z.c)
 *     ?RuntimeClassInitialize@SpectreNode@@QEAAJAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x18001506C (-RuntimeClassInitialize@SpectreNode@@QEAAJAEBV-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18001C138 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpectreNode,SpectreNode,std::shared_ptr<Spectre::Engine::SceneNode>>(
        __int64 *a1,
        _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  SpectreNode *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = SpectreNode::SpectreNode((SpectreNode *)v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<SpectreNode>::Attach(&v10, (__int64)v6);
    v11 = 0LL;
    v7 = a2;
    v8 = v10;
    v5 = SpectreNode::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<SpectreTexture>::~MakeAllocator<SpectreTexture>(&v11);
  return (unsigned int)v5;
}
