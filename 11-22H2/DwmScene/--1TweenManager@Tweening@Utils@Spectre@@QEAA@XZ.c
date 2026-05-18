/*
 * XREFs of ??1TweenManager@Tweening@Utils@Spectre@@QEAA@XZ @ 0x180031F54
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VTweenManager@Tweening@Utils@Spectre@@@std@@EEAAXXZ @ 0x1800381B0 (-_Destroy@-$_Ref_count_obj2@VTweenManager@Tweening@Utils@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@std@@AEAAXXZ @ 0x180013300 (-_Tidy@-$vector@V-$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V-$allocator@V-$shared_ptr@VLigh.c)
 */

void __fastcall Spectre::Utils::Tweening::TweenManager::~TweenManager(Spectre::Utils::Tweening::TweenManager *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 18);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  _Mtx_destroy_in_situ((Spectre::Utils::Tweening::TweenManager *)((char *)this + 56));
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this + 24);
  std::vector<std::shared_ptr<Spectre::Engine::LightProbe>>::_Tidy((__int64)this);
}
