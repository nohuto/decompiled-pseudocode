/*
 * XREFs of ??1SpectreLightNode@@UEAA@XZ @ 0x180017AAC
 * Callers:
 *     ??_GSpectreLightNode@@UEAAPEAXI@Z @ 0x180018110 (--_GSpectreLightNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SpectreLightNode::~SpectreLightNode(SpectreLightNode *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 24);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *((_DWORD *)this + 3) = -1073741823;
}
