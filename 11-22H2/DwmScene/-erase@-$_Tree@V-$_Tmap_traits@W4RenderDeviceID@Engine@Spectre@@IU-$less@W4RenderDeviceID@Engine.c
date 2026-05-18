/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@IU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180085D98
 * Callers:
 *     ?DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180084D40 (-DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX@1@@Z @ 0x180027B48 (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVIDeviceLostHandlerD3D11@D3D11@Engine@Spectre@@PEAX.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,unsigned int,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,unsigned int>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 28) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_DWORD *)(v6 + 28) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( *(_BYTE *)(v5 + 25) )
    v8 = v2[1];
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 28) )
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v5 = v8;
      v8 = *(_QWORD *)v8;
    }
  }
  v9 = v4;
  v10 = 0LL;
  v14 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v14);
    v9 = v14;
  }
  v14 = v4;
  if ( v4 == *v2 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *>>::_Erase_tree<std::allocator<std::_Tree_node<Spectre::Engine::D3D11::IDeviceLostHandlerD3D11 *,void *>>>(
      (__int64)a1,
      (__int64)a1,
      v2[1]);
    v2[1] = v2;
    *v2 = v2;
    v2[2] = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(a1, v12);
      std::_Deallocate<16,0>(v13, 0x28uLL);
      v4 = v14;
    }
  }
  return v10;
}
