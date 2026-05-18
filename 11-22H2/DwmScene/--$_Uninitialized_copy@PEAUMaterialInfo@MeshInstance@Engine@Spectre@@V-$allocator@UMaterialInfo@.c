/*
 * XREFs of ??$_Uninitialized_copy@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A888
 * Callers:
 *     ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0 (--$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@-$vector@UMaterialInfo@MeshInsta.c)
 * Callees:
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 */

Spectre::Engine::MeshInstance::MaterialInfo *__fastcall std::_Uninitialized_copy<Spectre::Engine::MeshInstance::MaterialInfo *>(
        __int64 a1,
        __int64 a2,
        Spectre::Engine::MeshInstance::MaterialInfo *a3)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r10

  if ( a1 != a2 )
  {
    v4 = a1 + 20;
    do
    {
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        a3,
        (_QWORD *)(v4 - 20));
      *(_BYTE *)(v6 + v5 - 4) = *(_BYTE *)(v5 - 4);
      *(_DWORD *)(v5 + v6) = *(_DWORD *)v5;
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        (_QWORD *)(v5 + v6 + 4),
        (_QWORD *)(v5 + 4));
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        (_QWORD *)(v8 + v7 + 20),
        (_QWORD *)(v8 + 20));
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        (_QWORD *)(v10 + v9 + 36),
        (_QWORD *)(v10 + 36));
      std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
        (_QWORD *)(v12 + v11 + 52),
        (_QWORD *)(v12 + 52));
      v4 = v13 + 88;
      a3 = (Spectre::Engine::MeshInstance::MaterialInfo *)((char *)a3 + 88);
    }
    while ( v4 - 20 != v14 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(a3, a3);
  return a3;
}
