/*
 * XREFs of ??$_Copy_memmove@PEBTValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEBT1234@0PEAT1234@@Z @ 0x1800840E8
 * Callers:
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<Spectre::Engine::ShaderPropertyLayout::ValueElement const *,Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
