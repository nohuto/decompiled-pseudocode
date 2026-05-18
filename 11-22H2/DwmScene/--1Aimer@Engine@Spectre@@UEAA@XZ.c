/*
 * XREFs of ??1Aimer@Engine@Spectre@@UEAA@XZ @ 0x180096658
 * Callers:
 *     ??_GAimer@Engine@Spectre@@UEAAPEAXI@Z @ 0x180096690 (--_GAimer@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::Aimer::~Aimer(Spectre::Engine::Aimer *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::Aimer::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 13);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  Spectre::Engine::Component::~Component(this);
}
