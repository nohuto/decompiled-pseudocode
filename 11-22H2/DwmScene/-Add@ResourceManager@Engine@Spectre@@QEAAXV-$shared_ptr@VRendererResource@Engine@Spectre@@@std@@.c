/*
 * XREFs of ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160
 * Callers:
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@std@@VFindResourceWithID@ResourceManager@Engine@Spectre@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@0@V10@V10@VFindResourceWithID@ResourceManager@Engine@Spectre@@@Z @ 0x18006FF90 (--$find_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VResourceData@Engine@Spectre@@@st.c)
 *     ??0FindResourceWithID@ResourceManager@Engine@Spectre@@QEAA@_K@Z @ 0x18006FFEC (--0FindResourceWithID@ResourceManager@Engine@Spectre@@QEAA@_K@Z.c)
 *     ?push_back@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAX$$QEAVResourceData@Engine@Spectre@@@Z @ 0x1800706D4 (-push_back@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@st.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097454 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z.c)
 *     ??1ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800975A8 (--1ResourceData@Engine@Spectre@@QEAA@XZ.c)
 *     ?SetResource@ResourceData@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@@Z @ 0x180097728 (-SetResource@ResourceData@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ResourceManager::Add(__int64 *a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  Spectre::Engine::ResourceManager::FindResourceWithID *ResourceWithID; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v14[4]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v15[128]; // [rsp+50h] [rbp-59h] BYREF

  v14[1] = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v14[2] = a1 + 3;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 3));
  ResourceWithID = Spectre::Engine::ResourceManager::FindResourceWithID::FindResourceWithID(
                     (Spectre::Engine::ResourceManager::FindResourceWithID *)v13,
                     a3);
  std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::ResourceData>>>,Spectre::Engine::ResourceManager::FindResourceWithID>(
    v14,
    *a1,
    a1[1],
    *(_QWORD *)ResourceWithID);
  if ( v14[0] == a1[1] )
  {
    v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v13,
            a2);
    v11 = Spectre::Engine::ResourceData::ResourceData(v15, a3, v10);
    std::vector<Spectre::Engine::ResourceData>::push_back(a1, v11);
    Spectre::Engine::ResourceData::~ResourceData((Spectre::Engine::ResourceData *)v15);
  }
  else
  {
    v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v13,
           a2);
    Spectre::Engine::ResourceData::SetResource(v9, v8);
  }
  _Mtx_unlock(v6);
  v12 = (std::_Ref_count_base *)a2[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
