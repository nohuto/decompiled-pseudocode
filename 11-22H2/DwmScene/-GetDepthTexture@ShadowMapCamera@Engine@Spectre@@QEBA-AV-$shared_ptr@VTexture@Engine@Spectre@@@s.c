/*
 * XREFs of ?GetDepthTexture@ShadowMapCamera@Engine@Spectre@@QEBA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@XZ @ 0x18008E2AC
 * Callers:
 *     ?RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18008E9C0 (-RenderScene@ShadowMapCamera@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Spectre::Engine::ShadowMapCamera::GetDepthTexture(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v7; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-38h]
  char v9; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v10; // [rsp+40h] [rbp-28h]
  _BYTE v11[8]; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+50h] [rbp-18h]

  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    &v7,
    (_QWORD *)(a1 + 152));
  if ( std::operator!=<Spectre::Engine::Scene>(&v7) )
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 48LL))(v7, v11);
    v4 = *v3;
    v5 = 5;
  }
  else
  {
    v10 = 0LL;
    v3 = (__int64 *)&v9;
    v4 = 0LL;
    v5 = 6;
  }
  *a2 = v4;
  a2[1] = v3[1];
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  if ( (v5 & 1) != 0 && v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return a2;
}
