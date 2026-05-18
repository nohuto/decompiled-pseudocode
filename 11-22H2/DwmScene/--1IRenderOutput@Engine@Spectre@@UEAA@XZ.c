/*
 * XREFs of ??1IRenderOutput@Engine@Spectre@@UEAA@XZ @ 0x18002B8F0
 * Callers:
 *     ??1RenderOutput@Engine@Spectre@@MEAA@XZ @ 0x18002B928 (--1RenderOutput@Engine@Spectre@@MEAA@XZ.c)
 *     ??_EIRenderOutput@Engine@Spectre@@UEAAPEAXI@Z @ 0x18002BBA0 (--_EIRenderOutput@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     _Spectre::Engine::RenderOutput::RenderOutput_::_1_::dtor$3 @ 0x1800E5012 (_Spectre--Engine--RenderOutput--RenderOutput_--_1_--dtor$3.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::IRenderOutput::~IRenderOutput(Spectre::Engine::IRenderOutput *this)
{
  std::_Ref_count_base *v2; // rcx

  *(_QWORD *)this = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  Spectre::Engine::Lockable::~Lockable((Spectre::Engine::IRenderOutput *)((char *)this + 8));
}
