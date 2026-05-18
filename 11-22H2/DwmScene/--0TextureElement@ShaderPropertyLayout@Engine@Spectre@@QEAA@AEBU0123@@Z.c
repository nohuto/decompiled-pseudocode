/*
 * XREFs of ??0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x180081EB8
 * Callers:
 *     ??$_Emplace_reallocate@AEBUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081744 (--$_Emplace_reallocate@AEBUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextur.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8 (--$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextureEleme.c)
 *     ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94 (-ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA-AW4ShaderProperty@23@AEBUShad.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyLayout::TextureElement::TextureElement(
        Spectre::Engine::ShaderPropertyLayout::TextureElement *this,
        const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(this, a2);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(v3 + 16),
    (_QWORD *)(v2 + 16));
  result = v5;
  *(_DWORD *)(v5 + 32) = *(_DWORD *)(v4 + 32);
  return result;
}
