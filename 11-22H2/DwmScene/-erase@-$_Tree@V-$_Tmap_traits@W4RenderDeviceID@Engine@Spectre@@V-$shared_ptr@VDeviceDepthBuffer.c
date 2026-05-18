/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180028E68
 * Callers:
 *     ?DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180028890 (-DetachDevice@FrameBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180048750 (-DetachDevice@Mesh@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18006FAC0 (-DetachDevice@DepthBuffer@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180084D40 (-DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180088580 (-DetachDevice@RenderState@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@Shader@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008AEE0 (-DetachDevice@Shader@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x18008C2E0 (-DetachDevice@VertexLayout@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBEV?$shared_ptr@VShader@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x180027AF0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEBEV-$shared_ptr@VShader@Engine@Spectre@@@std.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180027BA4 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$shared_p.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAPEAU?$_Tree_node@_KPEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180028BD0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAPEAU-$_Tree_node@_KPEAX@2@V-$_Tree.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>,std::less<enum Spectre::Engine::RenderDeviceID>,std::allocator<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceDepthBuffer>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // r9
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_DWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_DWORD *)(v6 + 32) )
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
    v8 = *(_QWORD *)(v2 + 8);
  else
    v8 = *(_QWORD *)v5;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v8 + 32) )
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
  v15 = v4;
  while ( v9 != v5 )
  {
    ++v10;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v15);
    v9 = v15;
  }
  v15 = v4;
  if ( v4 == *(_QWORD *)v2 && *(_BYTE *)(v5 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned char const * const,std::shared_ptr<Spectre::Engine::Shader>>,void *>>>(
      (__int64)a1,
      (__int64)a1,
      *(__int64 **)(v2 + 8));
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
    *(_QWORD *)(v2 + 16) = v2;
    a1[1] = 0LL;
  }
  else
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v15);
      v13 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Extract(a1, v12);
      std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceShader>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceShader>>,void *>>>(
        v14,
        v13);
      v4 = v15;
    }
  }
  return v10;
}
