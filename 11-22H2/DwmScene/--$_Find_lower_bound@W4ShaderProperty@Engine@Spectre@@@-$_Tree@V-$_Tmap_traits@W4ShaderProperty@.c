/*
 * XREFs of ??$_Find_lower_bound@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043610
 * Callers:
 *     ??$_Find@W4ShaderProperty@Engine@Spectre@@@?$_Tree@V?$_Tmap_traits@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043584 (--$_Find@W4ShaderProperty@Engine@Spectre@@@-$_Tree@V-$_Tmap_traits@W4ShaderProperty@Engine@Spect.c)
 *     ??$_Try_emplace@AEBW4ShaderProperty@Engine@Spectre@@$$V@?$map@W4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@U?$less@W4ShaderProperty@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4ShaderProperty@Engine@Spectre@@W4ETextureState@Material@23@@std@@PEAX@std@@_N@1@AEBW4ShaderProperty@Engine@Spectre@@@Z @ 0x180043664 (--$_Try_emplace@AEBW4ShaderProperty@Engine@Spectre@@$$V@-$map@W4ShaderProperty@Engine@Spectre@@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::ShaderProperty,enum Spectre::Engine::Material::ETextureState,std::less<enum Spectre::Engine::ShaderProperty>,std::allocator<std::pair<enum Spectre::Engine::ShaderProperty const,enum Spectre::Engine::Material::ETextureState>>,0>>::_Find_lower_bound<enum Spectre::Engine::ShaderProperty>(
        __int64 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int16 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( *((_WORD *)v4 + 14) >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
