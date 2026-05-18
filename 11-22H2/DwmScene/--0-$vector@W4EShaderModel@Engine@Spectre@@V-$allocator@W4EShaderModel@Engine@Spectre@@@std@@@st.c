/*
 * XREFs of ??0?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800176E8
 * Callers:
 *     ??0DeviceDescription@Engine@Spectre@@QEAA@AEBU012@@Z @ 0x180017754 (--0DeviceDescription@Engine@Spectre@@QEAA@AEBU012@@Z.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEAW4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@YAPEAW4EShaderModel@Engine@Spectre@@QEAW4123@0PEAW4123@AEAV?$allocator@W4EShaderModel@Engine@Spectre@@@0@@Z @ 0x180017094 (--$_Uninitialized_copy@PEAW4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spec.c)
 *     ??1?$_Tidy_guard@V?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180017994 (--1-$_Tidy_guard@V-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spe.c)
 *     ?_Buy_nonzero@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18001B514 (-_Buy_nonzero@-$vector@W4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spectre.c)
 */

__int64 __fastcall std::vector<enum Spectre::Engine::EShaderModel>::vector<enum Spectre::Engine::EShaderModel>(
        __int64 a1,
        __int64 a2)
{
  char *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2 )
  {
    std::vector<enum Spectre::Engine::EShaderModel>::_Buy_nonzero();
    v4 = std::_Uninitialized_copy<enum Spectre::Engine::EShaderModel *>(*(void **)a2, *(_QWORD *)(a2 + 8), *(char **)a1);
    v6 = 0LL;
    *(_QWORD *)(a1 + 8) = v4;
    std::_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>::~_Tidy_guard<std::vector<enum Spectre::Engine::EShaderModel>>(&v6);
  }
  return a1;
}
