/*
 * XREFs of ??$make_shared@VIShaderExtension@Engine@Spectre@@AEAY0BA@$$CBD@std@@YA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@0@AEAY0BA@$$CBD@Z @ 0x18005F4E8
 * Callers:
 *     ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804 (--0ShaderFamily@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0IShaderExtension@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18005F76C (--0IShaderExtension@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<Spectre::Engine::IShaderExtension,char const (&)[16]>(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 v11[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = operator new(0x80uLL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::IShaderExtension>::`vftable';
    v4 = std::string::string(v11, (__int64)"<NullExtension>");
    Spectre::Engine::IShaderExtension::IShaderExtension(v3 + 4, v4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  if ( v3 != (_DWORD *)-16LL )
  {
    v5 = *((_QWORD *)v3 + 4);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v3 )
        _InterlockedIncrement(v3 + 2);
      v6 = (volatile signed __int32 *)a1[1];
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 )
      {
        v7 = v3 + 4;
        v8 = a1[1];
        _InterlockedIncrement(v6 + 3);
      }
      *((_QWORD *)v3 + 3) = v7;
      v9 = (std::_Ref_count_base *)*((_QWORD *)v3 + 4);
      *((_QWORD *)v3 + 4) = v8;
      if ( v9 )
        std::_Ref_count_base::_Decwref(v9);
      if ( v6 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
