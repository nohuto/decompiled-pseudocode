/*
 * XREFs of ??$_Construct_n@PEBMPEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K$$QEAPEBM1@Z @ 0x180044C64
 * Callers:
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@V?$initializer_list@M@1@AEBV?$allocator@M@1@@Z @ 0x180044D4C (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@V-$initializer_list@M@1@AEBV-$allocator@M@1@@Z.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ??$_Copy_memmove@PEBMPEAM@std@@YAPEAMPEBM0PEAM@Z @ 0x180044CE0 (--$_Copy_memmove@PEBMPEAM@std@@YAPEAMPEBM0PEAM@Z.c)
 *     ?_Buy_nonzero@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180047158 (-_Buy_nonzero@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<float>::_Construct_n<float const *,float const *>(
        __int64 *a1,
        __int64 a2,
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
    std::vector<float>::_Buy_nonzero(a1, a2);
    v7 = *a1;
    v8 = *a3;
    v9 = *a4;
    std::_Copy_memmove<float const *,float *>(v8);
    v11 = 0LL;
    a1[1] = v7 + 4 * ((v9 - (__int64)v8) >> 2);
    return std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(&v11);
  }
  return result;
}
