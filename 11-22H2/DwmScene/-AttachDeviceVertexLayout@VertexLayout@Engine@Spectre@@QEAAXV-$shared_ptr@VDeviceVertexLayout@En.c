/*
 * XREFs of ?AttachDeviceVertexLayout@VertexLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18008BF08
 * Callers:
 *     ?AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008BE40 (-AttachDevice@VertexLayout@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@U?$less@W4RenderDeviceID@Engine@Spectre@@@5@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceShader@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x1800541F0 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engi_ea_1800541F0.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     ??$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@?$vector@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@V?$allocator@UVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@std@@@std@@AEAAXPEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x18008BA48 (--$_Assign_range@PEAUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@@-$vector@UVertexElement.c)
 *     ??$equal@PEBUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEBU1234@@std@@YA_NQEBUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@00@Z @ 0x18008BBFC (--$equal@PEBUVertexElementDesc@VertexLayoutBase@Engine@Spectre@@PEBU1234@@std@@YA_NQEBUVertexEle.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::VertexLayout::AttachDeviceVertexLayout(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  unsigned int v5; // r15d
  __int64 *v6; // rsi
  char v7; // r14
  int v8; // ecx
  char v9; // al
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  std::_Ref_count_base *v15; // rcx
  __int64 v16; // rsi
  std::_Ref_count_base *v17; // rcx
  unsigned int v18; // [rsp+30h] [rbp-59h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-51h]
  _QWORD v20[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF

  v19 = a2;
  v4 = *a2;
  v5 = *(_DWORD *)(*a2 + 88LL);
  v6 = (__int64 *)(a1 + 144);
  v7 = 1;
  if ( *(_QWORD *)(a1 + 152) && (*(_DWORD *)(a1 + 152) != 1 || *(_DWORD *)(*(_QWORD *)*v6 + 32LL) != v5) )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8 != *(_DWORD *)(v4 + 96) )
      goto LABEL_12;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_12;
      if ( *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112) == *(_QWORD *)(v4 + 120) - *(_QWORD *)(v4 + 112) )
        v9 = std::equal<Spectre::Engine::VertexLayoutBase::VertexElementDesc const *,Spectre::Engine::VertexLayoutBase::VertexElementDesc const *>(
               *(_QWORD *)(a1 + 112),
               *(_QWORD **)(a1 + 120),
               *(_QWORD *)(v4 + 112));
      else
        v9 = 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v4 + 104);
    }
    if ( !v9 )
    {
LABEL_12:
      std::string::string(v21, (__int64)"Attaching a device vertex layout to an incompatible vertex layout.");
      v10 = std::string::string(
              v20,
              (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\eng"
                       "ine\\vertexlayout.cpp");
      Spectre::Engine::EngineException::EngineException(pExceptionObject, (__int64)v10, v11, (const char *)v21, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
  }
  v18 = v5;
  v12 = *(_QWORD *)std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
                     v6,
                     (__int64)v20,
                     &v18);
  v13 = *a2;
  v14 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v12 + 40) = v13;
  v15 = *(std::_Ref_count_base **)(v12 + 48);
  *(_QWORD *)(v12 + 48) = v14;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( v7 )
  {
    v18 = v5;
    v16 = *(_QWORD *)(*(_QWORD *)std::map<enum Spectre::Engine::RenderDeviceID,std::shared_ptr<Spectre::Engine::DeviceShader>>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
                                   v6,
                                   (__int64)v20,
                                   &v18)
                    + 40LL);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(v16 + 96);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v16 + 104);
    if ( a1 + 112 != v16 + 112 )
      std::vector<Spectre::Engine::VertexLayoutBase::VertexElementDesc>::_Assign_range<Spectre::Engine::VertexLayoutBase::VertexElementDesc *>(
        (_QWORD *)(a1 + 112),
        *(_QWORD *)(v16 + 112),
        *(_QWORD *)(v16 + 120));
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(v16 + 136);
  }
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
}
