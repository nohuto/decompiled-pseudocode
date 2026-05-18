/*
 * XREFs of ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAX_KV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C9D0
 * Callers:
 *     ?SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV?$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x18004C98C (-SetMaterial@MeshInstance@Engine@Spectre@@QEAAXV-$shared_ptr@VMaterial@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ?GetTexture@FrameBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x180026A84 (-GetTexture@FrameBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ.c)
 *     ?AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@@Z @ 0x18004B250 (-AttachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_KV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 *     ?DetachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_K@Z @ 0x18004B800 (-DetachShaderFamily@MeshInstance@Engine@Spectre@@EEAAX_K@Z.c)
 *     ?at@?$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V?$allocator@UMaterialInfo@MeshInstance@Engine@Spectre@@@std@@@std@@QEAAAEAUMaterialInfo@MeshInstance@Engine@Spectre@@_K@Z @ 0x18004CE64 (-at@-$vector@UMaterialInfo@MeshInstance@Engine@Spectre@@V-$allocator@UMaterialInfo@MeshInstance@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::MeshInstance::SetMaterial(Spectre::Engine::Component *this, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rcx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 *v8; // rdi
  _QWORD *v9; // rax
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-59h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  std::_Ref_count_base *v13; // [rsp+48h] [rbp-41h]
  __int64 *v14; // [rsp+60h] [rbp-29h]
  _QWORD v15[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp-1h] BYREF

  v14 = a3;
  v5 = (_QWORD *)((char *)this + 104);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(v5[1] - *v5) >> 3)) )
  {
    std::string::string(v15, (__int64)"Out of range");
    v6 = (unsigned int)std::string::string(
                         &v12,
                         (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\"
                                  "source\\engine\\meshinstance.cpp");
    Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v6, v7, (unsigned int)v15, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v8 = (__int64 *)std::vector<Spectre::Engine::MeshInstance::MaterialInfo>::at(v5, 0LL);
  if ( !std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(v8, a3) )
  {
    Spectre::Engine::MeshInstance::DetachShaderFamily(this, 0LL);
    std::shared_ptr<Spectre::Engine::Light>::operator=(v8, a3);
    if ( std::operator!=<Spectre::Engine::Scene>(a3) )
    {
      Spectre::Engine::FrameBuffer::GetTexture(*a3, &v12);
      if ( std::operator!=<Spectre::Engine::Scene>(&v12) )
      {
        v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
               &v11,
               &v12);
        Spectre::Engine::MeshInstance::AttachShaderFamily(this, 0LL, v9);
      }
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
  }
  v10 = (std::_Ref_count_base *)a3[1];
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
