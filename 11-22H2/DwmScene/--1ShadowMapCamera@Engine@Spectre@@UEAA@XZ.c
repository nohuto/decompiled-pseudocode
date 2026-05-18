/*
 * XREFs of ??1ShadowMapCamera@Engine@Spectre@@UEAA@XZ @ 0x18008DA74
 * Callers:
 *     ??_EShadowMapCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008DB20 (--_EShadowMapCamera@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ShadowMapCamera::~ShadowMapCamera(Spectre::Engine::ShadowMapCamera *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  __int64 v8; // rdx

  *(_QWORD *)this = &Spectre::Engine::ShadowMapCamera::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 240);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 238);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 236);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  std::string::_Tidy_deallocate((__int64)this + 1848);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 230);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 228);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 226);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  std::string::_Tidy_deallocate((__int64)this + 1768);
  Spectre::Engine::Camera::~Camera(this, v8);
}
