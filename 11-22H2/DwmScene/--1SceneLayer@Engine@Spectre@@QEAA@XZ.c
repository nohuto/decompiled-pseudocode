/*
 * XREFs of ??1SceneLayer@Engine@Spectre@@QEAA@XZ @ 0x180040050
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSceneLayer@Engine@Spectre@@@std@@EEAAXXZ @ 0x180042920 (-_Destroy@-$_Ref_count_obj2@VSceneLayer@Engine@Spectre@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::SceneLayer::~SceneLayer(Spectre::Engine::SceneLayer *this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::wstring::_Tidy_deallocate((__int64)this);
}
