/*
 * XREFs of ??$_Construct_n@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAX_KAEBM@Z @ 0x180044BE0
 * Callers:
 *     ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@_KAEBMAEBV?$allocator@M@1@@Z @ 0x180044DA4 (--0-$vector@MV-$allocator@M@std@@@std@@QEAA@_KAEBMAEBV-$allocator@M@1@@Z.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ??$_Fill_zero_memset@PEAM@std@@YAXPEAM_K@Z @ 0x180044D18 (--$_Fill_zero_memset@PEAM@std@@YAXPEAM_K@Z.c)
 *     ??$_Is_all_bits_zero@M@std@@YA_NAEBM@Z @ 0x180044D30 (--$_Is_all_bits_zero@M@std@@YA_NAEBM@Z.c)
 *     ?_Buy_nonzero@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180047158 (-_Buy_nonzero@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::vector<float>::_Construct_n<float const &>(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  std::vector<float>::_Buy_nonzero(a1, 1LL);
  v5 = *a1;
  if ( (unsigned __int8)std::_Is_all_bits_zero<float>(a3) )
  {
    std::_Fill_zero_memset<float *>(v5, 1LL);
    v6 = 4LL;
  }
  else
  {
    *(_DWORD *)v5 = *a3;
    v6 = v5;
    v5 = 4LL;
  }
  v8 = 0LL;
  a1[1] = v5 + v6;
  return std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(&v8);
}
