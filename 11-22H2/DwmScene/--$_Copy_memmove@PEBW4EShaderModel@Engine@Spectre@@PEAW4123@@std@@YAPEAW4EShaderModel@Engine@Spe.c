/*
 * XREFs of ??$_Copy_memmove@PEBW4EShaderModel@Engine@Spectre@@PEAW4123@@std@@YAPEAW4EShaderModel@Engine@Spectre@@PEBW4123@0PEAW4123@@Z @ 0x18004D534
 * Callers:
 *     ??$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@?$vector@W4EShaderModel@Engine@Spectre@@V?$allocator@W4EShaderModel@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBW4EShaderModel@Engine@Spectre@@1@Z @ 0x18004D4B8 (--$_Construct_n@PEBW4EShaderModel@Engine@Spectre@@PEBW4123@@-$vector@W4EShaderModel@Engine@Spect.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<enum Spectre::Engine::EShaderModel const *,enum Spectre::Engine::EShaderModel *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
