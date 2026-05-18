/*
 * XREFs of ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C
 * Callers:
 *     ?SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z @ 0x18004499C (-SetTextureAsync@Material@Engine@Spectre@@QEAAXW4ShaderProperty@23@_KPEAVResourceManager@23@@Z.c)
 *     ?LoadMesh@MeshInstance@Engine@Spectre@@AEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@PEAVRenderDevice@23@IV?$shared_ptr@VMesh@Engine@Spectre@@@5@IIPEBM22_N@Z @ 0x18004BD40 (-LoadMesh@MeshInstance@Engine@Spectre@@AEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@std@@VFindResourceWithID@ResourceManager@Engine@Spectre@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@0@V10@V10@VFindResourceWithID@ResourceManager@Engine@Spectre@@@Z @ 0x18006FF90 (--$find_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@VResourceData@Engine@Spectre@@@st.c)
 *     ??0FindResourceWithID@ResourceManager@Engine@Spectre@@QEAA@_K@Z @ 0x18006FFEC (--0FindResourceWithID@ResourceManager@Engine@Spectre@@QEAA@_K@Z.c)
 *     ?GetRepresentative@ResourceManager@Engine@Spectre@@QEBA_K_K@Z @ 0x180070250 (-GetRepresentative@ResourceManager@Engine@Spectre@@QEBA_K_K@Z.c)
 *     ?push_back@?$vector@VResourceData@Engine@Spectre@@V?$allocator@VResourceData@Engine@Spectre@@@std@@@std@@QEAAX$$QEAVResourceData@Engine@Spectre@@@Z @ 0x1800706D4 (-push_back@-$vector@VResourceData@Engine@Spectre@@V-$allocator@VResourceData@Engine@Spectre@@@st.c)
 *     ??0ResourceData@Engine@Spectre@@QEAA@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z @ 0x1800974F0 (--0ResourceData@Engine@Spectre@@QEAA@_KV-$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@std@@@Z.c)
 *     ??1ResourceData@Engine@Spectre@@QEAA@XZ @ 0x1800975A8 (--1ResourceData@Engine@Spectre@@QEAA@XZ.c)
 *     ?Request@ResourceData@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@V?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x180097654 (-Request@ResourceData@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Spectre::Engine::ResourceManager::Request(
        Spectre::Engine::ResourceManager *this,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  unsigned __int64 Representative; // rdi
  Spectre::Engine::ResourceManager::FindResourceWithID *ResourceWithID; // rax
  _QWORD *v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rax
  std::_Ref_count_base *v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v18[4]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v19[128]; // [rsp+50h] [rbp-69h] BYREF

  v18[0] = a2;
  v18[2] = a4;
  v8 = (Spectre::Engine::ResourceManager *)((char *)this + 24);
  v18[3] = (char *)this + 24;
  std::_Mutex_base::lock((Spectre::Engine::ResourceManager *)((char *)this + 24));
  Representative = Spectre::Engine::ResourceManager::GetRepresentative(this, a3);
  ResourceWithID = Spectre::Engine::ResourceManager::FindResourceWithID::FindResourceWithID(
                     (Spectre::Engine::ResourceManager::FindResourceWithID *)v17,
                     Representative);
  std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::ResourceData>>>,Spectre::Engine::ResourceManager::FindResourceWithID>(
    v18,
    *(_QWORD *)this,
    *((_QWORD *)this + 1),
    *(_QWORD *)ResourceWithID);
  if ( v18[0] == *((_QWORD *)this + 1) )
  {
    v13 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v17,
            a4);
    v14 = Spectre::Engine::ResourceData::ResourceData(v19, Representative, v13);
    std::vector<Spectre::Engine::ResourceData>::push_back(this, v14);
    Spectre::Engine::ResourceData::~ResourceData((Spectre::Engine::ResourceData *)v19);
    Spectre::Utils::GetCompletedTaskHandler(a2);
  }
  else
  {
    v11 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            v17,
            a4);
    Spectre::Engine::ResourceData::Request(v12, a2, v11);
  }
  _Mtx_unlock(v8);
  v15 = (std::_Ref_count_base *)a4[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return a2;
}
