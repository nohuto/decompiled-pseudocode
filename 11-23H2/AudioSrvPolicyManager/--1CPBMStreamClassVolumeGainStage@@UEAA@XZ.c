/*
 * XREFs of ??1CPBMStreamClassVolumeGainStage@@UEAA@XZ @ 0x1800201E8
 * Callers:
 *     ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x180020DD0 (--_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180002550 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CPBMStreamClassVolumeGainStage::~CPBMStreamClassVolumeGainStage(CPBMStreamClassVolumeGainStage *this)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  *((_DWORD *)this + 13) = -1073741823;
  *(_QWORD *)this = &CGainStage::`vftable';
}
