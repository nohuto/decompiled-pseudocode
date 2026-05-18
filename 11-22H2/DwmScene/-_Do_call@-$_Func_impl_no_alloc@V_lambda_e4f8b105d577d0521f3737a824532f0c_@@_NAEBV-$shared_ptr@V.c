/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_e4f8b105d577d0521f3737a824532f0c_@@_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@std@@EEAA_NAEBV?$shared_ptr@VSceneNode@Engine@Spectre@@@2@@Z @ 0x18001B7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$GetComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA?AV?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@XZ @ 0x18001636C (--$GetComponent@VLightProbe@Engine@Spectre@@@SceneNode@Engine@Spectre@@QEBA-AV-$shared_ptr@VLigh.c)
 */

char __fastcall std::_Func_impl_no_alloc<_lambda_e4f8b105d577d0521f3737a824532f0c_,bool,std::shared_ptr<Spectre::Engine::SceneNode> const &>::_Do_call(
        __int64 a1,
        Spectre::Engine::SceneNode **a2)
{
  char v3; // bl
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]

  Spectre::Engine::SceneNode::GetComponent<Spectre::Engine::LightProbe>(*a2, &v5);
  v3 = 0;
  if ( std::operator!=<Spectre::Engine::Scene>(&v5) )
  {
    std::shared_ptr<Spectre::Engine::Light>::operator=(*(__int64 **)(a1 + 8), &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  else
  {
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    return 1;
  }
  return v3;
}
