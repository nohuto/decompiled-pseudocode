/*
 * XREFs of ??$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBW4EShaderModel@Engine@Spectre@@1@Z @ 0x18004D4B8
 * Callers:
 *     ??0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z @ 0x18004E6B8 (--0ShaderManager@Engine@Spectre@@QEAA@PEAV112@@Z.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ?_Buy_nonzero@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B514 (-_Buy_nonzero@-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre.c)
 *     ??$_Copy_memmove@PEBW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEBW4123@0PEAW4123@@Z @ 0x18004D534 (--$_Copy_memmove@PEBW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spe.c)
 */

__int64 __fastcall std::vector<enum Spectre::Engine::EShaderModel>::_Construct_n<enum Spectre::Engine::EShaderModel const *,enum Spectre::Engine::EShaderModel const *>(
        __int64 *a1,
        unsigned __int64 a2,
        void **a3,
        __int64 *a4)
{
  __int64 v7; // rsi
  void *v8; // rbx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    std::vector<enum Spectre::Engine::EShaderModel>::_Buy_nonzero((__int64)a1, a2);
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    std::_Copy_memmove<enum Spectre::Engine::EShaderModel const *,enum Spectre::Engine::EShaderModel *>(v8);
    v11 = 0LL;
    a1[1] = v7 + 4 * ((v9 - (__int64)v8) >> 2);
    return std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(&v11);
  }
  return result;
}
