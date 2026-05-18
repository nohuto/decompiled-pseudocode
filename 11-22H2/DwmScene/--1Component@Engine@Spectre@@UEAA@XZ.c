/*
 * XREFs of ??1Component@Engine@Spectre@@UEAA@XZ @ 0x180042EBC
 * Callers:
 *     ??1Light@Engine@Spectre@@UEAA@XZ @ 0x180042F34 (--1Light@Engine@Spectre@@UEAA@XZ.c)
 *     ??_EComponent@Engine@Spectre@@UEAAPEAXI@Z @ 0x180042F50 (--_EComponent@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1Bounds@Engine@Spectre@@UEAA@XZ @ 0x18004A080 (--1Bounds@Engine@Spectre@@UEAA@XZ.c)
 *     ??1MeshInstance@Engine@Spectre@@UEAA@XZ @ 0x18004AEB0 (--1MeshInstance@Engine@Spectre@@UEAA@XZ.c)
 *     ??1LightProbe@Engine@Spectre@@UEAA@XZ @ 0x1800512BC (--1LightProbe@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904 (--1Camera@Engine@Spectre@@UEAA@XZ.c)
 *     ??1ColorTransform@Engine@Spectre@@UEAA@XZ @ 0x18008F58C (--1ColorTransform@Engine@Spectre@@UEAA@XZ.c)
 *     ??1Aimer@Engine@Spectre@@UEAA@XZ @ 0x180096658 (--1Aimer@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::ColorTransform::ColorTransform_::_1_::dtor$1 @ 0x1800E6873 (_Spectre--Engine--ColorTransform--ColorTransform_--_1_--dtor$1.c)
 *     _Spectre::Engine::Bounds::Bounds_::_1_::dtor$2 @ 0x1800E6FFC (_Spectre--Engine--Bounds--Bounds_--_1_--dtor$2.c)
 *     _Spectre::Engine::Camera::Camera_::_1_::dtor$2 @ 0x1800E783F (_Spectre--Engine--Camera--Camera_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Component::~Component(Spectre::Engine::Component *this)
{
  __int64 v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::Component::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  std::string::_Tidy_deallocate((__int64)this + 24);
  *(_QWORD *)this = &Spectre::Engine::IVisitable::`vftable';
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
}
