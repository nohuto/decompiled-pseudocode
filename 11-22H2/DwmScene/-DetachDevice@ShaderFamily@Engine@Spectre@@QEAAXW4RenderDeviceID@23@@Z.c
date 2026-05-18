/*
 * XREFs of ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590
 * Callers:
 *     ?DetachDevice@ShaderManager@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x18004F884 (-DetachDevice@ShaderManager@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ?GetDeviceFromID@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4RenderDeviceID@12@@Z @ 0x18003422C (-GetDeviceFromID@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@W4Rend.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?DetachDevice@Material@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x1800442A0 (-DetachDevice@Material@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ @ 0x18004FA78 (-GetEngine@ShaderManager@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA?AV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@XZ @ 0x180060D1C (-GetShaderManager@ShaderFamily@Engine@Spectre@@QEBA-AV-$shared_ptr@VShaderManager@Engine@Spectre.c)
 *     ?DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z @ 0x180084D40 (-DetachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXW4RenderDeviceID@23@@Z.c)
 *     ?DetachDevice@ShaderPipeline@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180087308 (-DetachDevice@ShaderPipeline@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Spectre::Engine::ShaderFamily::DetachDevice(__int64 a1, unsigned int a2)
{
  Spectre::Engine::ShaderManager **ShaderManager; // rax
  struct Spectre::Engine::Engine *Engine; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD *v10; // rsi
  __int64 *v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *i; // rdi
  __int64 **v14; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  __int64 v17; // [rsp+30h] [rbp-79h] BYREF
  __int64 v18; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v19; // [rsp+40h] [rbp-69h]
  __int64 v20; // [rsp+58h] [rbp-51h] BYREF
  std::_Ref_count_base *v21; // [rsp+60h] [rbp-49h]
  _BYTE v22[8]; // [rsp+68h] [rbp-41h] BYREF
  std::_Ref_count_base *v23; // [rsp+70h] [rbp-39h]
  _QWORD v24[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  ShaderManager = (Spectre::Engine::ShaderManager **)Spectre::Engine::ShaderFamily::GetShaderManager(a1, v22);
  Engine = Spectre::Engine::ShaderManager::GetEngine(*ShaderManager);
  Spectre::Engine::Engine::GetDeviceFromID(Engine, &v20, a2);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(v20 + 24));
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    std::string::string(
      v24,
      (__int64)"ShaderFamily::DetachDevice() -- The family must have finished declaration before detaching device");
    v6 = std::string::string(
           &v18,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
      pExceptionObject,
      (__int64)v6,
      v7,
      (__int64)v24,
      0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = **(_QWORD **)(a1 + 480);
  v17 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v8 + 32, &v18);
    if ( std::operator!=<Spectre::Engine::Scene>(&v18) )
      Spectre::Engine::Material::DetachDevice(v18, a2);
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v17);
    v8 = v17;
  }
  v9 = 0;
  v10 = (_QWORD *)(a1 + 256);
  do
  {
    if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)(a1 + 256 + 16LL * (int)v9)) )
      Spectre::Engine::ShaderPropertyBlock::DetachDevice(*v10, a2);
    ++v9;
    v10 += 2;
  }
  while ( v9 < 0xA );
  v11 = **(__int64 ***)(a1 + 416);
  while ( !*((_BYTE *)v11 + 25) )
  {
    v12 = (_QWORD *)v11[5];
    for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
      Spectre::Engine::ShaderPipeline::DetachDevice(i[2], a2);
    v14 = (__int64 **)v11[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( j = (__int64 *)v11[1]; !*((_BYTE *)j + 25) && v11 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v11 = j;
      v11 = j;
    }
    else
    {
      v11 = (__int64 *)v11[2];
      for ( k = *v14; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v11 = k;
    }
  }
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
}
