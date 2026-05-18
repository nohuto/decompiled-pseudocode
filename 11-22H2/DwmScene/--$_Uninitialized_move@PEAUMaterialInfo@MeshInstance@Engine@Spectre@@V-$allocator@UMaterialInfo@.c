/*
 * XREFs of ??$_Uninitialized_move@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@0PEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A92C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18004A7C8 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@QEAU1234@AEAV?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@0@@Z @ 0x18004A708 (--$_Destroy_range@V-$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@YAXPEAUMat.c)
 */

Spectre::Engine::MeshInstance::MaterialInfo *__fastcall std::_Uninitialized_move<Spectre::Engine::MeshInstance::MaterialInfo *>(
        _QWORD *a1,
        _QWORD *a2,
        Spectre::Engine::MeshInstance::MaterialInfo *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 6;
    v5 = (char *)(a3 - (Spectre::Engine::MeshInstance::MaterialInfo *)a1);
    do
    {
      *(_QWORD *)a3 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = 0LL;
      *(_QWORD *)a3 = *(v4 - 6);
      a3 = (Spectre::Engine::MeshInstance::MaterialInfo *)((char *)a3 + 88);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 40) = *(v4 - 5);
      *(v4 - 6) = 0LL;
      *(v4 - 5) = 0LL;
      *((_BYTE *)v4 + (_QWORD)v5 - 32) = *((_BYTE *)v4 - 32);
      *(_DWORD *)&v5[(_QWORD)v4 - 28] = *((_DWORD *)v4 - 7);
      *(_QWORD *)&v5[(_QWORD)v4 - 24] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 - 24] = *(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(v4 - 3) = 0LL;
      *(v4 - 2) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 - 8] = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 - 8] = *(v4 - 1);
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 8] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 8] = v4[1];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 16) = v4[2];
      v4[1] = 0LL;
      v4[2] = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 24] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 32) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4 + 24] = v4[3];
      *(_QWORD *)((char *)v4 + (_QWORD)v5 + 32) = v4[4];
      v4[3] = 0LL;
      v4[4] = 0LL;
      v4 += 11;
    }
    while ( v4 - 6 != a2 );
  }
  std::_Destroy_range<std::allocator<Spectre::Engine::MeshInstance::MaterialInfo>>(a3, a3);
  return a3;
}
