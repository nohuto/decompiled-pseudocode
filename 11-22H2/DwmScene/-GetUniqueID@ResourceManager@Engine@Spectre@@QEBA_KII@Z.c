/*
 * XREFs of ?GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z @ 0x1800702C8
 * Callers:
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 *     ?OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23@PEAVRenderDevice@23@I@Z @ 0x18009ACA0 (-OnMaterialLoad@BaseShaderExtension@Engine@Spectre@@UEAAXPEAVMaterial@23@UBaseMaterialSegment@23.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FBAC (--$_Try_emplace@AEB_K$$V@-$map@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@A.c)
 *     ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x180070118 (--E-$_Atomic_integral@I$03@std@@QEAAIXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x180070684 (-find@-$_Tree@V-$_Tmap_traits@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@$0A@@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::ResourceManager::GetUniqueID(
        Spectre::Engine::ResourceManager *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // r14
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  _BYTE v10[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (Spectre::Engine::ResourceManager *)((char *)this + 24);
  std::_Mutex_base::lock((Spectre::Engine::ResourceManager *)((char *)this + 24));
  v7 = 0LL;
  if ( a2 )
  {
    v8 = v3 << 32;
    v11 = v8 | a2;
    std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned __int64,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::find(
      (char *)this + 184,
      &v12,
      &v11);
    if ( v12 == *((_QWORD *)this + 23) )
    {
      v7 = v8 | (unsigned int)std::_Atomic_integral<unsigned int,4>::operator++((__int64)this + 216);
      *(_QWORD *)(*(_QWORD *)std::map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
                               (__int64 *)this + 23,
                               (__int64)v10,
                               (unsigned __int64 *)&v11)
                + 40LL) = v7;
    }
    else
    {
      v7 = *(_QWORD *)(v12 + 40);
    }
  }
  _Mtx_unlock(v6);
  return v7;
}
