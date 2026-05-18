/*
 * XREFs of ??$make_shared@VShaderFamily@Engine@Spectre@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@5@AEAV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@std@@YA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@0@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@AEAV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@0@@Z @ 0x18004E278
 * Callers:
 *     ?CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@Z @ 0x18004F6E0 (-CreateShaderFamily@ShaderManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VShaderFamily@Engine@Spect.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804 (--0ShaderFamily@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<Spectre::Engine::ShaderFamily,std::string &,std::shared_ptr<Spectre::Engine::ShaderManager>,std::shared_ptr<Spectre::Engine::IShaderExtension> &>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rbx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  std::_Ref_count_base *v16; // rcx
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20[4]; // [rsp+60h] [rbp-38h] BYREF

  v8 = operator new(0x240uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::ShaderFamily>::`vftable';
    v10 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v19,
            a4);
    v18[0] = *a3;
    v18[1] = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
    v11 = std::string::string(v20, a2);
    Spectre::Engine::ShaderFamily::ShaderFamily(v9 + 4, v11, v18, v10);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  a1[1] = v9;
  if ( v9 != (_DWORD *)-16LL )
  {
    v12 = *((_QWORD *)v9 + 3);
    if ( !v12 || !*(_DWORD *)(v12 + 8) )
    {
      if ( v9 )
        _InterlockedIncrement(v9 + 2);
      v13 = (volatile signed __int32 *)a1[1];
      v14 = 0LL;
      v15 = 0LL;
      if ( v13 )
      {
        v14 = v9 + 4;
        v15 = a1[1];
        _InterlockedIncrement(v13 + 3);
      }
      *((_QWORD *)v9 + 2) = v14;
      v16 = (std::_Ref_count_base *)*((_QWORD *)v9 + 3);
      *((_QWORD *)v9 + 3) = v15;
      if ( v16 )
        std::_Ref_count_base::_Decwref(v16);
      if ( v13 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
    }
  }
  return a1;
}
