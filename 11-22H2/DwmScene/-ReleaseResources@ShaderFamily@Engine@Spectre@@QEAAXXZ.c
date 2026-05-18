/*
 * XREFs of ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC
 * Callers:
 *     ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0 (-Release@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@@std@@PEAX@1@@Z @ 0x18003F354 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@VShaderPipeline@Engine@Spe.c)
 *     ?Release@Material@Engine@Spectre@@QEAAXXZ @ 0x180044568 (-Release@Material@Engine@Spectre@@QEAAXXZ.c)
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005F174 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18005F270 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$shared_ptr@VShaderPipeline@Engine@Spectre@@@std@.c)
 *     ?GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA?AV?$set@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@@std@@XZ @ 0x1800609DC (-GetMaterialInstances@ShaderFamily@Engine@Spectre@@QEBA-AV-$set@V-$weak_ptr@VMaterial@Engine@Spe.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ShaderFamily::ReleaseResources(Spectre::Engine::ShaderFamily *this)
{
  char *v2; // rbx
  char *v3; // rdi
  _QWORD *i; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v11; // rax
  std::_Ref_count_base *v12[2]; // [rsp+20h] [rbp-20h] BYREF
  void *v13[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+20h] BYREF

  v2 = (char *)this + 256;
  v3 = (char *)this + 416;
  while ( v2 != v3 )
  {
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v2, (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    v2 += 16;
  }
  for ( i = (_QWORD *)((char *)this + 96); i != (_QWORD *)((char *)this + 256); i += 2 )
  {
    *(_OWORD *)v12 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(i, (__int64 *)v12);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
  }
  v5 = (__int64 *)**((_QWORD **)this + 52);
  while ( !*((_BYTE *)v5 + 25) )
  {
    v6 = v5[7];
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<Spectre::Engine::ShaderPipeline>>,void *>>>(
      (__int64)(v5 + 7),
      (__int64)(v5 + 7),
      *(__int64 **)(v6 + 8));
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v6 + 16) = v6;
    v5[8] = 0LL;
    std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>::_Free_non_head<std::allocator<std::_List_node<std::shared_ptr<Spectre::Engine::ShaderPipeline>,void *>>>(
      v7,
      (_QWORD **)v5[5]);
    *(_QWORD *)v5[5] = v5[5];
    *(_QWORD *)(v5[5] + 8) = v5[5];
    v5[6] = 0LL;
    v8 = (__int64 **)v5[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( j = (__int64 *)v5[1]; !*((_BYTE *)j + 25) && v5 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v5 = j;
      v5 = j;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( k = *v8; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v5 = k;
    }
  }
  Spectre::Engine::ShaderFamily::GetMaterialInstances((__int64)this, (__int64 *)v13);
  v11 = *(_QWORD *)v13[0];
  v14 = *(_QWORD *)v13[0];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v11 + 32, v12);
    if ( std::operator!=<Spectre::Engine::Scene>(v12) )
      Spectre::Engine::Material::Release(v12[0]);
    if ( v12[1] )
      std::_Ref_count_base::_Decref(v12[1]);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v14);
    v11 = v14;
  }
  *(_OWORD *)v12 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 55, (__int64 *)v12);
  if ( v12[1] )
    std::_Ref_count_base::_Decref(v12[1]);
  std::_Tree_val<std::_Tree_simple_types<std::weak_ptr<Spectre::Engine::Material>>>::_Erase_head<std::allocator<std::_Tree_node<std::weak_ptr<Spectre::Engine::Material>,void *>>>(
    v13,
    (__int64)v13);
}
