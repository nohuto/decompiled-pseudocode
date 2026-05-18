/*
 * XREFs of ??1IConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DBC84
 * Callers:
 *     ??_EIConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z @ 0x1800DBD20 (--_EIConfigurationManager@Utils@Spectre@@UEAAPEAXI@Z.c)
 *     ??1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ @ 0x1800DE264 (--1JsonConfigurationManager@Utils@Spectre@@UEAA@XZ.c)
 *     _Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager_::_1_::dtor$1 @ 0x1800F1DC6 (_Spectre--Utils--JsonConfigurationManager--JsonConfigurationManager_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Utils::IConfigurationManager::~IConfigurationManager(
        Spectre::Utils::IConfigurationManager *this)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rdi
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rsi
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  *(_QWORD *)this = &Spectre::Utils::IConfigurationManager::`vftable';
  v2 = (_QWORD **)*((_QWORD *)this + 6);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (std::_Ref_count_base *)v3[3];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        std::_Ref_count_base::_Decwref(v4);
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*((void **)this + 6), 0x20uLL);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
}
