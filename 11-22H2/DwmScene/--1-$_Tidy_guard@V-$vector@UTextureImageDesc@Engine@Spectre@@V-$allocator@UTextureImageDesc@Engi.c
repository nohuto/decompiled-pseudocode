/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@@std@@QEAA@XZ @ 0x180055694
 * Callers:
 *     ??$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@?$vector@UTextureImageDesc@Engine@Spectre@@V?$allocator@UTextureImageDesc@Engine@Spectre@@@std@@@std@@AEAAX_K$$QEAPEBUTextureImageDesc@Engine@Spectre@@1@Z @ 0x1800CC498 (--$_Construct_n@PEBUTextureImageDesc@Engine@Spectre@@PEBU123@@-$vector@UTextureImageDesc@Engine@.c)
 * Callees:
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Spectre::Engine::TextureImageDesc>>::~_Tidy_guard<std::vector<Spectre::Engine::TextureImageDesc>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy(v1);
}
