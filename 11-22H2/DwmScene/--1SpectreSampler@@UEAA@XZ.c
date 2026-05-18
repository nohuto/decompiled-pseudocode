/*
 * XREFs of ??1SpectreSampler@@UEAA@XZ @ 0x180017AF8
 * Callers:
 *     ??_ESpectreSampler@@UEAAPEAXI@Z @ 0x180018150 (--_ESpectreSampler@@UEAAPEAXI@Z.c)
 *     ??_GSpectreMesh@@UEAAPEAXI@Z @ 0x180018190 (--_GSpectreMesh@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SpectreSampler::~SpectreSampler(SpectreSampler *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
