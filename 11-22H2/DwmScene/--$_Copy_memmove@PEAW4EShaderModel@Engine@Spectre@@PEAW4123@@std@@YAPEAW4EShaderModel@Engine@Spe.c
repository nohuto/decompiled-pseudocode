/*
 * XREFs of ??$_Copy_memmove@PEAW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEAW4123@00@Z @ 0x180016DC4
 * Callers:
 *     ??$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAXPEAW4EShaderModel@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180016C68 (--$_Assign_range@PEAW4EShaderModel@Engine@Spectre@@@-$vector@W4EShaderModel@Engine@Spectre@@V-$a.c)
 *     ??$_Uninitialized_copy@PEAW4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@YAPEAW4EShaderModel@Engine@Spectre@@QEAW4123@0PEAW4123@AEAV?$allocator@W4EShaderModel@Engine@Spectre@@@0@@Z @ 0x180017094 (--$_Uninitialized_copy@PEAW4EShaderModel@Engine@Spectre@@V-$allocator@W4EShaderModel@Engine@Spec.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<enum Spectre::Engine::EShaderModel *,enum Spectre::Engine::EShaderModel *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
