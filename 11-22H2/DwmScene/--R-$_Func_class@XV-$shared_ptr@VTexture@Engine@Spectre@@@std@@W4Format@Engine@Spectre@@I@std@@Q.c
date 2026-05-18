/*
 * XREFs of ??R?$_Func_class@XV?$shared_ptr@VTexture@Engine@Spectre@@@std@@W4Format@Engine@Spectre@@I@std@@QEBAXV?$shared_ptr@VTexture@Engine@Spectre@@@1@W4Format@Engine@Spectre@@I@Z @ 0x1800D5BE0
 * Callers:
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 *     ?CreateTexturesMultisampled@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D6A74 (-CreateTexturesMultisampled@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@12.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_class<void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v7 = a3;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v7, &v8);
  v6 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
