/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@_KAEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004AA3C
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A740 (--$_Resize@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocat.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 */

Spectre::Engine::MeshInstance::MaterialInfo *__fastcall std::_Uninitialized_value_construct_n<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(
        Spectre::Engine::MeshInstance::MaterialInfo *this,
        __int64 a2)
{
  __int64 v2; // rsi
  Spectre::Engine::MeshInstance::MaterialInfo *v3; // rdi
  _QWORD *v4; // rbx

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    v4 = (_QWORD *)((char *)this + 48);
    do
    {
      memset_0((char *)v3 + 8, 0, 0x50uLL);
      *(_QWORD *)v3 = 0LL;
      v3 = (Spectre::Engine::MeshInstance::MaterialInfo *)((char *)v3 + 88);
      *(v4 - 5) = 0LL;
      *((_DWORD *)v4 - 7) = 0;
      *((_BYTE *)v4 - 32) = 1;
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4 += 11;
      --v2;
    }
    while ( v2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(v3, v3);
  return v3;
}
