/*
 * XREFs of ??1LightProbe@Engine@Spectre@@UEAA@XZ @ 0x1800512BC
 * Callers:
 *     ??_GLightProbe@Engine@Spectre@@UEAAPEAXI@Z @ 0x180051620 (--_GLightProbe@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18001E6B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

void __fastcall Spectre::Engine::LightProbe::~LightProbe(Spectre::Engine::LightProbe *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::LightProbe::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 65);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::vector<unsigned char>::_Tidy((__int64)this + 472);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 57);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 55);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::Component::~Component(this);
}
