/*
 * XREFs of ?Release@Material@Engine@Spectre@@QEAAXXZ @ 0x180044568
 * Callers:
 *     ??1Material@Engine@Spectre@@UEAA@XZ @ 0x180043A44 (--1Material@Engine@Spectre@@UEAA@XZ.c)
 *     ?ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ @ 0x180060FAC (-ReleaseResources@ShaderFamily@Engine@Spectre@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18002B398 (--0-$weak_ptr@VMaterial@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?OnMaterialDeleted@ShaderFamily@Engine@Spectre@@QEAAXV?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@Z @ 0x180060EFC (-OnMaterialDeleted@ShaderFamily@Engine@Spectre@@QEAAXV-$weak_ptr@VMaterial@Engine@Spectre@@@std@.c)
 */

void __fastcall Spectre::Engine::Material::Release(Spectre::Engine::Material *this)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v7 = 0LL;
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=((_QWORD *)this + 15, (__int64 *)v7);
  if ( v7[1] )
    std::_Ref_count_base::_Decref(v7[1]);
  v2 = (_QWORD *)((char *)this + 136);
  if ( std::operator!=<Spectre::Engine::Scene>((_QWORD *)this + 17) )
  {
    v3 = (_QWORD *)((char *)this + 216);
    v4 = std::weak_ptr<Spectre::Engine::Material>::weak_ptr<Spectre::Engine::Material>(v7, v3);
    Spectre::Engine::ShaderFamily::OnMaterialDeleted(v5, v4);
    *(_OWORD *)v7 = 0LL;
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v2, (__int64 *)v7);
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
    *v3 = 0LL;
    v6 = (std::_Ref_count_base *)v3[1];
    v3[1] = 0LL;
    if ( v6 )
      std::_Ref_count_base::_Decwref(v6);
  }
}
