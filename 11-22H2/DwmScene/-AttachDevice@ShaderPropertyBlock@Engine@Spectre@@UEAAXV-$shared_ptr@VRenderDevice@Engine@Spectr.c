/*
 * XREFs of ?AttachDevice@ShaderPropertyBlock@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800849B0
 * Callers:
 *     ?AttachDevice@Material@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180044120 (-AttachDevice@Material@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@.c)
 *     ?AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004B100 (-AttachDevice@MeshInstance@Engine@Spectre@@UEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std.c)
 *     ?ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@VShaderTypeGroup@23@@Z @ 0x1800846B8 (-ApplyState@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectr.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     ??0EngineInvalidArgException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18003AED8 (--0EngineInvalidArgException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 *     ?GetName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180082F3C (-GetName@ShaderPropertyLayout@Engine@Spectre@@QEBAAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 *     ??$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@XZ @ 0x180083C50 (--$CreateResource@VConstantBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$sha_ea_180083C50.c)
 *     ??$CreateResource@VDeviceConstantBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@XZ @ 0x180083C70 (--$CreateResource@VDeviceConstantBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$s.c)
 *     ??$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@?$map@W4RenderDeviceID@Engine@Spectre@@IU?$less@W4RenderDeviceID@Engine@Spectre@@@std@@V?$allocator@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@I@std@@PEAX@std@@_N@1@AEBW4RenderDeviceID@Engine@Spectre@@@Z @ 0x180084184 (--$_Try_emplace@AEBW4RenderDeviceID@Engine@Spectre@@$$V@-$map@W4RenderDeviceID@Engine@Spectre@@I.c)
 *     ?AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@Z @ 0x180084B94 (-AttachDeviceConstantBuffer@ConstantBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceConstant.c)
 *     ?Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z @ 0x180084D00 (-Contains@ConstantBuffer@Engine@Spectre@@QEBA_NW4RenderDeviceID@23@@Z.c)
 *     ?GetBuffer@ShaderPropertyBlock@Engine@Spectre@@AEAAPEBXXZ @ 0x180085090 (-GetBuffer@ShaderPropertyBlock@Engine@Spectre@@AEAAPEBXXZ.c)
 *     ?GetBufferSizeBytes@ShaderPropertyBlock@Engine@Spectre@@AEBAIXZ @ 0x18008509C (-GetBufferSizeBytes@ShaderPropertyBlock@Engine@Spectre@@AEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::ShaderPropertyBlock::AttachDevice(
        Spectre::Engine::ShaderPropertyBlock *this,
        Spectre::Engine::RenderDevice **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  _QWORD *v7; // r14
  __int64 *Engine; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  __int64 ID; // r15
  __int64 v14; // rbx
  Spectre::Engine::ShaderPropertyBlock *v15; // rcx
  const void *Buffer; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int8 (__fastcall *v19)(__int64, const void *, __int64, __int64, __int64); // r11
  _QWORD *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // [rsp+30h] [rbp-69h] BYREF
  __int64 v23; // [rsp+38h] [rbp-61h] BYREF
  std::_Ref_count_base *v24; // [rsp+40h] [rbp-59h]
  Spectre::Engine::RenderDevice **v25; // [rsp+48h] [rbp-51h]
  _QWORD v26[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v27[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v25 = a2;
  if ( !(unsigned int)Spectre::Engine::RenderDevice::GetID((__int64)*a2)
    || *((_QWORD *)this + 4) == *((_QWORD *)this + 5) )
  {
    v6 = *(std::_Ref_count_base **)(v4 + 8);
  }
  else
  {
    Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(v5 + 24));
    v7 = (_QWORD *)((char *)this + 128);
    if ( std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 16) )
    {
      Engine = (__int64 *)Spectre::Engine::RenderDevice::GetEngine(*a2);
      v9 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::ConstantBuffer,>(Engine, (__int64)&v23);
      v10 = *v9;
      v11 = v9[1];
      *v9 = 0LL;
      v9[1] = 0LL;
      *v7 = v10;
      v12 = (std::_Ref_count_base *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v11;
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    ID = (unsigned int)Spectre::Engine::RenderDevice::GetID((__int64)*a2);
    if ( !(unsigned __int8)Spectre::Engine::ConstantBuffer::Contains(*v7, ID) )
    {
      Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceConstantBuffer>((__int64)*a2, &v23);
      v14 = v23;
      Spectre::Engine::ShaderPropertyLayout::GetName(*((_QWORD *)this + 2));
      Spectre::Engine::ShaderPropertyBlock::GetBufferSizeBytes(this);
      Buffer = Spectre::Engine::ShaderPropertyBlock::GetBuffer(v15);
      if ( !v19(v14, Buffer, v18, 2LL, v17) )
      {
        std::string::string(v27, (__int64)"ShaderPropertyBlock::AttachDevice() -- failed to create constant buffer");
        v20 = std::string::string(
                v26,
                (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\shaderpropertyblock.cpp");
        Spectre::Engine::EngineInvalidArgException::EngineInvalidArgException(
          pExceptionObject,
          (__int64)v20,
          v21,
          (__int64)v27,
          0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      Spectre::Engine::ConstantBuffer::AttachDeviceConstantBuffer(*v7, &v23);
      v22 = ID;
      *(_DWORD *)(*(_QWORD *)std::map<enum Spectre::Engine::RenderDeviceID,unsigned int>::_Try_emplace<enum Spectre::Engine::RenderDeviceID const &,>(
                               (_QWORD *)this + 11,
                               (__int64)v26,
                               &v22)
                + 32LL) = 0;
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
    }
    v6 = a2[1];
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
}
