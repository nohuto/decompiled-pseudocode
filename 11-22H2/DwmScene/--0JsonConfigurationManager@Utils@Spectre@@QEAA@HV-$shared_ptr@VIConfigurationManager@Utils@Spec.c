/*
 * XREFs of ??0JsonConfigurationManager@Utils@Spectre@@QEAA@HV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@Z @ 0x1800DDF40
 * Callers:
 *     ??$make_shared@VJsonConfigurationManager@Utils@Spectre@@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VJsonConfigurationManager@Utils@Spectre@@@0@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@0@@Z @ 0x180030480 (--$make_shared@VJsonConfigurationManager@Utils@Spectre@@AEAHAEAV-$shared_ptr@VIConfigurationMana.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0IConfigurationManager@Utils@Spectre@@QEAA@HAEBV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@Z @ 0x1800DBC24 (--0IConfigurationManager@Utils@Spectre@@QEAA@HAEBV-$shared_ptr@VIConfigurationManager@Utils@Spec.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  std::_Ref_count_base *v7; // rcx

  Spectre::Utils::IConfigurationManager::IConfigurationManager(a1, a2, a3);
  *(_QWORD *)a1 = &Spectre::Utils::JsonConfigurationManager::`vftable';
  _Mtx_init_in_situ((_Mtx_t)(a1 + 64), 2);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  v5 = operator new(0xC0uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 144) = v5;
  _Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  v6 = operator new(0x68uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 240) = v6;
  *(_DWORD *)(a1 + 256) = 0;
  v7 = (std::_Ref_count_base *)a3[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
