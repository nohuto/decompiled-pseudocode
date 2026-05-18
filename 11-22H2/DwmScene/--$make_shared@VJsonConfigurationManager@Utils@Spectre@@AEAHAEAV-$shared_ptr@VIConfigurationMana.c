/*
 * XREFs of ??$make_shared@VJsonConfigurationManager@Utils@Spectre@@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@std@@YA?AV?$shared_ptr@VJsonConfigurationManager@Utils@Spectre@@@0@AEAHAEAV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@0@@Z @ 0x180030480
 * Callers:
 *     ?CreateConfiguration@Engine@1Spectre@@QEAAHH@Z @ 0x180032B8C (-CreateConfiguration@Engine@1Spectre@@QEAAHH@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0JsonConfigurationManager@Utils@Spectre@@QEAA@HV?$shared_ptr@VIConfigurationManager@Utils@Spectre@@@std@@@Z @ 0x1800DDF40 (--0JsonConfigurationManager@Utils@Spectre@@QEAA@HV-$shared_ptr@VIConfigurationManager@Utils@Spec.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Utils::JsonConfigurationManager,int &,std::shared_ptr<Spectre::Utils::IConfigurationManager> &>(
        _QWORD *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  std::_Ref_count_base *v14; // rcx
  __int64 v16[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = operator new(0x118uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Utils::JsonConfigurationManager>::`vftable';
    v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           v16,
           a3);
    Spectre::Utils::JsonConfigurationManager::JsonConfigurationManager(v7 + 4, *a2, v8);
  }
  else
  {
    v7 = 0LL;
  }
  v9 = v7 + 4;
  *a1 = v7 + 4;
  a1[1] = v7;
  if ( v7 != (_DWORD *)-16LL )
  {
    v10 = *((_QWORD *)v7 + 4);
    if ( !v10 || !*(_DWORD *)(v10 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement(v7 + 2);
      v11 = (volatile signed __int32 *)a1[1];
      v12 = 0LL;
      v13 = 0LL;
      if ( v11 )
      {
        v12 = v9;
        v13 = a1[1];
        _InterlockedIncrement(v11 + 3);
      }
      *((_QWORD *)v9 + 1) = v12;
      v14 = (std::_Ref_count_base *)*((_QWORD *)v9 + 2);
      *((_QWORD *)v9 + 2) = v13;
      if ( v14 )
        std::_Ref_count_base::_Decwref(v14);
      if ( v11 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    }
  }
  return a1;
}
