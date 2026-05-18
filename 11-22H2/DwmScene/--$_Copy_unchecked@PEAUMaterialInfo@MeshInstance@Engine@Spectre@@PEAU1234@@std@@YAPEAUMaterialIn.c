/*
 * XREFs of ??$_Copy_unchecked@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@@std@@YAPEAUMaterialInfo@MeshInstance@Engine@Spectre@@PEAU1234@00@Z @ 0x18004A674
 * Callers:
 *     ??$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@AEAAXPEAUMaterialInfo@MeshInstance@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18004A5A0 (--$_Assign_range@PEAUMaterialInfo@MeshInstance@Engine@Spectre@@@-$vector@UMaterialInfo@MeshInsta.c)
 * Callees:
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Copy_unchecked<Spectre::Engine::MeshInstance::MaterialInfo *,Spectre::Engine::MeshInstance::MaterialInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 20;
    do
    {
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)a3, (_QWORD *)(v5 - 20));
      *(_BYTE *)(a3 + 16) = *(_BYTE *)(v5 - 4);
      *(_DWORD *)(a3 + 20) = *(_DWORD *)v5;
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a3 + 24), (_QWORD *)(v5 + 4));
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a3 + 40), (_QWORD *)(v5 + 20));
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a3 + 56), (_QWORD *)(v5 + 36));
      std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a3 + 72), (_QWORD *)(v5 + 52));
      v5 += 88LL;
      a3 += 88LL;
    }
    while ( v5 - 20 != a2 );
  }
  return a3;
}
