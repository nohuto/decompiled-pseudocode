/*
 * XREFs of ?ExtendLayoutWithProperty@ShaderPropertyBlock@Engine@Spectre@@AEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180084D94
 * Callers:
 *     ?AddGlobalProperty@ShaderManager@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@@Z @ 0x18004F194 (-AddGlobalProperty@ShaderManager@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDef.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@UTextureElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@QEAAPEAUTextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAU2345@AEBU2345@@Z @ 0x180081744 (--$_Emplace_reallocate@AEBUTextureElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@UTextur.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800819A4 (--$_Resize@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V-.c)
 *     ??0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z @ 0x180081EB8 (--0TextureElement@ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBU0123@@Z.c)
 *     ?AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA?AW4ShaderProperty@23@AEBUShaderPropertyDefinition@23@W4EShaderPropertyLinkage@23@@Z @ 0x180082518 (-AddProperty@ShaderPropertyLayout@Engine@Spectre@@QEAA-AW4ShaderProperty@23@AEBUShaderPropertyDe.c)
 *     ?EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ @ 0x180082AB0 (-EndDeclaration@ShaderPropertyLayout@Engine@Spectre@@QEAAXXZ.c)
 *     ?ExtendDeclaration@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ @ 0x180082BC4 (-ExtendDeclaration@ShaderPropertyLayout@Engine@Spectre@@AEAAXXZ.c)
 *     ?GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@23@@Z @ 0x180082F6C (-GetPropertyInfo@ShaderPropertyLayout@Engine@Spectre@@AEBAAEBUPropertyInfo@123@W4ShaderProperty@.c)
 *     ?GetTypeSizeInElements@ShaderPropertyLayout@Engine@Spectre@@SAIW4ShaderPropertyType@23@@Z @ 0x180083060 (-GetTypeSizeInElements@ShaderPropertyLayout@Engine@Spectre@@SAIW4ShaderPropertyType@23@@Z.c)
 *     ?GetValueArraySize@ShaderPropertyLayout@Engine@Spectre@@AEAAIXZ @ 0x1800830B4 (-GetValueArraySize@ShaderPropertyLayout@Engine@Spectre@@AEAAIXZ.c)
 *     ??$_Copy_memmove@PEBTValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEBT1234@0PEAT1234@@Z @ 0x1800840E8 (--$_Copy_memmove@PEBTValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValu.c)
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::ExtendLayoutWithProperty(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // r14
  Spectre::Engine::ShaderPropertyLayout *v5; // rcx
  __int64 v6; // r8
  __int64 PropertyInfo; // rax
  Spectre::Engine::ShaderPropertyLayout *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *v11; // r8
  unsigned int ValueArraySize; // eax
  unsigned int TypeSizeInElements; // eax
  __int64 v14; // r8
  void *v15; // r9
  Spectre::Utils::SpectreException *v18; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v19[56]; // [rsp+30h] [rbp-58h] BYREF

  Spectre::Engine::ShaderPropertyLayout::ExtendDeclaration(*(Spectre::Engine::ShaderPropertyLayout **)(a1 + 16));
  try
  {
    v4 = Spectre::Engine::ShaderPropertyLayout::AddProperty(*(_QWORD *)(a1 + 16), a2, 1);
    v5 = *(Spectre::Engine::ShaderPropertyLayout **)(a1 + 16);
  }
  catch ( Spectre::Utils::SpectreException *v18 )
  {
    Spectre::Engine::ShaderPropertyLayout::EndDeclaration(*(Spectre::Engine::ShaderPropertyLayout **)(a1 + 16));
    Spectre::Utils::SpectreException::SpectreException((Spectre::Utils::SpectreException *)v19, v18);
    throw (Spectre::Utils::SpectreException *)v19;
  }
  Spectre::Engine::ShaderPropertyLayout::EndDeclaration(v5);
  v6 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(v6 + 1242);
  PropertyInfo = Spectre::Engine::ShaderPropertyLayout::GetPropertyInfo(v6, v4);
  v10 = PropertyInfo;
  if ( *(_DWORD *)(PropertyInfo + 36) == 8 )
  {
    v11 = (const struct Spectre::Engine::ShaderPropertyLayout::TextureElement *)(*(_QWORD *)(v9 + 104)
                                                                               + 40LL
                                                                               * *(unsigned int *)(PropertyInfo + 40));
    if ( *(_QWORD *)(a1 + 64) == *(_QWORD *)(a1 + 72) )
    {
      std::vector<Spectre::Engine::ShaderPropertyLayout::TextureElement>::_Emplace_reallocate<Spectre::Engine::ShaderPropertyLayout::TextureElement const &>(
        (__int64 *)(a1 + 56),
        *(_QWORD *)(a1 + 64),
        v11);
    }
    else
    {
      Spectre::Engine::ShaderPropertyLayout::TextureElement::TextureElement(
        *(Spectre::Engine::ShaderPropertyLayout::TextureElement **)(a1 + 64),
        v11);
      *(_QWORD *)(a1 + 64) += 40LL;
    }
  }
  else
  {
    ValueArraySize = Spectre::Engine::ShaderPropertyLayout::GetValueArraySize(v8);
    std::vector<Spectre::Engine::ShaderPropertyLayout::ValueElement>::_Resize<std::_Value_init_tag>(
      (__int64 *)(a1 + 32),
      ValueArraySize);
    TypeSizeInElements = Spectre::Engine::ShaderPropertyLayout::GetTypeSizeInElements(*(_DWORD *)(v10 + 36));
    std::_Copy_memmove<Spectre::Engine::ShaderPropertyLayout::ValueElement const *,Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
      v15,
      (__int64)v15 + 4 * TypeSizeInElements,
      (void *)(*(_QWORD *)(a1 + 32) + 4 * v14));
    ++*(_DWORD *)(a1 + 80);
  }
  return v4;
}
