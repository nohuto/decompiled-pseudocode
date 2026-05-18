/*
 * XREFs of ??0?$vector@MV?$allocator@M@std@@@std@@QEAA@AEBV01@@Z @ 0x180081D80
 * Callers:
 *     ?SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18008342C (-SetPropertyDefaultFromDefinition@ShaderPropertyLayout@Engine@Spectre@@AEAAXW4ShaderProperty@23@.c)
 *     ??$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@std@@@std@@YAPEAUShaderPropertyDefinition@Engine@Spectre@@QEBU123@0PEAU123@AEAV?$allocator@UShaderPropertyDefinition@Engine@Spectre@@@0@@Z @ 0x1800985C0 (--$_Uninitialized_copy@PEBUShaderPropertyDefinition@Engine@Spectre@@V-$allocator@UShaderProperty.c)
 * Callees:
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ?_Buy_nonzero@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180047158 (-_Buy_nonzero@-$vector@MV-$allocator@M@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Uninitialized_copy@PEAMV?$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV?$allocator@M@0@@Z @ 0x180081AB0 (--$_Uninitialized_copy@PEAMV-$allocator@M@std@@@std@@YAPEAMQEAM0PEAMAEAV-$allocator@M@0@@Z.c)
 */

char **__fastcall std::vector<float>::vector<float>(char **a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  char *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2;
  if ( v4 )
  {
    std::vector<float>::_Buy_nonzero(a1, v4);
    v5 = std::_Uninitialized_copy<float *>(*(void **)a2, *(_QWORD *)(a2 + 8), *a1);
    v7 = 0LL;
    a1[1] = v5;
    std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(&v7);
  }
  return a1;
}
