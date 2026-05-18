/*
 * XREFs of ?AddShaderPipelines@UnlitShaderExtension@Engine@Spectre@@MEAAXPEAVShaderManager@23@@Z @ 0x18007FB90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@AEAAXXZ @ 0x1800105A8 (-_Tidy@-$vector@U-$pair@II@std@@V-$allocator@U-$pair@II@std@@@2@@std@@AEAAXXZ.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@V?$initializer_list@_K@1@AEBV?$allocator@_K@1@@Z @ 0x18007CA0C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@V-$initializer_list@_K@1@AEBV-$allocator@_K@1@@Z.c)
 *     ?AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x180098B0C (-AddBaseShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@AEBV-$vect.c)
 *     ?AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z @ 0x180099D68 (-AddDepthOnlyShaderPipelines@BaseShaderExtension@Engine@Spectre@@IEAAXPEAVShaderManager@23@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::UnlitShaderExtension::AddShaderPipelines(
        Spectre::Engine::UnlitShaderExtension *this,
        struct Spectre::Engine::ShaderManager *a2)
{
  __int64 v4; // r8
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF
  char v8; // [rsp+78h] [rbp+20h] BYREF

  Spectre::Engine::BaseShaderExtension::AddDepthOnlyShaderPipelines(this, a2, 0);
  v7 = 0LL;
  v5[0] = &v7;
  v5[1] = &v8;
  std::vector<unsigned __int64>::vector<unsigned __int64>(v6, (__int64)v5, v4);
  Spectre::Engine::BaseShaderExtension::AddBaseShaderPipelines(this, a2, v6);
  std::vector<std::pair<unsigned int,unsigned int>>::_Tidy((__int64)v6);
}
