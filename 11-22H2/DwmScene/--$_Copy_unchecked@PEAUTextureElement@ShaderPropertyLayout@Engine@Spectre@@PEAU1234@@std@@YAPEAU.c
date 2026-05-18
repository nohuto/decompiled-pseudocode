/*
 * XREFs of ??$_Copy_unchecked@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@PEAU1234@@std@@YAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@PEAU1234@00@Z @ 0x180084120
 * Callers:
 *     ??$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083FF8 (--$_Assign_range@PEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextureEleme.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<Spectre::Engine::ShaderPropertyLayout::TextureElement *,Spectre::Engine::ShaderPropertyLayout::TextureElement *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 40LL )
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)a3, (_QWORD *)i);
    std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a3 + 16), (_QWORD *)(i + 16));
    v6 = *(_DWORD *)(i + 32);
    i += 40LL;
    *(_DWORD *)(a3 + 32) = v6;
  }
  return a3;
}
