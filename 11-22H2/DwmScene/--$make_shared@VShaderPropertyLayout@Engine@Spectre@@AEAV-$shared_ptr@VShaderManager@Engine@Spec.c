/*
 * XREFs of ??$make_shared@VShaderPropertyLayout@Engine@Spectre@@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@AEAW4EShaderPropertyScope@23@@std@@YA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@0@AEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@AEAW4EShaderPropertyScope@Engine@Spectre@@@Z @ 0x18004E468
 * Callers:
 *     ?CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@W4EShaderPropertyScope@23@@Z @ 0x18004F698 (-CreatePropertyLayout@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderPropertyLayout@En.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBV?$shared_ptr@VShaderManager@Engine@Spectre@@@std@@W4EShaderPropertyScope@12@@Z @ 0x180081DEC (--0ShaderPropertyLayout@Engine@Spectre@@QEAA@AEBV-$shared_ptr@VShaderManager@Engine@Spectre@@@st.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::ShaderPropertyLayout,std::shared_ptr<Spectre::Engine::ShaderManager> &,enum Spectre::Engine::EShaderPropertyScope &>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  std::_Ref_count_base *v13; // rcx

  v6 = operator new(0x4F0uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyLayout>::`vftable';
    Spectre::Engine::ShaderPropertyLayout::ShaderPropertyLayout(v6 + 4, a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7 + 4;
  a1[1] = v7;
  *a1 = v7 + 4;
  if ( v7 != (_DWORD *)-16LL )
  {
    v9 = *((_QWORD *)v7 + 3);
    if ( !v9 || !*(_DWORD *)(v9 + 8) )
    {
      if ( v7 )
        _InterlockedIncrement(v7 + 2);
      v10 = (volatile signed __int32 *)a1[1];
      v11 = 0LL;
      v12 = 0LL;
      if ( v10 )
      {
        v11 = v8;
        v12 = a1[1];
        _InterlockedIncrement(v10 + 3);
      }
      *v8 = v11;
      v13 = (std::_Ref_count_base *)v8[1];
      v8[1] = v12;
      if ( v13 )
        std::_Ref_count_base::_Decwref(v13);
      if ( v10 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
    }
  }
  return a1;
}
