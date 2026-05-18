/*
 * XREFs of ?Release@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x1800504D0
 * Callers:
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@std@@PEAX@1@@Z @ 0x18001C9AC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UShaderInfo@ShaderManager@Engine@Spectre@@@std@@PEAX@1@@Z @ 0x18004D874 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D874.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@2@@std@@PEAX@1@@Z @ 0x18004D8E8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@DU-$char_trai_ea_18004D8E8.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderFamily@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180050B80 (-clear@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$.c)
 *     ?shrink_to_fit@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180050CB4 (-shrink_to_fit@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ShaderManager::Release(Spectre::Engine::ShaderManager *this)
{
  char *v1; // r15
  __int64 v3; // rcx
  char *v4; // r14
  __int64 *j; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  _QWORD *k; // rbx
  _BYTE *v14; // rax
  _QWORD *m; // rbx
  _BYTE *v16; // rax
  std::_Ref_count_base *v17[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v1 = (char *)this + 18560;
  v3 = **((_QWORD **)this + 2320);
  v18 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    Spectre::Engine::ShaderFamily::ReleaseResources(*(Spectre::Engine::ShaderFamily **)(v3 + 64));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v18);
    v3 = v18;
  }
  v4 = (char *)this + 18592;
  j = (__int64 *)**((_QWORD **)this + 2324);
  while ( !*((_BYTE *)j + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)j[8] + 8LL))(j[8]);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v9 = *((_QWORD *)this + 2322);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,Spectre::Engine::ShaderManager::ShaderInfo>,void *>>>(
    (__int64)this + 18576,
    (__int64)this + 18576,
    *(char **)(v9 + 8));
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *((_QWORD *)this + 2323) = 0LL;
  std::_Tree<std::_Tmap_traits<std::string,std::shared_ptr<Spectre::Engine::ShaderFamily>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<Spectre::Engine::ShaderFamily>>>,0>>::clear(v1);
  v10 = *(_QWORD **)v4;
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,std::shared_ptr<Spectre::Engine::IShaderExtension>>,void *>>>(
    (__int64)this + 18592,
    (__int64)this + 18592,
    *(char **)(*(_QWORD *)v4 + 8LL));
  v10[1] = v10;
  *v10 = v10;
  v10[2] = v10;
  *((_QWORD *)this + 2325) = 0LL;
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>(
    (__int64)this + 16,
    (__int64)this + 16,
    v11[1]);
  v11[1] = v11;
  *v11 = v11;
  v11[2] = v11;
  *((_QWORD *)this + 3) = 0LL;
  v12 = (_QWORD *)*((_QWORD *)this + 261);
  std::_Tree_val<std::_Tree_simple_types<std::pair<std::string const,double>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<std::string const,double>,void *>>>(
    (__int64)this + 2088,
    (__int64)this + 2088,
    v12[1]);
  v12[1] = v12;
  *v12 = v12;
  v12[2] = v12;
  *(_OWORD *)v17 = 0LL;
  *((_QWORD *)this + 262) = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 2331, (__int64 *)v17);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  *(_OWORD *)v17 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 2329, (__int64 *)v17);
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  for ( k = (_QWORD *)((char *)this + 32); k != (_QWORD *)((char *)this + 2080); k += 4 )
  {
    v14 = k;
    if ( k[3] >= 0x10uLL )
      v14 = (_BYTE *)*k;
    k[2] = 0LL;
    *v14 = 0;
    std::string::shrink_to_fit(k);
  }
  for ( m = (_QWORD *)((char *)this + 2104); m != (_QWORD *)((char *)this + 18488); m += 4 )
  {
    v16 = m;
    if ( m[3] >= 0x10uLL )
      v16 = (_BYTE *)*m;
    m[2] = 0LL;
    *v16 = 0;
    std::string::shrink_to_fit(m);
  }
}
